// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: coprocess_mini_request_object.proto

#ifndef PROTOBUF_coprocess_5fmini_5frequest_5fobject_2eproto__INCLUDED
#define PROTOBUF_coprocess_5fmini_5frequest_5fobject_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3001000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3001000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/message_lite.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/map.h>
#include <google/protobuf/map_field_lite.h>
#include "coprocess_return_overrides.pb.h"
// @@protoc_insertion_point(includes)

namespace coprocess {

// Internal implementation detail -- do not call these.
void protobuf_AddDesc_coprocess_5fmini_5frequest_5fobject_2eproto();
void protobuf_InitDefaults_coprocess_5fmini_5frequest_5fobject_2eproto();
void protobuf_AssignDesc_coprocess_5fmini_5frequest_5fobject_2eproto();
void protobuf_ShutdownFile_coprocess_5fmini_5frequest_5fobject_2eproto();

class MiniRequestObject;

// ===================================================================

class MiniRequestObject : public ::google::protobuf::MessageLite /* @@protoc_insertion_point(class_definition:coprocess.MiniRequestObject) */ {
 public:
  MiniRequestObject();
  virtual ~MiniRequestObject();

  MiniRequestObject(const MiniRequestObject& from);

  inline MiniRequestObject& operator=(const MiniRequestObject& from) {
    CopyFrom(from);
    return *this;
  }

  inline ::google::protobuf::Arena* GetArena() const { return GetArenaNoVirtual(); }
  inline void* GetMaybeArenaPointer() const {
    return MaybeArenaPtr();
  }
  static const MiniRequestObject& default_instance();

  static const MiniRequestObject* internal_default_instance();

  void UnsafeArenaSwap(MiniRequestObject* other);
  void Swap(MiniRequestObject* other);

  // implements Message ----------------------------------------------

  inline MiniRequestObject* New() const { return New(NULL); }

  MiniRequestObject* New(::google::protobuf::Arena* arena) const;
  void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from);
  void CopyFrom(const MiniRequestObject& from);
  void MergeFrom(const MiniRequestObject& from);
  void Clear();
  bool IsInitialized() const;

