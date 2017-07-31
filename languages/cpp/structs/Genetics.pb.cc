// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: structs/Genetics.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "structs/Genetics.pb.h"

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
class GeneticsDefaultTypeInternal : public ::google::protobuf::internal::ExplicitlyConstructed<Genetics> {
} _Genetics_default_instance_;

namespace protobuf_structs_2fGenetics_2eproto {


namespace {

::google::protobuf::Metadata file_level_metadata[1];

}  // namespace

PROTOBUF_CONSTEXPR_VAR ::google::protobuf::internal::ParseTableField
    const TableStruct::entries[] = {
  {0, 0, 0, ::google::protobuf::internal::kInvalidMask, 0, 0},
};

PROTOBUF_CONSTEXPR_VAR ::google::protobuf::internal::AuxillaryParseTableField
    const TableStruct::aux[] = {
  ::google::protobuf::internal::AuxillaryParseTableField(),
};
PROTOBUF_CONSTEXPR_VAR ::google::protobuf::internal::ParseTable const
    TableStruct::schema[] = {
  { NULL, NULL, 0, -1, -1, false },
};

const ::google::protobuf::uint32 TableStruct::offsets[] = {
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Genetics, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Genetics, male_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Genetics, female_),
};

static const ::google::protobuf::internal::MigrationSchema schemas[] = {
  { 0, -1, sizeof(Genetics)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&_Genetics_default_instance_),
};

namespace {

void protobuf_AssignDescriptors() {
  AddDescriptors();
  ::google::protobuf::MessageFactory* factory = NULL;
  AssignDescriptors(
      "structs/Genetics.proto", schemas, file_default_instances, TableStruct::offsets, factory,
      file_level_metadata, NULL, NULL);
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

void TableStruct::Shutdown() {
  _Genetics_default_instance_.Shutdown();
  delete file_level_metadata[0].reflection;
}

void TableStruct::InitDefaultsImpl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::internal::InitProtobufDefaults();
  ::protobuf_content_2fName_2eproto::InitDefaults();
  _Genetics_default_instance_.DefaultConstruct();
  _Genetics_default_instance_.get_mutable()->male_ = const_cast< ::Name*>(
      ::Name::internal_default_instance());
  _Genetics_default_instance_.get_mutable()->female_ = const_cast< ::Name*>(
      ::Name::internal_default_instance());
}

void InitDefaults() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &TableStruct::InitDefaultsImpl);
}
void AddDescriptorsImpl() {
  InitDefaults();
  static const char descriptor[] = {
      "\n\026structs/Genetics.proto\032\022content/Name.p"
      "roto\"6\n\010Genetics\022\023\n\004male\030\001 \001(\0132\005.Name\022\025\n"
      "\006female\030\002 \001(\0132\005.NameB;\n!io.bloombox.sche"
      "ma.product.structB\017GeneticsStructsH\001P\001\370\001"
      "\001b\006proto3"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 169);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "structs/Genetics.proto", &protobuf_RegisterTypes);
  ::protobuf_content_2fName_2eproto::AddDescriptors();
  ::google::protobuf::internal::OnShutdown(&TableStruct::Shutdown);
}

void AddDescriptors() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &AddDescriptorsImpl);
}
// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer {
  StaticDescriptorInitializer() {
    AddDescriptors();
  }
} static_descriptor_initializer;

}  // namespace protobuf_structs_2fGenetics_2eproto


// ===================================================================

