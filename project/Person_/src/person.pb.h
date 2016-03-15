// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: person.proto

#ifndef PROTOBUF_person_2eproto__INCLUDED
#define PROTOBUF_person_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 2006000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 2006001 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)

namespace lm {

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_person_2eproto();
void protobuf_AssignDesc_person_2eproto();
void protobuf_ShutdownFile_person_2eproto();

class helloworld;

// ===================================================================

class helloworld : public ::google::protobuf::Message {
 public:
  helloworld();
  virtual ~helloworld();

  helloworld(const helloworld& from);

  inline helloworld& operator=(const helloworld& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const helloworld& default_instance();

  void Swap(helloworld* other);

  // implements Message ----------------------------------------------

  helloworld* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const helloworld& from);
  void MergeFrom(const helloworld& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:
  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // required int32 id = 1;
  inline bool has_id() const;
  inline void clear_id();
  static const int kIdFieldNumber = 1;
  inline ::google::protobuf::int32 id() const;
  inline void set_id(::google::protobuf::int32 value);

  // required string str = 2;
  inline bool has_str() const;
  inline void clear_str();
  static const int kStrFieldNumber = 2;
  inline const ::std::string& str() const;
  inline void set_str(const ::std::string& value);
  inline void set_str(const char* value);
  inline void set_str(const char* value, size_t size);
  inline ::std::string* mutable_str();
  inline ::std::string* release_str();
  inline void set_allocated_str(::std::string* str);

  // optional int32 opt = 3;
  inline bool has_opt() const;
  inline void clear_opt();
  static const int kOptFieldNumber = 3;
  inline ::google::protobuf::int32 opt() const;
  inline void set_opt(::google::protobuf::int32 value);

  // @@protoc_insertion_point(class_scope:lm.helloworld)
 private:
  inline void set_has_id();
  inline void clear_has_id();
  inline void set_has_str();
  inline void clear_has_str();
  inline void set_has_opt();
  inline void clear_has_opt();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::std::string* str_;
  ::google::protobuf::int32 id_;
  ::google::protobuf::int32 opt_;
  friend void  protobuf_AddDesc_person_2eproto();
  friend void protobuf_AssignDesc_person_2eproto();
  friend void protobuf_ShutdownFile_person_2eproto();

  void InitAsDefaultInstance();
  static helloworld* default_instance_;
};
// ===================================================================


// ===================================================================

// helloworld

// required int32 id = 1;
inline bool helloworld::has_id() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void helloworld::set_has_id() {
  _has_bits_[0] |= 0x00000001u;
}
inline void helloworld::clear_has_id() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void helloworld::clear_id() {
  id_ = 0;
  clear_has_id();
}
inline ::google::protobuf::int32 helloworld::id() const {
  // @@protoc_insertion_point(field_get:lm.helloworld.id)
  return id_;
}
inline void helloworld::set_id(::google::protobuf::int32 value) {
  set_has_id();
  id_ = value;
  // @@protoc_insertion_point(field_set:lm.helloworld.id)
}

// required string str = 2;
inline bool helloworld::has_str() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void helloworld::set_has_str() {
  _has_bits_[0] |= 0x00000002u;
}
inline void helloworld::clear_has_str() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void helloworld::clear_str() {
  if (str_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    str_->clear();
  }
  clear_has_str();
}
inline const ::std::string& helloworld::str() const {
  // @@protoc_insertion_point(field_get:lm.helloworld.str)
  return *str_;
}
inline void helloworld::set_str(const ::std::string& value) {
  set_has_str();
  if (str_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    str_ = new ::std::string;
  }
  str_->assign(value);
  // @@protoc_insertion_point(field_set:lm.helloworld.str)
}
inline void helloworld::set_str(const char* value) {
  set_has_str();
  if (str_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    str_ = new ::std::string;
  }
  str_->assign(value);
  // @@protoc_insertion_point(field_set_char:lm.helloworld.str)
}
inline void helloworld::set_str(const char* value, size_t size) {
  set_has_str();
  if (str_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    str_ = new ::std::string;
  }
  str_->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:lm.helloworld.str)
}
inline ::std::string* helloworld::mutable_str() {
  set_has_str();
  if (str_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    str_ = new ::std::string;
  }
  // @@protoc_insertion_point(field_mutable:lm.helloworld.str)
  return str_;
}
inline ::std::string* helloworld::release_str() {
  clear_has_str();
  if (str_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    return NULL;
  } else {
    ::std::string* temp = str_;
    str_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
    return temp;
  }
}
inline void helloworld::set_allocated_str(::std::string* str) {
  if (str_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    delete str_;
  }
  if (str) {
    set_has_str();
    str_ = str;
  } else {
    clear_has_str();
    str_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  }
  // @@protoc_insertion_point(field_set_allocated:lm.helloworld.str)
}

// optional int32 opt = 3;
inline bool helloworld::has_opt() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void helloworld::set_has_opt() {
  _has_bits_[0] |= 0x00000004u;
}
inline void helloworld::clear_has_opt() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void helloworld::clear_opt() {
  opt_ = 0;
  clear_has_opt();
}
inline ::google::protobuf::int32 helloworld::opt() const {
  // @@protoc_insertion_point(field_get:lm.helloworld.opt)
  return opt_;
}
inline void helloworld::set_opt(::google::protobuf::int32 value) {
  set_has_opt();
  opt_ = value;
  // @@protoc_insertion_point(field_set:lm.helloworld.opt)
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace lm

#ifndef SWIG
namespace google {
namespace protobuf {


}  // namespace google
}  // namespace protobuf
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_person_2eproto__INCLUDED