  size_t ByteSizeLong() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  void DiscardUnknownFields();
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(MiniRequestObject* other);
  void UnsafeMergeFrom(const MiniRequestObject& from);
  protected:
  explicit MiniRequestObject(::google::protobuf::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::google::protobuf::Arena* arena);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return _arena_ptr_;
  }
  inline ::google::protobuf::Arena* MaybeArenaPtr() const {
    return _arena_ptr_;
  }
  public:

  ::std::string GetTypeName() const;

  // nested types ----------------------------------------------------


  // accessors -------------------------------------------------------

  // map<string, string> headers = 1;
  int headers_size() const;
  void clear_headers();
  static const int kHeadersFieldNumber = 1;
  const ::google::protobuf::Map< ::std::string, ::std::string >&
      headers() const;
  ::google::protobuf::Map< ::std::string, ::std::string >*
      mutable_headers();

  // map<string, string> set_headers = 2;
  int set_headers_size() const;
  void clear_set_headers();
  static const int kSetHeadersFieldNumber = 2;
  const ::google::protobuf::Map< ::std::string, ::std::string >&
      set_headers() const;
  ::google::protobuf::Map< ::std::string, ::std::string >*
      mutable_set_headers();

  // repeated string delete_headers = 3;
  int delete_headers_size() const;
  void clear_delete_headers();
  static const int kDeleteHeadersFieldNumber = 3;
  const ::std::string& delete_headers(int index) const;
  ::std::string* mutable_delete_headers(int index);
  void set_delete_headers(int index, const ::std::string& value);
  void set_delete_headers(int index, const char* value);
  void set_delete_headers(int index, const char* value, size_t size);
  ::std::string* add_delete_headers();
  void add_delete_headers(const ::std::string& value);
  void add_delete_headers(const char* value);
  void add_delete_headers(const char* value, size_t size);
  const ::google::protobuf::RepeatedPtrField< ::std::string>& delete_headers() const;
  ::google::protobuf::RepeatedPtrField< ::std::string>* mutable_delete_headers();

  // optional string body = 4;
  void clear_body();
  static const int kBodyFieldNumber = 4;
  const ::std::string& body() const;
  void set_body(const ::std::string& value);
  void set_body(const char* value);
  void set_body(const char* value, size_t size);
  ::std::string* mutable_body();
  ::std::string* release_body();
  void set_allocated_body(::std::string* body);
  ::std::string* unsafe_arena_release_body();
  void unsafe_arena_set_allocated_body(
      ::std::string* body);

  // optional string url = 5;
  void clear_url();
  static const int kUrlFieldNumber = 5;
  const ::std::string& url() const;
  void set_url(const ::std::string& value);
  void set_url(const char* value);
  void set_url(const char* value, size_t size);
  ::std::string* mutable_url();
  ::std::string* release_url();
  void set_allocated_url(::std::string* url);
  ::std::string* unsafe_arena_release_url();
  void unsafe_arena_set_allocated_url(
      ::std::string* url);

  // map<string, string> params = 6;
  int params_size() const;
  void clear_params();
  static const int kParamsFieldNumber = 6;
  const ::google::protobuf::Map< ::std::string, ::std::string >&
      params() const;
  ::google::protobuf::Map< ::std::string, ::std::string >*
      mutable_params();

  // map<string, string> add_params = 7;
  int add_params_size() const;
  void clear_add_params();
  static const int kAddParamsFieldNumber = 7;
  const ::google::protobuf::Map< ::std::string, ::std::string >&
      add_params() const;
  ::google::protobuf::Map< ::std::string, ::std::string >*
      mutable_add_params();

  // map<string, string> extended_params = 8;
  int extended_params_size() const;
  void clear_extended_params();
  static const int kExtendedParamsFieldNumber = 8;
  const ::google::protobuf::Map< ::std::string, ::std::string >&
      extended_params() const;
  ::google::protobuf::Map< ::std::string, ::std::string >*
      mutable_extended_params();

  // repeated string delete_params = 9;
  int delete_params_size() const;
  void clear_delete_params();
  static const int kDeleteParamsFieldNumber = 9;
  const ::std::string& delete_params(int index) const;
  ::std::string* mutable_delete_params(int index);
  void set_delete_params(int index, const ::std::string& value);
  void set_delete_params(int index, const char* value);
  void set_delete_params(int index, const char* value, size_t size);
  ::std::string* add_delete_params();
  void add_delete_params(const ::std::string& value);
  void add_delete_params(const char* value);
  void add_delete_params(const char* value, size_t size);
  const ::google::protobuf::RepeatedPtrField< ::std::string>& delete_params() const;
  ::google::protobuf::RepeatedPtrField< ::std::string>* mutable_delete_params();

  // optional .coprocess.ReturnOverrides return_overrides = 10;
  bool has_return_overrides() const;
  void clear_return_overrides();
  static const int kReturnOverridesFieldNumber = 10;
  private:
  void _slow_mutable_return_overrides();
  void _slow_set_allocated_return_overrides(
      ::google::protobuf::Arena* message_arena, ::coprocess::ReturnOverrides** return_overrides);
  ::coprocess::ReturnOverrides* _slow_release_return_overrides();
  public:
  const ::coprocess::ReturnOverrides& return_overrides() const;
  ::coprocess::ReturnOverrides* mutable_return_overrides();
  ::coprocess::ReturnOverrides* release_return_overrides();
  void set_allocated_return_overrides(::coprocess::ReturnOverrides* return_overrides);
  ::coprocess::ReturnOverrides* unsafe_arena_release_return_overrides();
  void unsafe_arena_set_allocated_return_overrides(
      ::coprocess::ReturnOverrides* return_overrides);

  // @@protoc_insertion_point(class_scope:coprocess.MiniRequestObject)
 private:

  ::google::protobuf::internal::ArenaStringPtr _unknown_fields_;
  ::google::protobuf::Arena* _arena_ptr_;

  friend class ::google::protobuf::Arena;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  typedef ::google::protobuf::internal::MapEntryLite<
      ::std::string, ::std::string,
      ::google::protobuf::internal::WireFormatLite::TYPE_STRING,
      ::google::protobuf::internal::WireFormatLite::TYPE_STRING,
      0 >
      MiniRequestObject_HeadersEntry;
  ::google::protobuf::internal::MapFieldLite<
      ::std::string, ::std::string,
      ::google::protobuf::internal::WireFormatLite::TYPE_STRING,
      ::google::protobuf::internal::WireFormatLite::TYPE_STRING,
      0 > headers_;
  typedef ::google::protobuf::internal::MapEntryLite<
      ::std::string, ::std::string,
      ::google::protobuf::internal::WireFormatLite::TYPE_STRING,
      ::google::protobuf::internal::WireFormatLite::TYPE_STRING,
      0 >
      MiniRequestObject_SetHeadersEntry;
  ::google::protobuf::internal::MapFieldLite<
      ::std::string, ::std::string,
      ::google::protobuf::internal::WireFormatLite::TYPE_STRING,
      ::google::protobuf::internal::WireFormatLite::TYPE_STRING,
      0 > set_headers_;
  ::google::protobuf::RepeatedPtrField< ::std::string> delete_headers_;
  typedef ::google::protobuf::internal::MapEntryLite<
      ::std::string, ::std::string,
      ::google::protobuf::internal::WireFormatLite::TYPE_STRING,
      ::google::protobuf::internal::WireFormatLite::TYPE_STRING,
      0 >
      MiniRequestObject_ParamsEntry;
  ::google::protobuf::internal::MapFieldLite<
      ::std::string, ::std::string,
      ::google::protobuf::internal::WireFormatLite::TYPE_STRING,
      ::google::protobuf::internal::WireFormatLite::TYPE_STRING,
      0 > params_;
  typedef ::google::protobuf::internal::MapEntryLite<
      ::std::string, ::std::string,
      ::google::protobuf::internal::WireFormatLite::TYPE_STRING,
      ::google::protobuf::internal::WireFormatLite::TYPE_STRING,
      0 >
      MiniRequestObject_AddParamsEntry;
  ::google::protobuf::internal::MapFieldLite<
      ::std::string, ::std::string,
      ::google::protobuf::internal::WireFormatLite::TYPE_STRING,
      ::google::protobuf::internal::WireFormatLite::TYPE_STRING,
      0 > add_params_;
  typedef ::google::protobuf::internal::MapEntryLite<
      ::std::string, ::std::string,
      ::google::protobuf::internal::WireFormatLite::TYPE_STRING,
      ::google::protobuf::internal::WireFormatLite::TYPE_STRING,
      0 >
      MiniRequestObject_ExtendedParamsEntry;
  ::google::protobuf::internal::MapFieldLite<
      ::std::string, ::std::string,
      ::google::protobuf::internal::WireFormatLite::TYPE_STRING,
      ::google::protobuf::internal::WireFormatLite::TYPE_STRING,
      0 > extended_params_;
  ::google::protobuf::RepeatedPtrField< ::std::string> delete_params_;
  ::google::protobuf::internal::ArenaStringPtr body_;
  ::google::protobuf::internal::ArenaStringPtr url_;
  ::coprocess::ReturnOverrides* return_overrides_;
  mutable int _cached_size_;
  friend void  protobuf_InitDefaults_coprocess_5fmini_5frequest_5fobject_2eproto_impl();
  friend void  protobuf_AddDesc_coprocess_5fmini_5frequest_5fobject_2eproto_impl();
  friend void protobuf_AssignDesc_coprocess_5fmini_5frequest_5fobject_2eproto();
  friend void protobuf_ShutdownFile_coprocess_5fmini_5frequest_5fobject_2eproto();

  void InitAsDefaultInstance();
};
extern ::google::protobuf::internal::ExplicitlyConstructed<MiniRequestObject> MiniRequestObject_default_instance_;

// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
// MiniRequestObject

// map<string, string> headers = 1;
inline int MiniRequestObject::headers_size() const {
  return headers_.size();
}
inline void MiniRequestObject::clear_headers() {
  headers_.Clear();
}
inline const ::google::protobuf::Map< ::std::string, ::std::string >&
MiniRequestObject::headers() const {
  // @@protoc_insertion_point(field_map:coprocess.MiniRequestObject.headers)
  return headers_.GetMap();
}
inline ::google::protobuf::Map< ::std::string, ::std::string >*
MiniRequestObject::mutable_headers() {
  // @@protoc_insertion_point(field_mutable_map:coprocess.MiniRequestObject.headers)
  return headers_.MutableMap();
}

// map<string, string> set_headers = 2;
inline int MiniRequestObject::set_headers_size() const {
  return set_headers_.size();
}
inline void MiniRequestObject::clear_set_headers() {
  set_headers_.Clear();
}
inline const ::google::protobuf::Map< ::std::string, ::std::string >&
MiniRequestObject::set_headers() const {
  // @@protoc_insertion_point(field_map:coprocess.MiniRequestObject.set_headers)
  return set_headers_.GetMap();
}
inline ::google::protobuf::Map< ::std::string, ::std::string >*
MiniRequestObject::mutable_set_headers() {
  // @@protoc_insertion_point(field_mutable_map:coprocess.MiniRequestObject.set_headers)
  return set_headers_.MutableMap();
}

