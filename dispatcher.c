#include <stdio.h>
#include <dlfcn.h>

#include "dispatcher.h"

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
  return 0;
}

void standard_process_request() {
  standard_process_request_sym();
}
