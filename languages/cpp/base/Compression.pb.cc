// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: base/Compression.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "base/Compression.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/port.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)
class CompressionDefaultTypeInternal {
public:
 ::google::protobuf::internal::ExplicitlyConstructed<Compression>
     _instance;
} _Compression_default_instance_;

namespace protobuf_base_2fCompression_2eproto {


namespace {

::google::protobuf::Metadata file_level_metadata[1];
const ::google::protobuf::EnumDescriptor* file_level_enum_descriptors[1];

}  // namespace

PROTOBUF_CONSTEXPR_VAR ::google::protobuf::internal::ParseTableField
    const TableStruct::entries[] GOOGLE_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  {0, 0, 0, ::google::protobuf::internal::kInvalidMask, 0, 0},
};

PROTOBUF_CONSTEXPR_VAR ::google::protobuf::internal::AuxillaryParseTableField
    const TableStruct::aux[] GOOGLE_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  ::google::protobuf::internal::AuxillaryParseTableField(),
};
PROTOBUF_CONSTEXPR_VAR ::google::protobuf::internal::ParseTable const
    TableStruct::schema[] GOOGLE_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  { NULL, NULL, 0, -1, -1, -1, -1, NULL, false },
};

const ::google::protobuf::uint32 TableStruct::offsets[] GOOGLE_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Compression, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Compression, enabled_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Compression, type_),
};
static const ::google::protobuf::internal::MigrationSchema schemas[] GOOGLE_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(Compression)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&_Compression_default_instance_),
};

namespace {

void protobuf_AssignDescriptors() {
  AddDescriptors();
  ::google::protobuf::MessageFactory* factory = NULL;
  AssignDescriptors(
      "base/Compression.proto", schemas, file_default_instances, TableStruct::offsets, factory,
      file_level_metadata, file_level_enum_descriptors, NULL);
}

void protobuf_AssignDescriptorsOnce() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &protobuf_AssignDescriptors);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::internal::RegisterAllTypes(file_level_metadata, 1);
}

}  // namespace
void TableStruct::InitDefaultsImpl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::internal::InitProtobufDefaults();
  _Compression_default_instance_._instance.DefaultConstruct();
  ::google::protobuf::internal::OnShutdownDestroyMessage(
      &_Compression_default_instance_);}

void InitDefaults() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &TableStruct::InitDefaultsImpl);
}
namespace {
void AddDescriptorsImpl() {
  InitDefaults();
  static const char descriptor[] GOOGLE_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
      "\n\026base/Compression.proto\"Q\n\013Compression\022"
      "\017\n\007enabled\030\001 \001(\010\022\037\n\004type\030\002 \001(\0162\021.Compres"
      "sion.Type\"\020\n\004Type\022\010\n\004GZIP\020\000B1\n\027io.bloomb"
      "ox.schema.baseB\017BaseCompressionH\001P\001\370\001\001b\006"
      "proto3"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 166);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "base/Compression.proto", &protobuf_RegisterTypes);
}
} // anonymous namespace

void AddDescriptors() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &AddDescriptorsImpl);
}
// Force AddDescriptors() to be called at dynamic initialization time.
struct StaticDescriptorInitializer {
  StaticDescriptorInitializer() {
    AddDescriptors();
  }
} static_descriptor_initializer;

}  // namespace protobuf_base_2fCompression_2eproto

const ::google::protobuf::EnumDescriptor* Compression_Type_descriptor() {
  protobuf_base_2fCompression_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_base_2fCompression_2eproto::file_level_enum_descriptors[0];
}
bool Compression_Type_IsValid(int value) {
  switch (value) {
    case 0:
      return true;
    default:
      return false;
  }
}

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const Compression_Type Compression::GZIP;
const Compression_Type Compression::Type_MIN;
const Compression_Type Compression::Type_MAX;
const int Compression::Type_ARRAYSIZE;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int Compression::kEnabledFieldNumber;
const int Compression::kTypeFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

Compression::Compression()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    protobuf_base_2fCompression_2eproto::InitDefaults();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:Compression)
}
Compression::Compression(::google::protobuf::Arena* arena)
  : ::google::protobuf::Message(),
  _internal_metadata_(arena) {
  protobuf_base_2fCompression_2eproto::InitDefaults();
  SharedCtor();
  RegisterArenaDtor(arena);
  // @@protoc_insertion_point(arena_constructor:Compression)
}
Compression::Compression(const Compression& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      _cached_size_(0) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::memcpy(&enabled_, &from.enabled_,
    static_cast<size_t>(reinterpret_cast<char*>(&type_) -
    reinterpret_cast<char*>(&enabled_)) + sizeof(type_));
  // @@protoc_insertion_point(copy_constructor:Compression)
}

void Compression::SharedCtor() {
  ::memset(&enabled_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&type_) -
      reinterpret_cast<char*>(&enabled_)) + sizeof(type_));
  _cached_size_ = 0;
}