// repeated string delete_headers = 3;
inline int MiniRequestObject::delete_headers_size() const {
  return delete_headers_.size();
}
inline void MiniRequestObject::clear_delete_headers() {
  delete_headers_.Clear();
}
inline const ::std::string& MiniRequestObject::delete_headers(int index) const {
  // @@protoc_insertion_point(field_get:coprocess.MiniRequestObject.delete_headers)
  return delete_headers_.Get(index);
}
inline ::std::string* MiniRequestObject::mutable_delete_headers(int index) {
  // @@protoc_insertion_point(field_mutable:coprocess.MiniRequestObject.delete_headers)
  return delete_headers_.Mutable(index);
}
inline void MiniRequestObject::set_delete_headers(int index, const ::std::string& value) {
  // @@protoc_insertion_point(field_set:coprocess.MiniRequestObject.delete_headers)
  delete_headers_.Mutable(index)->assign(value);
}
inline void MiniRequestObject::set_delete_headers(int index, const char* value) {
  delete_headers_.Mutable(index)->assign(value);
  // @@protoc_insertion_point(field_set_char:coprocess.MiniRequestObject.delete_headers)
}
inline void MiniRequestObject::set_delete_headers(int index, const char* value, size_t size) {
  delete_headers_.Mutable(index)->assign(
    reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:coprocess.MiniRequestObject.delete_headers)
}
inline ::std::string* MiniRequestObject::add_delete_headers() {
  // @@protoc_insertion_point(field_add_mutable:coprocess.MiniRequestObject.delete_headers)
  return delete_headers_.Add();
}
inline void MiniRequestObject::add_delete_headers(const ::std::string& value) {
  delete_headers_.Add()->assign(value);
  // @@protoc_insertion_point(field_add:coprocess.MiniRequestObject.delete_headers)
}
inline void MiniRequestObject::add_delete_headers(const char* value) {
  delete_headers_.Add()->assign(value);
  // @@protoc_insertion_point(field_add_char:coprocess.MiniRequestObject.delete_headers)
}
inline void MiniRequestObject::add_delete_headers(const char* value, size_t size) {
  delete_headers_.Add()->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_add_pointer:coprocess.MiniRequestObject.delete_headers)
}
inline const ::google::protobuf::RepeatedPtrField< ::std::string>&
MiniRequestObject::delete_headers() const {
  // @@protoc_insertion_point(field_list:coprocess.MiniRequestObject.delete_headers)
  return delete_headers_;
}
inline ::google::protobuf::RepeatedPtrField< ::std::string>*
MiniRequestObject::mutable_delete_headers() {
  // @@protoc_insertion_point(field_mutable_list:coprocess.MiniRequestObject.delete_headers)
  return &delete_headers_;
}