void Genetics::_slow_mutable_male() {
  male_ = ::google::protobuf::Arena::CreateMessage< ::Name >(
      GetArenaNoVirtual());
}
::Name* Genetics::_slow_release_male() {
  if (male_ == NULL) {
    return NULL;
  } else {
    ::Name* temp = new ::Name(*male_);
    male_ = NULL;
    return temp;
  }
}
::Name* Genetics::unsafe_arena_release_male() {
  // @@protoc_insertion_point(field_unsafe_arena_release:Genetics.male)
  
  ::Name* temp = male_;
  male_ = NULL;
  return temp;
}
void Genetics::_slow_set_allocated_male(
    ::google::protobuf::Arena* message_arena, ::Name** male) {
    if (message_arena != NULL && 
        ::google::protobuf::Arena::GetArena(*male) == NULL) {
      message_arena->Own(*male);
    } else if (message_arena !=
               ::google::protobuf::Arena::GetArena(*male)) {
      ::Name* new_male = 
            ::google::protobuf::Arena::CreateMessage< ::Name >(
            message_arena);
      new_male->CopyFrom(**male);
      *male = new_male;
    }
}
void Genetics::unsafe_arena_set_allocated_male(
    ::Name* male) {
  if (GetArenaNoVirtual() == NULL) {
    delete male_;
  }
  male_ = male;
  if (male) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:Genetics.male)
}
void Genetics::_slow_mutable_female() {
  female_ = ::google::protobuf::Arena::CreateMessage< ::Name >(
      GetArenaNoVirtual());
}
::Name* Genetics::_slow_release_female() {
  if (female_ == NULL) {
    return NULL;
  } else {
    ::Name* temp = new ::Name(*female_);
    female_ = NULL;
    return temp;
  }
}
::Name* Genetics::unsafe_arena_release_female() {
  // @@protoc_insertion_point(field_unsafe_arena_release:Genetics.female)
  
  ::Name* temp = female_;
  female_ = NULL;
  return temp;
}
void Genetics::_slow_set_allocated_female(
    ::google::protobuf::Arena* message_arena, ::Name** female) {
    if (message_arena != NULL && 
        ::google::protobuf::Arena::GetArena(*female) == NULL) {
      message_arena->Own(*female);
    } else if (message_arena !=
               ::google::protobuf::Arena::GetArena(*female)) {
      ::Name* new_female = 
            ::google::protobuf::Arena::CreateMessage< ::Name >(
            message_arena);
      new_female->CopyFrom(**female);
      *female = new_female;
    }
}
void Genetics::unsafe_arena_set_allocated_female(
    ::Name* female) {
  if (GetArenaNoVirtual() == NULL) {
    delete female_;
  }
  female_ = female;
  if (female) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:Genetics.female)
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int Genetics::kMaleFieldNumber;
const int Genetics::kFemaleFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

Genetics::Genetics()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    protobuf_structs_2fGenetics_2eproto::InitDefaults();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:Genetics)
}
Genetics::Genetics(::google::protobuf::Arena* arena)
  : ::google::protobuf::Message(),
  _internal_metadata_(arena) {
#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  protobuf_structs_2fGenetics_2eproto::InitDefaults();
#endif  // GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  SharedCtor();
  RegisterArenaDtor(arena);
  // @@protoc_insertion_point(arena_constructor:Genetics)
}
Genetics::Genetics(const Genetics& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      _cached_size_(0) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  if (from.has_male()) {
    male_ = new ::Name(*from.male_);
  } else {
    male_ = NULL;
  }
  if (from.has_female()) {
    female_ = new ::Name(*from.female_);
  } else {
    female_ = NULL;
  }
  // @@protoc_insertion_point(copy_constructor:Genetics)
}

void Genetics::SharedCtor() {
  ::memset(&male_, 0, reinterpret_cast<char*>(&female_) -
    reinterpret_cast<char*>(&male_) + sizeof(female_));
  _cached_size_ = 0;
}

Genetics::~Genetics() {
  // @@protoc_insertion_point(destructor:Genetics)
  SharedDtor();
}

void Genetics::SharedDtor() {
  ::google::protobuf::Arena* arena = GetArenaNoVirtual();
  if (arena != NULL) {
    return;
  }

  if (this != internal_default_instance()) {
    delete male_;
  }
  if (this != internal_default_instance()) {
    delete female_;
  }
}

void Genetics::ArenaDtor(void* object) {
  Genetics* _this = reinterpret_cast< Genetics* >(object);
  (void)_this;
}
void Genetics::RegisterArenaDtor(::google::protobuf::Arena* arena) {
}
void Genetics::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* Genetics::descriptor() {
  protobuf_structs_2fGenetics_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_structs_2fGenetics_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const Genetics& Genetics::default_instance() {
  protobuf_structs_2fGenetics_2eproto::InitDefaults();
  return *internal_default_instance();
}

Genetics* Genetics::New(::google::protobuf::Arena* arena) const {
  return ::google::protobuf::Arena::CreateMessage<Genetics>(arena);
}

void Genetics::Clear() {
// @@protoc_insertion_point(message_clear_start:Genetics)
  if (GetArenaNoVirtual() == NULL && male_ != NULL) {
    delete male_;
  }
  male_ = NULL;
  if (GetArenaNoVirtual() == NULL && female_ != NULL) {
    delete female_;
  }
  female_ = NULL;
}

bool Genetics::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:Genetics)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // .Name male = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(10u)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_male()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // .Name female = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(18u)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_female()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0 ||
            ::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(input, tag));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:Genetics)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:Genetics)
  return false;
#undef DO_
}

void Genetics::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:Genetics)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // .Name male = 1;
  if (this->has_male()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      1, *this->male_, output);
  }

  // .Name female = 2;
  if (this->has_female()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      2, *this->female_, output);
  }

  // @@protoc_insertion_point(serialize_end:Genetics)
}

