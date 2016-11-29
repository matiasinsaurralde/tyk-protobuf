#include <stdio.h>
#include <dlfcn.h>

#include "dispatcher.h"
#include "middleware/middleware.h"

int load_middleware() {
  lib = dlopen("./middleware/build/libmiddleware.dylib", RTLD_NOW);
  if(lib == NULL) {
    return 1;
  }
  return 0;
}

int load_symbols() {
  standard_process_request_sym = dlsym(lib, "StandardProcessRequest");
  if(standard_process_request_sym == NULL) {
    return 1;
  }

  direct_process_request_sym = dlsym(lib, "DirectProcessRequest");
  if(direct_process_request_sym == NULL) {
    return 1;
  }
  return 0;
}

struct CP_OUTPUT standard_process_request(void* serialized_object) {
  return standard_process_request_sym(serialized_object);
}

void direct_process_request(struct CP_OBJECT* object) {
  direct_process_request_sym(object);
}