// optional string body = 4;
inline void MiniRequestObject::clear_body() {
  body_.ClearToEmpty(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), GetArenaNoVirtual());
}
inline const ::std::string& MiniRequestObject::body() const {
  // @@protoc_insertion_point(field_get:coprocess.MiniRequestObject.body)
  return body_.Get(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void MiniRequestObject::set_body(const ::std::string& value) {
  
  body_.Set(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value, GetArenaNoVirtual());
  // @@protoc_insertion_point(field_set:coprocess.MiniRequestObject.body)
}
inline void MiniRequestObject::set_body(const char* value) {
  
  body_.Set(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value),
              GetArenaNoVirtual());
  // @@protoc_insertion_point(field_set_char:coprocess.MiniRequestObject.body)
}
inline void MiniRequestObject::set_body(const char* value,
    size_t size) {
  
  body_.Set(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(
      reinterpret_cast<const char*>(value), size), GetArenaNoVirtual());
  // @@protoc_insertion_point(field_set_pointer:coprocess.MiniRequestObject.body)
}
inline ::std::string* MiniRequestObject::mutable_body() {
  
  // @@protoc_insertion_point(field_mutable:coprocess.MiniRequestObject.body)
  return body_.Mutable(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), GetArenaNoVirtual());
}
inline ::std::string* MiniRequestObject::release_body() {
  // @@protoc_insertion_point(field_release:coprocess.MiniRequestObject.body)
  
  return body_.Release(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), GetArenaNoVirtual());
}
inline ::std::string* MiniRequestObject::unsafe_arena_release_body() {
  // @@protoc_insertion_point(field_unsafe_arena_release:coprocess.MiniRequestObject.body)
  GOOGLE_DCHECK(GetArenaNoVirtual() != NULL);
  
  return body_.UnsafeArenaRelease(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      GetArenaNoVirtual());
}
inline void MiniRequestObject::set_allocated_body(::std::string* body) {
  if (body != NULL) {
    
  } else {
    
  }
  body_.SetAllocated(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), body,
      GetArenaNoVirtual());
  // @@protoc_insertion_point(field_set_allocated:coprocess.MiniRequestObject.body)
}
inline void MiniRequestObject::unsafe_arena_set_allocated_body(
    ::std::string* body) {
  GOOGLE_DCHECK(GetArenaNoVirtual() != NULL);
  if (body != NULL) {
    
  } else {
    
  }
  body_.UnsafeArenaSetAllocated(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      body, GetArenaNoVirtual());
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:coprocess.MiniRequestObject.body)
}

// optional string url = 5;
inline void MiniRequestObject::clear_url() {
  url_.ClearToEmpty(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), GetArenaNoVirtual());
}
inline const ::std::string& MiniRequestObject::url() const {
  // @@protoc_insertion_point(field_get:coprocess.MiniRequestObject.url)
  return url_.Get(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void MiniRequestObject::set_url(const ::std::string& value) {
  
  url_.Set(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value, GetArenaNoVirtual());
  // @@protoc_insertion_point(field_set:coprocess.MiniRequestObject.url)
}
inline void MiniRequestObject::set_url(const char* value) {
  
  url_.Set(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value),
              GetArenaNoVirtual());
  // @@protoc_insertion_point(field_set_char:coprocess.MiniRequestObject.url)
}
inline void MiniRequestObject::set_url(const char* value,
    size_t size) {
  
  url_.Set(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(
      reinterpret_cast<const char*>(value), size), GetArenaNoVirtual());
  // @@protoc_insertion_point(field_set_pointer:coprocess.MiniRequestObject.url)
}
inline ::std::string* MiniRequestObject::mutable_url() {
  
  // @@protoc_insertion_point(field_mutable:coprocess.MiniRequestObject.url)
  return url_.Mutable(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), GetArenaNoVirtual());
}
inline ::std::string* MiniRequestObject::release_url() {
  // @@protoc_insertion_point(field_release:coprocess.MiniRequestObject.url)
  
  return url_.Release(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), GetArenaNoVirtual());
}
inline ::std::string* MiniRequestObject::unsafe_arena_release_url() {
  // @@protoc_insertion_point(field_unsafe_arena_release:coprocess.MiniRequestObject.url)
  GOOGLE_DCHECK(GetArenaNoVirtual() != NULL);
  
  return url_.UnsafeArenaRelease(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      GetArenaNoVirtual());
}
inline void MiniRequestObject::set_allocated_url(::std::string* url) {
  if (url != NULL) {
    
  } else {
    
  }
  url_.SetAllocated(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), url,
      GetArenaNoVirtual());
  // @@protoc_insertion_point(field_set_allocated:coprocess.MiniRequestObject.url)
}
inline void MiniRequestObject::unsafe_arena_set_allocated_url(
    ::std::string* url) {
  GOOGLE_DCHECK(GetArenaNoVirtual() != NULL);
  if (url != NULL) {
    
  } else {
    
  }
  url_.UnsafeArenaSetAllocated(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      url, GetArenaNoVirtual());
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:coprocess.MiniRequestObject.url)
}

