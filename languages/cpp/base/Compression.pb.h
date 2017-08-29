// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: base/Compression.proto

#ifndef PROTOBUF_base_2fCompression_2eproto__INCLUDED
#define PROTOBUF_base_2fCompression_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3004000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3004000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/generated_enum_reflection.h>
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
class Compression;
class CompressionDefaultTypeInternal;
extern CompressionDefaultTypeInternal _Compression_default_instance_;

namespace protobuf_base_2fCompression_2eproto {
// Internal implementation detail -- do not call these.
struct TableStruct {
  static const ::google::protobuf::internal::ParseTableField entries[];
  static const ::google::protobuf::internal::AuxillaryParseTableField aux[];
  static const ::google::protobuf::internal::ParseTable schema[];
  static const ::google::protobuf::uint32 offsets[];
  static const ::google::protobuf::internal::FieldMetadata field_metadata[];
  static const ::google::protobuf::internal::SerializationTable serialization_table[];
  static void InitDefaultsImpl();
};
void AddDescriptors();
void InitDefaults();
}  // namespace protobuf_base_2fCompression_2eproto

enum Compression_Type {
  Compression_Type_GZIP = 0,
  Compression_Type_Compression_Type_INT_MIN_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32min,
  Compression_Type_Compression_Type_INT_MAX_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32max
};
bool Compression_Type_IsValid(int value);
const Compression_Type Compression_Type_Type_MIN = Compression_Type_GZIP;
const Compression_Type Compression_Type_Type_MAX = Compression_Type_GZIP;
const int Compression_Type_Type_ARRAYSIZE = Compression_Type_Type_MAX + 1;

const ::google::protobuf::EnumDescriptor* Compression_Type_descriptor();
inline const ::std::string& Compression_Type_Name(Compression_Type value) {
  return ::google::protobuf::internal::NameOfEnum(
    Compression_Type_descriptor(), value);
}
inline bool Compression_Type_Parse(
    const ::std::string& name, Compression_Type* value) {
  return ::google::protobuf::internal::ParseNamedEnum<Compression_Type>(
    Compression_Type_descriptor(), name, value);
}
// ===================================================================

class Compression : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:Compression) */ {
 public:
  Compression();
  virtual ~Compression();

  Compression(const Compression& from);

  inline Compression& operator=(const Compression& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  Compression(Compression&& from) noexcept
    : Compression() {
    *this = ::std::move(from);
  }

  inline Compression& operator=(Compression&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  inline ::google::protobuf::Arena* GetArena() const PROTOBUF_FINAL {
    return GetArenaNoVirtual();
  }
  inline void* GetMaybeArenaPointer() const PROTOBUF_FINAL {
    return MaybeArenaPtr();
  }
  static const ::google::protobuf::Descriptor* descriptor();
  static const Compression& default_instance();

  static inline const Compression* internal_default_instance() {
    return reinterpret_cast<const Compression*>(
               &_Compression_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    0;

  void UnsafeArenaSwap(Compression* other);
  void Swap(Compression* other);
  friend void swap(Compression& a, Compression& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline Compression* New() const PROTOBUF_FINAL { return New(NULL); }

  Compression* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const Compression& from);
  void MergeFrom(const Compression& from);
  void Clear() PROTOBUF_FINAL;
  bool IsInitialized() const PROTOBUF_FINAL;

  size_t ByteSizeLong() const PROTOBUF_FINAL;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) PROTOBUF_FINAL;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const PROTOBUF_FINAL;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const PROTOBUF_FINAL;
  int GetCachedSize() const PROTOBUF_FINAL { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const PROTOBUF_FINAL;
  void InternalSwap(Compression* other);
  protected:
  explicit Compression(::google::protobuf::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::google::protobuf::Arena* arena);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return _internal_metadata_.arena();
  }
  inline void* MaybeArenaPtr() const {
    return _internal_metadata_.raw_arena_ptr();
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const PROTOBUF_FINAL;

  // nested types ----------------------------------------------------

  typedef Compression_Type Type;
  static const Type GZIP =
    Compression_Type_GZIP;
  static inline bool Type_IsValid(int value) {
    return Compression_Type_IsValid(value);
  }
  static const Type Type_MIN =
    Compression_Type_Type_MIN;
  static const Type Type_MAX =
    Compression_Type_Type_MAX;
  static const int Type_ARRAYSIZE =
    Compression_Type_Type_ARRAYSIZE;
  static inline const ::google::protobuf::EnumDescriptor*
  Type_descriptor() {
    return Compression_Type_descriptor();
  }
  static inline const ::std::string& Type_Name(Type value) {
    return Compression_Type_Name(value);
  }
  static inline bool Type_Parse(const ::std::string& name,
      Type* value) {
    return Compression_Type_Parse(name, value);
  }

  // accessors -------------------------------------------------------

  // bool enabled = 1;
  void clear_enabled();
  static const int kEnabledFieldNumber = 1;
  bool enabled() const;
  void set_enabled(bool value);

  // .Compression.Type type = 2;
  void clear_type();
  static const int kTypeFieldNumber = 2;
  ::Compression_Type type() const;
  void set_type(::Compression_Type value);

  // @@protoc_insertion_point(class_scope:Compression)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  template <typename T> friend class ::google::protobuf::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  bool enabled_;
  int type_;
  mutable int _cached_size_;
  friend struct protobuf_base_2fCompression_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// Compression

// bool enabled = 1;
inline void Compression::clear_enabled() {
  enabled_ = false;
}
inline bool Compression::enabled() const {
  // @@protoc_insertion_point(field_get:Compression.enabled)
  return enabled_;
}
inline void Compression::set_enabled(bool value) {
  
  enabled_ = value;
  // @@protoc_insertion_point(field_set:Compression.enabled)
}

// .Compression.Type type = 2;
inline void Compression::clear_type() {
  type_ = 0;
}
inline ::Compression_Type Compression::type() const {
  // @@protoc_insertion_point(field_get:Compression.type)
  return static_cast< ::Compression_Type >(type_);
}
inline void Compression::set_type(::Compression_Type value) {
  
  type_ = value;
  // @@protoc_insertion_point(field_set:Compression.type)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)


namespace google {
namespace protobuf {

template <> struct is_proto_enum< ::Compression_Type> : ::google::protobuf::internal::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::Compression_Type>() {
  return ::Compression_Type_descriptor();
}

}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_base_2fCompression_2eproto__INCLUDED
