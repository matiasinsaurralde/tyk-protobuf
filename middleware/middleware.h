struct CoProcessMessage {
  void* p_data;
  int length;
};

#ifdef __cplusplus
extern "C" {
#endif
  void StandardProcessRequest();
#ifdef __cplusplus
}
#endif