// map<string, string> params = 6;
inline int MiniRequestObject::params_size() const {
  return params_.size();
}
inline void MiniRequestObject::clear_params() {
  params_.Clear();
}
inline const ::google::protobuf::Map< ::std::string, ::std::string >&
MiniRequestObject::params() const {
  // @@protoc_insertion_point(field_map:coprocess.MiniRequestObject.params)
  return params_.GetMap();
}
inline ::google::protobuf::Map< ::std::string, ::std::string >*
MiniRequestObject::mutable_params() {
  // @@protoc_insertion_point(field_mutable_map:coprocess.MiniRequestObject.params)
  return params_.MutableMap();
}

// map<string, string> add_params = 7;
inline int MiniRequestObject::add_params_size() const {
  return add_params_.size();
}
inline void MiniRequestObject::clear_add_params() {
  add_params_.Clear();
}
inline const ::google::protobuf::Map< ::std::string, ::std::string >&
MiniRequestObject::add_params() const {
  // @@protoc_insertion_point(field_map:coprocess.MiniRequestObject.add_params)
  return add_params_.GetMap();
}
inline ::google::protobuf::Map< ::std::string, ::std::string >*
MiniRequestObject::mutable_add_params() {
  // @@protoc_insertion_point(field_mutable_map:coprocess.MiniRequestObject.add_params)
  return add_params_.MutableMap();
}

// map<string, string> extended_params = 8;
inline int MiniRequestObject::extended_params_size() const {
  return extended_params_.size();
}
inline void MiniRequestObject::clear_extended_params() {
  extended_params_.Clear();
}
inline const ::google::protobuf::Map< ::std::string, ::std::string >&
MiniRequestObject::extended_params() const {
  // @@protoc_insertion_point(field_map:coprocess.MiniRequestObject.extended_params)
  return extended_params_.GetMap();
}
inline ::google::protobuf::Map< ::std::string, ::std::string >*
MiniRequestObject::mutable_extended_params() {
  // @@protoc_insertion_point(field_mutable_map:coprocess.MiniRequestObject.extended_params)
  return extended_params_.MutableMap();
}

