#include <iostream>
#include <fstream>
#include <string>
#include "tyk/coprocess_object.pb.h"
using namespace std;

#include "middleware.h"

void ProcessRequest_(struct CoProcessMessage* cp_object, struct CoProcessMessage* cp_output_object) {
  coprocess::Object object;

  char* input_data = (char*)cp_object->p_data;
  std::string str(input_data);
  object.ParseFromString(str);

  // std::cout << object.DebugString() << std::endl;

  coprocess::MiniRequestObject* object_request;
  object_request = object.mutable_request();

  google::protobuf::Map<std::string, std::string>* set_headers;
  set_headers = object_request->mutable_set_headers();

  std::string header_name("cppheader");
  std::string header_value("cppheadervalue");

  (*set_headers)[header_name] = header_value;

  /*
  std::cout << "Modified object" << std::endl;
  std::cout << object.DebugString() << std::endl;
  */

  std::string modified_object_data;
  object.SerializeToString(&modified_object_data);

  int length = modified_object_data.length();
  const char* modified_object_data_p = modified_object_data.c_str();

  cp_output_object->p_data = malloc(length);
  memmove(cp_output_object->p_data, modified_object_data_p, length);
  cp_output_object->length = length;

}

struct CP_OUTPUT StandardProcessRequest_(void *data) {
  // std::cout << "StandardProcessRequest (C++), got: " << std::endl;
  // printf("%s\n", data);

  coprocess::Object object;
  std::string str((char*)data);
  object.ParseFromString(str);

  // std::cout << "Hook name is: " << object.hook_name() << std::endl;
  // Alter hook name:
  std::string new_hook_name("thehook");

  object.set_hook_name(new_hook_name);

  std::string modified_object_data;
  object.SerializeToString(&modified_object_data);

  int length = modified_object_data.length();
  const char* modified_object_data_p = modified_object_data.c_str();

  void* output_data = malloc(length);
  memcpy(output_data, modified_object_data_p, length);

  struct CP_OUTPUT out = {output_data, length};

  return out;
}

extern "C" {
  #include <stdio.h>

  struct CP_OUTPUT StandardProcessRequest(void* serialized_object) {
    struct CP_OUTPUT out = StandardProcessRequest_(serialized_object);
    return out;
  };

  struct CP_OBJECT DirectProcessRequest(char* hook_name) {
    struct CP_OBJECT out = {"the_hook"};
    return out;
  };
}
