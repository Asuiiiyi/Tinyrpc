// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: rpc_header.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_rpc_5fheader_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_rpc_5fheader_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3021000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3021012 < PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers. Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/port_undef.inc>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata_lite.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_rpc_5fheader_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_rpc_5fheader_2eproto {
  static const uint32_t offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_rpc_5fheader_2eproto;
namespace mprpc {
class RpcHeader;
struct RpcHeaderDefaultTypeInternal;
extern RpcHeaderDefaultTypeInternal _RpcHeader_default_instance_;
}  // namespace mprpc
PROTOBUF_NAMESPACE_OPEN
template<> ::mprpc::RpcHeader* Arena::CreateMaybeMessage<::mprpc::RpcHeader>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace mprpc {

// ===================================================================

class RpcHeader final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:mprpc.RpcHeader) */ {
 public:
  inline RpcHeader() : RpcHeader(nullptr) {}
  ~RpcHeader() override;
  explicit PROTOBUF_CONSTEXPR RpcHeader(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  RpcHeader(const RpcHeader& from);
  RpcHeader(RpcHeader&& from) noexcept
    : RpcHeader() {
    *this = ::std::move(from);
  }

  inline RpcHeader& operator=(const RpcHeader& from) {
    CopyFrom(from);
    return *this;
  }
  inline RpcHeader& operator=(RpcHeader&& from) noexcept {
    if (this == &from) return *this;
    if (GetOwningArena() == from.GetOwningArena()
  #ifdef PROTOBUF_FORCE_COPY_IN_MOVE
        && GetOwningArena() != nullptr
  #endif  // !PROTOBUF_FORCE_COPY_IN_MOVE
    ) {
      InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return default_instance().GetMetadata().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return default_instance().GetMetadata().reflection;
  }
  static const RpcHeader& default_instance() {
    return *internal_default_instance();
  }
  static inline const RpcHeader* internal_default_instance() {
    return reinterpret_cast<const RpcHeader*>(
               &_RpcHeader_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(RpcHeader& a, RpcHeader& b) {
    a.Swap(&b);
  }
  inline void Swap(RpcHeader* other) {
    if (other == this) return;
  #ifdef PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() != nullptr &&
        GetOwningArena() == other->GetOwningArena()) {
   #else  // PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() == other->GetOwningArena()) {
  #endif  // !PROTOBUF_FORCE_COPY_IN_SWAP
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(RpcHeader* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  RpcHeader* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<RpcHeader>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const RpcHeader& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom( const RpcHeader& from) {
    RpcHeader::MergeImpl(*this, from);
  }
  private:
  static void MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg);
  public:
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  uint8_t* _InternalSerialize(
      uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _impl_._cached_size_.Get(); }

  private:
  void SharedCtor(::PROTOBUF_NAMESPACE_ID::Arena* arena, bool is_message_owned);
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(RpcHeader* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "mprpc.RpcHeader";
  }
  protected:
  explicit RpcHeader(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kServiceNameFieldNumber = 1,
    kMethodNameFieldNumber = 2,
    kArgsSizeFieldNumber = 3,
  };
  // bytes service_name = 1;
  void clear_service_name();
  const std::string& service_name() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_service_name(ArgT0&& arg0, ArgT... args);
  std::string* mutable_service_name();
  PROTOBUF_NODISCARD std::string* release_service_name();
  void set_allocated_service_name(std::string* service_name);
  private:
  const std::string& _internal_service_name() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_service_name(const std::string& value);
  std::string* _internal_mutable_service_name();
  public:

  // bytes method_name = 2;
  void clear_method_name();
  const std::string& method_name() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_method_name(ArgT0&& arg0, ArgT... args);
  std::string* mutable_method_name();
  PROTOBUF_NODISCARD std::string* release_method_name();
  void set_allocated_method_name(std::string* method_name);
  private:
  const std::string& _internal_method_name() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_method_name(const std::string& value);
  std::string* _internal_mutable_method_name();
  public:

  // uint32 args_size = 3;
  void clear_args_size();
  uint32_t args_size() const;
  void set_args_size(uint32_t value);
  private:
  uint32_t _internal_args_size() const;
  void _internal_set_args_size(uint32_t value);
  public:

  // @@protoc_insertion_point(class_scope:mprpc.RpcHeader)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr service_name_;
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr method_name_;
    uint32_t args_size_;
    mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_rpc_5fheader_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// RpcHeader

// bytes service_name = 1;
inline void RpcHeader::clear_service_name() {
  _impl_.service_name_.ClearToEmpty();
}
inline const std::string& RpcHeader::service_name() const {
  // @@protoc_insertion_point(field_get:mprpc.RpcHeader.service_name)
  return _internal_service_name();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void RpcHeader::set_service_name(ArgT0&& arg0, ArgT... args) {
 
 _impl_.service_name_.SetBytes(static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:mprpc.RpcHeader.service_name)
}
inline std::string* RpcHeader::mutable_service_name() {
  std::string* _s = _internal_mutable_service_name();
  // @@protoc_insertion_point(field_mutable:mprpc.RpcHeader.service_name)
  return _s;
}
inline const std::string& RpcHeader::_internal_service_name() const {
  return _impl_.service_name_.Get();
}
inline void RpcHeader::_internal_set_service_name(const std::string& value) {
  
  _impl_.service_name_.Set(value, GetArenaForAllocation());
}
inline std::string* RpcHeader::_internal_mutable_service_name() {
  
  return _impl_.service_name_.Mutable(GetArenaForAllocation());
}
inline std::string* RpcHeader::release_service_name() {
  // @@protoc_insertion_point(field_release:mprpc.RpcHeader.service_name)
  return _impl_.service_name_.Release();
}
inline void RpcHeader::set_allocated_service_name(std::string* service_name) {
  if (service_name != nullptr) {
    
  } else {
    
  }
  _impl_.service_name_.SetAllocated(service_name, GetArenaForAllocation());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (_impl_.service_name_.IsDefault()) {
    _impl_.service_name_.Set("", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:mprpc.RpcHeader.service_name)
}

// bytes method_name = 2;
inline void RpcHeader::clear_method_name() {
  _impl_.method_name_.ClearToEmpty();
}
inline const std::string& RpcHeader::method_name() const {
  // @@protoc_insertion_point(field_get:mprpc.RpcHeader.method_name)
  return _internal_method_name();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void RpcHeader::set_method_name(ArgT0&& arg0, ArgT... args) {
 
 _impl_.method_name_.SetBytes(static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:mprpc.RpcHeader.method_name)
}
inline std::string* RpcHeader::mutable_method_name() {
  std::string* _s = _internal_mutable_method_name();
  // @@protoc_insertion_point(field_mutable:mprpc.RpcHeader.method_name)
  return _s;
}
inline const std::string& RpcHeader::_internal_method_name() const {
  return _impl_.method_name_.Get();
}
inline void RpcHeader::_internal_set_method_name(const std::string& value) {
  
  _impl_.method_name_.Set(value, GetArenaForAllocation());
}
inline std::string* RpcHeader::_internal_mutable_method_name() {
  
  return _impl_.method_name_.Mutable(GetArenaForAllocation());
}
inline std::string* RpcHeader::release_method_name() {
  // @@protoc_insertion_point(field_release:mprpc.RpcHeader.method_name)
  return _impl_.method_name_.Release();
}
inline void RpcHeader::set_allocated_method_name(std::string* method_name) {
  if (method_name != nullptr) {
    
  } else {
    
  }
  _impl_.method_name_.SetAllocated(method_name, GetArenaForAllocation());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (_impl_.method_name_.IsDefault()) {
    _impl_.method_name_.Set("", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:mprpc.RpcHeader.method_name)
}

// uint32 args_size = 3;
inline void RpcHeader::clear_args_size() {
  _impl_.args_size_ = 0u;
}
inline uint32_t RpcHeader::_internal_args_size() const {
  return _impl_.args_size_;
}
inline uint32_t RpcHeader::args_size() const {
  // @@protoc_insertion_point(field_get:mprpc.RpcHeader.args_size)
  return _internal_args_size();
}
inline void RpcHeader::_internal_set_args_size(uint32_t value) {
  
  _impl_.args_size_ = value;
}
inline void RpcHeader::set_args_size(uint32_t value) {
  _internal_set_args_size(value);
  // @@protoc_insertion_point(field_set:mprpc.RpcHeader.args_size)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace mprpc

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_rpc_5fheader_2eproto