// repeated string delete_params = 9;
inline int MiniRequestObject::delete_params_size() const {
  return delete_params_.size();
}
inline void MiniRequestObject::clear_delete_params() {
  delete_params_.Clear();
}
inline const ::std::string& MiniRequestObject::delete_params(int index) const {
  // @@protoc_insertion_point(field_get:coprocess.MiniRequestObject.delete_params)
  return delete_params_.Get(index);
}
inline ::std::string* MiniRequestObject::mutable_delete_params(int index) {
  // @@protoc_insertion_point(field_mutable:coprocess.MiniRequestObject.delete_params)
  return delete_params_.Mutable(index);
}
inline void MiniRequestObject::set_delete_params(int index, const ::std::string& value) {
  // @@protoc_insertion_point(field_set:coprocess.MiniRequestObject.delete_params)
  delete_params_.Mutable(index)->assign(value);
}
inline void MiniRequestObject::set_delete_params(int index, const char* value) {
  delete_params_.Mutable(index)->assign(value);
  // @@protoc_insertion_point(field_set_char:coprocess.MiniRequestObject.delete_params)
}
inline void MiniRequestObject::set_delete_params(int index, const char* value, size_t size) {
  delete_params_.Mutable(index)->assign(
    reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:coprocess.MiniRequestObject.delete_params)
}
inline ::std::string* MiniRequestObject::add_delete_params() {
  // @@protoc_insertion_point(field_add_mutable:coprocess.MiniRequestObject.delete_params)
  return delete_params_.Add();
}
inline void MiniRequestObject::add_delete_params(const ::std::string& value) {
  delete_params_.Add()->assign(value);
  // @@protoc_insertion_point(field_add:coprocess.MiniRequestObject.delete_params)
}
inline void MiniRequestObject::add_delete_params(const char* value) {
  delete_params_.Add()->assign(value);
  // @@protoc_insertion_point(field_add_char:coprocess.MiniRequestObject.delete_params)
}
inline void MiniRequestObject::add_delete_params(const char* value, size_t size) {
  delete_params_.Add()->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_add_pointer:coprocess.MiniRequestObject.delete_params)
}
inline const ::google::protobuf::RepeatedPtrField< ::std::string>&
MiniRequestObject::delete_params() const {
  // @@protoc_insertion_point(field_list:coprocess.MiniRequestObject.delete_params)
  return delete_params_;
}
inline ::google::protobuf::RepeatedPtrField< ::std::string>*
MiniRequestObject::mutable_delete_params() {
  // @@protoc_insertion_point(field_mutable_list:coprocess.MiniRequestObject.delete_params)
  return &delete_params_;
}

// optional .coprocess.ReturnOverrides return_overrides = 10;
inline bool MiniRequestObject::has_return_overrides() const {
  return this != internal_default_instance() && return_overrides_ != NULL;
}
inline void MiniRequestObject::clear_return_overrides() {
  if (GetArenaNoVirtual() == NULL && return_overrides_ != NULL) delete return_overrides_;
  return_overrides_ = NULL;
}
inline const ::coprocess::ReturnOverrides& MiniRequestObject::return_overrides() const {
  // @@protoc_insertion_point(field_get:coprocess.MiniRequestObject.return_overrides)
  return return_overrides_ != NULL ? *return_overrides_
                         : *::coprocess::ReturnOverrides::internal_default_instance();
}
inline ::coprocess::ReturnOverrides* MiniRequestObject::mutable_return_overrides() {
  
  if (return_overrides_ == NULL) {
    _slow_mutable_return_overrides();
  }
  // @@protoc_insertion_point(field_mutable:coprocess.MiniRequestObject.return_overrides)
  return return_overrides_;
}
inline ::coprocess::ReturnOverrides* MiniRequestObject::release_return_overrides() {
  // @@protoc_insertion_point(field_release:coprocess.MiniRequestObject.return_overrides)
  
  if (GetArenaNoVirtual() != NULL) {
    return _slow_release_return_overrides();
  } else {
    ::coprocess::ReturnOverrides* temp = return_overrides_;
    return_overrides_ = NULL;
    return temp;
  }
}
inline  void MiniRequestObject::set_allocated_return_overrides(::coprocess::ReturnOverrides* return_overrides) {
  ::google::protobuf::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == NULL) {
    delete return_overrides_;
  }
  if (return_overrides != NULL) {
    _slow_set_allocated_return_overrides(message_arena, &return_overrides);
  }
  return_overrides_ = return_overrides;
  if (return_overrides) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_set_allocated:coprocess.MiniRequestObject.return_overrides)
}

inline const MiniRequestObject* MiniRequestObject::internal_default_instance() {
  return &MiniRequestObject_default_instance_.get();
}
#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace coprocess

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_coprocess_5fmini_5frequest_5fobject_2eproto__INCLUDED
