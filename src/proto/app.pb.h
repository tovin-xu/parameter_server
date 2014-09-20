// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: proto/app.proto

#ifndef PROTOBUF_proto_2fapp_2eproto__INCLUDED
#define PROTOBUF_proto_2fapp_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 2005000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 2005000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/unknown_field_set.h>
#include "proto/neural_network.pb.h"
#include "proto/linear_method.pb.h"
// @@protoc_insertion_point(includes)

namespace PS {

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_proto_2fapp_2eproto();
void protobuf_AssignDesc_proto_2fapp_2eproto();
void protobuf_ShutdownFile_proto_2fapp_2eproto();

class AppConfig;

// ===================================================================

class AppConfig : public ::google::protobuf::Message {
 public:
  AppConfig();
  virtual ~AppConfig();

  AppConfig(const AppConfig& from);

  inline AppConfig& operator=(const AppConfig& from) {
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
  static const AppConfig& default_instance();

  void Swap(AppConfig* other);

  // implements Message ----------------------------------------------

  AppConfig* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const AppConfig& from);
  void MergeFrom(const AppConfig& from);
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

  // optional string app_name = 2;
  inline bool has_app_name() const;
  inline void clear_app_name();
  static const int kAppNameFieldNumber = 2;
  inline const ::std::string& app_name() const;
  inline void set_app_name(const ::std::string& value);
  inline void set_app_name(const char* value);
  inline void set_app_name(const char* value, size_t size);
  inline ::std::string* mutable_app_name();
  inline ::std::string* release_app_name();
  inline void set_allocated_app_name(::std::string* app_name);

  // repeated string parameter_name = 3;
  inline int parameter_name_size() const;
  inline void clear_parameter_name();
  static const int kParameterNameFieldNumber = 3;
  inline const ::std::string& parameter_name(int index) const;
  inline ::std::string* mutable_parameter_name(int index);
  inline void set_parameter_name(int index, const ::std::string& value);
  inline void set_parameter_name(int index, const char* value);
  inline void set_parameter_name(int index, const char* value, size_t size);
  inline ::std::string* add_parameter_name();
  inline void add_parameter_name(const ::std::string& value);
  inline void add_parameter_name(const char* value);
  inline void add_parameter_name(const char* value, size_t size);
  inline const ::google::protobuf::RepeatedPtrField< ::std::string>& parameter_name() const;
  inline ::google::protobuf::RepeatedPtrField< ::std::string>* mutable_parameter_name();

  // optional .PS.LM.Config linear_method = 4;
  inline bool has_linear_method() const;
  inline void clear_linear_method();
  static const int kLinearMethodFieldNumber = 4;
  inline const ::PS::LM::Config& linear_method() const;
  inline ::PS::LM::Config* mutable_linear_method();
  inline ::PS::LM::Config* release_linear_method();
  inline void set_allocated_linear_method(::PS::LM::Config* linear_method);

  // optional .PS.NN.Config neural_network = 5;
  inline bool has_neural_network() const;
  inline void clear_neural_network();
  static const int kNeuralNetworkFieldNumber = 5;
  inline const ::PS::NN::Config& neural_network() const;
  inline ::PS::NN::Config* mutable_neural_network();
  inline ::PS::NN::Config* release_neural_network();
  inline void set_allocated_neural_network(::PS::NN::Config* neural_network);

  // @@protoc_insertion_point(class_scope:PS.AppConfig)
 private:
  inline void set_has_app_name();
  inline void clear_has_app_name();
  inline void set_has_linear_method();
  inline void clear_has_linear_method();
  inline void set_has_neural_network();
  inline void clear_has_neural_network();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::std::string* app_name_;
  ::google::protobuf::RepeatedPtrField< ::std::string> parameter_name_;
  ::PS::LM::Config* linear_method_;
  ::PS::NN::Config* neural_network_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(4 + 31) / 32];

  friend void  protobuf_AddDesc_proto_2fapp_2eproto();
  friend void protobuf_AssignDesc_proto_2fapp_2eproto();
  friend void protobuf_ShutdownFile_proto_2fapp_2eproto();

  void InitAsDefaultInstance();
  static AppConfig* default_instance_;
};
// ===================================================================


// ===================================================================

// AppConfig