Compression::~Compression() {
  // @@protoc_insertion_point(destructor:Compression)
  SharedDtor();
}

void Compression::SharedDtor() {
  ::google::protobuf::Arena* arena = GetArenaNoVirtual();
  GOOGLE_DCHECK(arena == NULL);
  if (arena != NULL) {
    return;
  }

}

void Compression::ArenaDtor(void* object) {
  Compression* _this = reinterpret_cast< Compression* >(object);
  (void)_this;
}
void Compression::RegisterArenaDtor(::google::protobuf::Arena* arena) {
}
void Compression::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* Compression::descriptor() {
  protobuf_base_2fCompression_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_base_2fCompression_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const Compression& Compression::default_instance() {
  protobuf_base_2fCompression_2eproto::InitDefaults();
  return *internal_default_instance();
}

Compression* Compression::New(::google::protobuf::Arena* arena) const {
  return ::google::protobuf::Arena::CreateMessage<Compression>(arena);
}

void Compression::Clear() {
// @@protoc_insertion_point(message_clear_start:Compression)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  ::memset(&enabled_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&type_) -
      reinterpret_cast<char*>(&enabled_)) + sizeof(type_));
  _internal_metadata_.Clear();
}

bool Compression::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:Compression)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // bool enabled = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(8u /* 8 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &enabled_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // .Compression.Type type = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(16u /* 16 & 0xFF */)) {
          int value;
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   int, ::google::protobuf::internal::WireFormatLite::TYPE_ENUM>(
                 input, &value)));
          set_type(static_cast< ::Compression_Type >(value));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, _internal_metadata_.mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:Compression)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:Compression)
  return false;
#undef DO_
}

void Compression::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:Compression)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // bool enabled = 1;
  if (this->enabled() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(1, this->enabled(), output);
  }

  // .Compression.Type type = 2;
  if (this->type() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteEnum(
      2, this->type(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:Compression)
}

::google::protobuf::uint8* Compression::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:Compression)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // bool enabled = 1;
  if (this->enabled() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteBoolToArray(1, this->enabled(), target);
  }

  // .Compression.Type type = 2;
  if (this->type() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteEnumToArray(
      2, this->type(), target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:Compression)
  return target;
}

size_t Compression::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:Compression)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // bool enabled = 1;
  if (this->enabled() != 0) {
    total_size += 1 + 1;
  }

  // .Compression.Type type = 2;
  if (this->type() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::EnumSize(this->type());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void Compression::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:Compression)
  GOOGLE_DCHECK_NE(&from, this);
  const Compression* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const Compression>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:Compression)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:Compression)
    MergeFrom(*source);
  }
}

void Compression::MergeFrom(const Compression& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:Compression)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.enabled() != 0) {
    set_enabled(from.enabled());
  }
  if (from.type() != 0) {
    set_type(from.type());
  }
}

void Compression::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:Compression)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Compression::CopyFrom(const Compression& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:Compression)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Compression::IsInitialized() const {
  return true;
}

void Compression::Swap(Compression* other) {
  if (other == this) return;
  if (GetArenaNoVirtual() == other->GetArenaNoVirtual()) {
    InternalSwap(other);
  } else {
    Compression* temp = New(GetArenaNoVirtual());
    temp->MergeFrom(*other);
    other->CopyFrom(*this);
    InternalSwap(temp);
    if (GetArenaNoVirtual() == NULL) {
      delete temp;
    }
  }
}
void Compression::UnsafeArenaSwap(Compression* other) {
  if (other == this) return;
  GOOGLE_DCHECK(GetArenaNoVirtual() == other->GetArenaNoVirtual());
  InternalSwap(other);
}
void Compression::InternalSwap(Compression* other) {
  using std::swap;
  swap(enabled_, other->enabled_);
  swap(type_, other->type_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata Compression::GetMetadata() const {
  protobuf_base_2fCompression_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_base_2fCompression_2eproto::file_level_metadata[kIndexInFileMessages];
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// Compression

// bool enabled = 1;
void Compression::clear_enabled() {
  enabled_ = false;
}
bool Compression::enabled() const {
  // @@protoc_insertion_point(field_get:Compression.enabled)
  return enabled_;
}
void Compression::set_enabled(bool value) {
  
  enabled_ = value;
  // @@protoc_insertion_point(field_set:Compression.enabled)
}

// .Compression.Type type = 2;
void Compression::clear_type() {
  type_ = 0;
}
::Compression_Type Compression::type() const {
  // @@protoc_insertion_point(field_get:Compression.type)
  return static_cast< ::Compression_Type >(type_);
}
void Compression::set_type(::Compression_Type value) {
  
  type_ = value;
  // @@protoc_insertion_point(field_set:Compression.type)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

// @@protoc_insertion_point(global_scope)
