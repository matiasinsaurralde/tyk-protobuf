#ifndef STRUCTS_H
#define STRUCTS_H
struct CoProcessMessage {
  void* p_data;
  int length;
};

struct CP_OUTPUT {
  void *p_data;
  int length;
};

struct CP_OBJECT {
  char* hook_name;
  struct CP_REQUEST_OBJECT* request;
};

struct CP_REQUEST_OBJECT {
  void* body;
  int body_length;
  void* url;
  int url_length;
};
#endif

#ifdef __cplusplus
extern "C" {
#endif
  struct CP_OUTPUT StandardProcessRequest(void* serialized_object);

void DirectProcessRequest(struct CP_OBJECT *object);
#ifdef __cplusplus
}
#endif