// optional string app_name = 2;
inline bool AppConfig::has_app_name() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void AppConfig::set_has_app_name() {
  _has_bits_[0] |= 0x00000001u;
}
inline void AppConfig::clear_has_app_name() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void AppConfig::clear_app_name() {
  if (app_name_ != &::google::protobuf::internal::kEmptyString) {
    app_name_->clear();
  }
  clear_has_app_name();
}
inline const ::std::string& AppConfig::app_name() const {
  return *app_name_;
}
inline void AppConfig::set_app_name(const ::std::string& value) {
  set_has_app_name();
  if (app_name_ == &::google::protobuf::internal::kEmptyString) {
    app_name_ = new ::std::string;
  }
  app_name_->assign(value);
}
inline void AppConfig::set_app_name(const char* value) {
  set_has_app_name();
  if (app_name_ == &::google::protobuf::internal::kEmptyString) {
    app_name_ = new ::std::string;
  }
  app_name_->assign(value);
}
inline void AppConfig::set_app_name(const char* value, size_t size) {
  set_has_app_name();
  if (app_name_ == &::google::protobuf::internal::kEmptyString) {
    app_name_ = new ::std::string;
  }
  app_name_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* AppConfig::mutable_app_name() {
  set_has_app_name();
  if (app_name_ == &::google::protobuf::internal::kEmptyString) {
    app_name_ = new ::std::string;
  }
  return app_name_;
}
inline ::std::string* AppConfig::release_app_name() {
  clear_has_app_name();
  if (app_name_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = app_name_;
    app_name_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}
inline void AppConfig::set_allocated_app_name(::std::string* app_name) {
  if (app_name_ != &::google::protobuf::internal::kEmptyString) {
    delete app_name_;
  }
  if (app_name) {
    set_has_app_name();
    app_name_ = app_name;
  } else {
    clear_has_app_name();
    app_name_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  }
}

// repeated string parameter_name = 3;
inline int AppConfig::parameter_name_size() const {
  return parameter_name_.size();
}
inline void AppConfig::clear_parameter_name() {
  parameter_name_.Clear();
}
inline const ::std::string& AppConfig::parameter_name(int index) const {
  return parameter_name_.Get(index);
}
inline ::std::string* AppConfig::mutable_parameter_name(int index) {
  return parameter_name_.Mutable(index);
}
inline void AppConfig::set_parameter_name(int index, const ::std::string& value) {
  parameter_name_.Mutable(index)->assign(value);
}
inline void AppConfig::set_parameter_name(int index, const char* value) {
  parameter_name_.Mutable(index)->assign(value);
}
inline void AppConfig::set_parameter_name(int index, const char* value, size_t size) {
  parameter_name_.Mutable(index)->assign(
    reinterpret_cast<const char*>(value), size);
}
inline ::std::string* AppConfig::add_parameter_name() {
  return parameter_name_.Add();
}
inline void AppConfig::add_parameter_name(const ::std::string& value) {
  parameter_name_.Add()->assign(value);
}
inline void AppConfig::add_parameter_name(const char* value) {
  parameter_name_.Add()->assign(value);
}
inline void AppConfig::add_parameter_name(const char* value, size_t size) {
  parameter_name_.Add()->assign(reinterpret_cast<const char*>(value), size);
}
inline const ::google::protobuf::RepeatedPtrField< ::std::string>&
AppConfig::parameter_name() const {
  return parameter_name_;
}
inline ::google::protobuf::RepeatedPtrField< ::std::string>*
AppConfig::mutable_parameter_name() {
  return &parameter_name_;
}

// optional .PS.LM.Config linear_method = 4;
inline bool AppConfig::has_linear_method() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void AppConfig::set_has_linear_method() {
  _has_bits_[0] |= 0x00000004u;
}
inline void AppConfig::clear_has_linear_method() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void AppConfig::clear_linear_method() {
  if (linear_method_ != NULL) linear_method_->::PS::LM::Config::Clear();
  clear_has_linear_method();
}
inline const ::PS::LM::Config& AppConfig::linear_method() const {
  return linear_method_ != NULL ? *linear_method_ : *default_instance_->linear_method_;
}
inline ::PS::LM::Config* AppConfig::mutable_linear_method() {
  set_has_linear_method();
  if (linear_method_ == NULL) linear_method_ = new ::PS::LM::Config;
  return linear_method_;
}
inline ::PS::LM::Config* AppConfig::release_linear_method() {
  clear_has_linear_method();
  ::PS::LM::Config* temp = linear_method_;
  linear_method_ = NULL;
  return temp;
}
inline void AppConfig::set_allocated_linear_method(::PS::LM::Config* linear_method) {
  delete linear_method_;
  linear_method_ = linear_method;
  if (linear_method) {
    set_has_linear_method();
  } else {
    clear_has_linear_method();
  }
}

// optional .PS.NN.Config neural_network = 5;
inline bool AppConfig::has_neural_network() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void AppConfig::set_has_neural_network() {
  _has_bits_[0] |= 0x00000008u;
}
inline void AppConfig::clear_has_neural_network() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void AppConfig::clear_neural_network() {
  if (neural_network_ != NULL) neural_network_->::PS::NN::Config::Clear();
  clear_has_neural_network();
}
inline const ::PS::NN::Config& AppConfig::neural_network() const {
  return neural_network_ != NULL ? *neural_network_ : *default_instance_->neural_network_;
}
inline ::PS::NN::Config* AppConfig::mutable_neural_network() {
  set_has_neural_network();
  if (neural_network_ == NULL) neural_network_ = new ::PS::NN::Config;
  return neural_network_;
}
inline ::PS::NN::Config* AppConfig::release_neural_network() {
  clear_has_neural_network();
  ::PS::NN::Config* temp = neural_network_;
  neural_network_ = NULL;
  return temp;
}
inline void AppConfig::set_allocated_neural_network(::PS::NN::Config* neural_network) {
  delete neural_network_;
  neural_network_ = neural_network;
  if (neural_network) {
    set_has_neural_network();
  } else {
    clear_has_neural_network();
  }
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace PS

#ifndef SWIG
namespace google {
namespace protobuf {


}  // namespace google
}  // namespace protobuf
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_proto_2fapp_2eproto__INCLUDED
