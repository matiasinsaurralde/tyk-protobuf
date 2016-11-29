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
};

#ifdef __cplusplus
extern "C" {
#endif
  struct CP_OUTPUT StandardProcessRequest(void* serialized_object);

  struct CP_OBJECT DirectProcessRequest(char* hook_name);
#ifdef __cplusplus
}
#endif