::google::protobuf::uint8* Genetics::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:Genetics)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // .Name male = 1;
  if (this->has_male()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        1, *this->male_, deterministic, target);
  }

  // .Name female = 2;
  if (this->has_female()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        2, *this->female_, deterministic, target);
  }

  // @@protoc_insertion_point(serialize_to_array_end:Genetics)
  return target;
}

size_t Genetics::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:Genetics)
  size_t total_size = 0;

  // .Name male = 1;
  if (this->has_male()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        *this->male_);
  }

  // .Name female = 2;
  if (this->has_female()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        *this->female_);
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void Genetics::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:Genetics)
  GOOGLE_DCHECK_NE(&from, this);
  const Genetics* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const Genetics>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:Genetics)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:Genetics)
    MergeFrom(*source);
  }
}

void Genetics::MergeFrom(const Genetics& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:Genetics)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.has_male()) {
    mutable_male()->::Name::MergeFrom(from.male());
  }
  if (from.has_female()) {
    mutable_female()->::Name::MergeFrom(from.female());
  }
}

void Genetics::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:Genetics)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Genetics::CopyFrom(const Genetics& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:Genetics)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Genetics::IsInitialized() const {
  return true;
}

void Genetics::Swap(Genetics* other) {
  if (other == this) return;
  if (GetArenaNoVirtual() == other->GetArenaNoVirtual()) {
    InternalSwap(other);
  } else {
    Genetics* temp = New(GetArenaNoVirtual());
    temp->MergeFrom(*other);
    other->CopyFrom(*this);
    InternalSwap(temp);
    if (GetArenaNoVirtual() == NULL) {
      delete temp;
    }
  }
}
void Genetics::UnsafeArenaSwap(Genetics* other) {
  if (other == this) return;
  GOOGLE_DCHECK(GetArenaNoVirtual() == other->GetArenaNoVirtual());
  InternalSwap(other);
}
void Genetics::InternalSwap(Genetics* other) {
  std::swap(male_, other->male_);
  std::swap(female_, other->female_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata Genetics::GetMetadata() const {
  protobuf_structs_2fGenetics_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_structs_2fGenetics_2eproto::file_level_metadata[kIndexInFileMessages];
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// Genetics

// .Name male = 1;
bool Genetics::has_male() const {
  return this != internal_default_instance() && male_ != NULL;
}
void Genetics::clear_male() {
  if (GetArenaNoVirtual() == NULL && male_ != NULL) delete male_;
  male_ = NULL;
}
const ::Name& Genetics::male() const {
  // @@protoc_insertion_point(field_get:Genetics.male)
  return male_ != NULL ? *male_
                         : *::Name::internal_default_instance();
}
::Name* Genetics::mutable_male() {
  
  if (male_ == NULL) {
    _slow_mutable_male();
  }
  // @@protoc_insertion_point(field_mutable:Genetics.male)
  return male_;
}
::Name* Genetics::release_male() {
  // @@protoc_insertion_point(field_release:Genetics.male)
  
  if (GetArenaNoVirtual() != NULL) {
    return _slow_release_male();
  } else {
    ::Name* temp = male_;
    male_ = NULL;
    return temp;
  }
}
 void Genetics::set_allocated_male(::Name* male) {
  ::google::protobuf::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == NULL) {
    delete male_;
  }
  if (male != NULL) {
    _slow_set_allocated_male(message_arena, &male);
  }
  male_ = male;
  if (male) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_set_allocated:Genetics.male)
}

// .Name female = 2;
bool Genetics::has_female() const {
  return this != internal_default_instance() && female_ != NULL;
}
void Genetics::clear_female() {
  if (GetArenaNoVirtual() == NULL && female_ != NULL) delete female_;
  female_ = NULL;
}
const ::Name& Genetics::female() const {
  // @@protoc_insertion_point(field_get:Genetics.female)
  return female_ != NULL ? *female_
                         : *::Name::internal_default_instance();
}
::Name* Genetics::mutable_female() {
  
  if (female_ == NULL) {
    _slow_mutable_female();
  }
  // @@protoc_insertion_point(field_mutable:Genetics.female)
  return female_;
}
::Name* Genetics::release_female() {
  // @@protoc_insertion_point(field_release:Genetics.female)
  
  if (GetArenaNoVirtual() != NULL) {
    return _slow_release_female();
  } else {
    ::Name* temp = female_;
    female_ = NULL;
    return temp;
  }
}
 void Genetics::set_allocated_female(::Name* female) {
  ::google::protobuf::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == NULL) {
    delete female_;
  }
  if (female != NULL) {
    _slow_set_allocated_female(message_arena, &female);
  }
  female_ = female;
  if (female) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_set_allocated:Genetics.female)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

// @@protoc_insertion_point(global_scope)
