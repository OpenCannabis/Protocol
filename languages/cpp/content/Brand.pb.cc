// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: content/Brand.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "content/Brand.pb.h"

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
class BrandDefaultTypeInternal {
public:
 ::google::protobuf::internal::ExplicitlyConstructed<Brand>
     _instance;
} _Brand_default_instance_;

namespace protobuf_content_2fBrand_2eproto {


namespace {

::google::protobuf::Metadata file_level_metadata[1];

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
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Brand, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Brand, name_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Brand, parent_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Brand, summary_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Brand, media_),
};
static const ::google::protobuf::internal::MigrationSchema schemas[] GOOGLE_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(Brand)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&_Brand_default_instance_),
};

namespace {

void protobuf_AssignDescriptors() {
  AddDescriptors();
  ::google::protobuf::MessageFactory* factory = NULL;
  AssignDescriptors(
      "content/Brand.proto", schemas, file_default_instances, TableStruct::offsets, factory,
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
void TableStruct::InitDefaultsImpl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::internal::InitProtobufDefaults();
  ::protobuf_content_2fName_2eproto::InitDefaults();
  ::protobuf_content_2fContent_2eproto::InitDefaults();
  ::protobuf_media_2fMediaItem_2eproto::InitDefaults();
  _Brand_default_instance_._instance.DefaultConstruct();
  ::google::protobuf::internal::OnShutdownDestroyMessage(
      &_Brand_default_instance_);_Brand_default_instance_._instance.get_mutable()->name_ = const_cast< ::Name*>(
      ::Name::internal_default_instance());
  _Brand_default_instance_._instance.get_mutable()->parent_ = const_cast< ::Brand*>(
      ::Brand::internal_default_instance());
  _Brand_default_instance_._instance.get_mutable()->summary_ = const_cast< ::Content*>(
      ::Content::internal_default_instance());
}

void InitDefaults() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &TableStruct::InitDefaultsImpl);
}
namespace {
void AddDescriptorsImpl() {
  InitDefaults();
  static const char descriptor[] GOOGLE_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
      "\n\023content/Brand.proto\032\022content/Name.prot"
      "o\032\025content/Content.proto\032\025media/MediaIte"
      "m.proto\"j\n\005Brand\022\023\n\004name\030\001 \001(\0132\005.Name\022\026\n"
      "\006parent\030\002 \001(\0132\006.Brand\022\031\n\007summary\030\003 \001(\0132\010"
      ".Content\022\031\n\005media\030\024 \003(\0132\n.MediaItemB1\n\032i"
      "o.bloombox.schema.contentB\014BrandContentH"
      "\001P\001\370\001\001b\006proto3"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 254);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "content/Brand.proto", &protobuf_RegisterTypes);
  ::protobuf_content_2fName_2eproto::AddDescriptors();
  ::protobuf_content_2fContent_2eproto::AddDescriptors();
  ::protobuf_media_2fMediaItem_2eproto::AddDescriptors();
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

}  // namespace protobuf_content_2fBrand_2eproto


// ===================================================================

void Brand::_slow_mutable_name() {
  name_ = ::google::protobuf::Arena::CreateMessage< ::Name >(
      GetArenaNoVirtual());
}
::Name* Brand::_slow_release_name() {
  if (name_ == NULL) {
    return NULL;
  } else {
    ::Name* temp = new ::Name(*name_);
    name_ = NULL;
    return temp;
  }
}
::Name* Brand::unsafe_arena_release_name() {
  // @@protoc_insertion_point(field_unsafe_arena_release:Brand.name)
  
  ::Name* temp = name_;
  name_ = NULL;
  return temp;
}
void Brand::_slow_set_allocated_name(
    ::google::protobuf::Arena* message_arena, ::Name** name) {
    if (message_arena != NULL && 
        ::google::protobuf::Arena::GetArena(*name) == NULL) {
      message_arena->Own(*name);
    } else if (message_arena !=
               ::google::protobuf::Arena::GetArena(*name)) {
      ::Name* new_name = 
            ::google::protobuf::Arena::CreateMessage< ::Name >(
            message_arena);
      new_name->CopyFrom(**name);
      *name = new_name;
    }
}
void Brand::unsafe_arena_set_allocated_name(
    ::Name* name) {
  if (GetArenaNoVirtual() == NULL) {
    delete name_;
  }
  name_ = name;
  if (name) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:Brand.name)
}
void Brand::_slow_mutable_parent() {
  parent_ = ::google::protobuf::Arena::CreateMessage< ::Brand >(
      GetArenaNoVirtual());
}
::Brand* Brand::_slow_release_parent() {
  if (parent_ == NULL) {
    return NULL;
  } else {
    ::Brand* temp = new ::Brand(*parent_);
    parent_ = NULL;
    return temp;
  }
}
::Brand* Brand::unsafe_arena_release_parent() {
  // @@protoc_insertion_point(field_unsafe_arena_release:Brand.parent)
  
  ::Brand* temp = parent_;
  parent_ = NULL;
  return temp;
}
void Brand::_slow_set_allocated_parent(
    ::google::protobuf::Arena* message_arena, ::Brand** parent) {
    if (message_arena != NULL && 
        ::google::protobuf::Arena::GetArena(*parent) == NULL) {
      message_arena->Own(*parent);
    } else if (message_arena !=
               ::google::protobuf::Arena::GetArena(*parent)) {
      ::Brand* new_parent = 
            ::google::protobuf::Arena::CreateMessage< ::Brand >(
            message_arena);
      new_parent->CopyFrom(**parent);
      *parent = new_parent;
    }
}
void Brand::unsafe_arena_set_allocated_parent(
    ::Brand* parent) {
  if (GetArenaNoVirtual() == NULL) {
    delete parent_;
  }
  parent_ = parent;
  if (parent) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:Brand.parent)
}
void Brand::_slow_mutable_summary() {
  summary_ = ::google::protobuf::Arena::CreateMessage< ::Content >(
      GetArenaNoVirtual());
}
::Content* Brand::_slow_release_summary() {
  if (summary_ == NULL) {
    return NULL;
  } else {
    ::Content* temp = new ::Content(*summary_);
    summary_ = NULL;
    return temp;
  }
}
::Content* Brand::unsafe_arena_release_summary() {
  // @@protoc_insertion_point(field_unsafe_arena_release:Brand.summary)
  
  ::Content* temp = summary_;
  summary_ = NULL;
  return temp;
}
void Brand::_slow_set_allocated_summary(
    ::google::protobuf::Arena* message_arena, ::Content** summary) {
    if (message_arena != NULL && 
        ::google::protobuf::Arena::GetArena(*summary) == NULL) {
      message_arena->Own(*summary);
    } else if (message_arena !=
               ::google::protobuf::Arena::GetArena(*summary)) {
      ::Content* new_summary = 
            ::google::protobuf::Arena::CreateMessage< ::Content >(
            message_arena);
      new_summary->CopyFrom(**summary);
      *summary = new_summary;
    }
}
void Brand::unsafe_arena_set_allocated_summary(
    ::Content* summary) {
  if (GetArenaNoVirtual() == NULL) {
    delete summary_;
  }
  summary_ = summary;
  if (summary) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:Brand.summary)
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int Brand::kNameFieldNumber;
const int Brand::kParentFieldNumber;
const int Brand::kSummaryFieldNumber;
const int Brand::kMediaFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

Brand::Brand()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    protobuf_content_2fBrand_2eproto::InitDefaults();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:Brand)
}
Brand::Brand(::google::protobuf::Arena* arena)
  : ::google::protobuf::Message(),
  _internal_metadata_(arena),
  media_(arena) {
  protobuf_content_2fBrand_2eproto::InitDefaults();
  SharedCtor();
  RegisterArenaDtor(arena);
  // @@protoc_insertion_point(arena_constructor:Brand)
}
Brand::Brand(const Brand& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      media_(from.media_),
      _cached_size_(0) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  if (from.has_name()) {
    name_ = new ::Name(*from.name_);
  } else {
    name_ = NULL;
  }
  if (from.has_parent()) {
    parent_ = new ::Brand(*from.parent_);
  } else {
    parent_ = NULL;
  }
  if (from.has_summary()) {
    summary_ = new ::Content(*from.summary_);
  } else {
    summary_ = NULL;
  }
  // @@protoc_insertion_point(copy_constructor:Brand)
}

void Brand::SharedCtor() {
  ::memset(&name_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&summary_) -
      reinterpret_cast<char*>(&name_)) + sizeof(summary_));
  _cached_size_ = 0;
}

Brand::~Brand() {
  // @@protoc_insertion_point(destructor:Brand)
  SharedDtor();
}

void Brand::SharedDtor() {
  ::google::protobuf::Arena* arena = GetArenaNoVirtual();
  GOOGLE_DCHECK(arena == NULL);
  if (arena != NULL) {
    return;
  }

  if (this != internal_default_instance()) delete name_;
  if (this != internal_default_instance()) delete parent_;
  if (this != internal_default_instance()) delete summary_;
}

void Brand::ArenaDtor(void* object) {
  Brand* _this = reinterpret_cast< Brand* >(object);
  (void)_this;
}
void Brand::RegisterArenaDtor(::google::protobuf::Arena* arena) {
}
void Brand::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* Brand::descriptor() {
  protobuf_content_2fBrand_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_content_2fBrand_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const Brand& Brand::default_instance() {
  protobuf_content_2fBrand_2eproto::InitDefaults();
  return *internal_default_instance();
}

Brand* Brand::New(::google::protobuf::Arena* arena) const {
  return ::google::protobuf::Arena::CreateMessage<Brand>(arena);
}

void Brand::Clear() {
// @@protoc_insertion_point(message_clear_start:Brand)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  media_.Clear();
  if (GetArenaNoVirtual() == NULL && name_ != NULL) {
    delete name_;
  }
  name_ = NULL;
  if (GetArenaNoVirtual() == NULL && parent_ != NULL) {
    delete parent_;
  }
  parent_ = NULL;
  if (GetArenaNoVirtual() == NULL && summary_ != NULL) {
    delete summary_;
  }
  summary_ = NULL;
  _internal_metadata_.Clear();
}

bool Brand::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:Brand)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(16383u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // .Name name = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(10u /* 10 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_name()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // .Brand parent = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(18u /* 18 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_parent()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // .Content summary = 3;
      case 3: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(26u /* 26 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_summary()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // repeated .MediaItem media = 20;
      case 20: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(162u /* 162 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
                input, add_media()));
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
  // @@protoc_insertion_point(parse_success:Brand)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:Brand)
  return false;
#undef DO_
}

void Brand::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:Brand)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // .Name name = 1;
  if (this->has_name()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      1, *this->name_, output);
  }

  // .Brand parent = 2;
  if (this->has_parent()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      2, *this->parent_, output);
  }

  // .Content summary = 3;
  if (this->has_summary()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      3, *this->summary_, output);
  }

  // repeated .MediaItem media = 20;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->media_size()); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      20, this->media(static_cast<int>(i)), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:Brand)
}

::google::protobuf::uint8* Brand::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:Brand)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // .Name name = 1;
  if (this->has_name()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        1, *this->name_, deterministic, target);
  }

  // .Brand parent = 2;
  if (this->has_parent()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        2, *this->parent_, deterministic, target);
  }

  // .Content summary = 3;
  if (this->has_summary()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        3, *this->summary_, deterministic, target);
  }

  // repeated .MediaItem media = 20;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->media_size()); i < n; i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        20, this->media(static_cast<int>(i)), deterministic, target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:Brand)
  return target;
}

size_t Brand::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:Brand)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // repeated .MediaItem media = 20;
  {
    unsigned int count = static_cast<unsigned int>(this->media_size());
    total_size += 2UL * count;
    for (unsigned int i = 0; i < count; i++) {
      total_size +=
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          this->media(static_cast<int>(i)));
    }
  }

  // .Name name = 1;
  if (this->has_name()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        *this->name_);
  }

  // .Brand parent = 2;
  if (this->has_parent()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        *this->parent_);
  }

  // .Content summary = 3;
  if (this->has_summary()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        *this->summary_);
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void Brand::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:Brand)
  GOOGLE_DCHECK_NE(&from, this);
  const Brand* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const Brand>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:Brand)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:Brand)
    MergeFrom(*source);
  }
}

void Brand::MergeFrom(const Brand& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:Brand)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  media_.MergeFrom(from.media_);
  if (from.has_name()) {
    mutable_name()->::Name::MergeFrom(from.name());
  }
  if (from.has_parent()) {
    mutable_parent()->::Brand::MergeFrom(from.parent());
  }
  if (from.has_summary()) {
    mutable_summary()->::Content::MergeFrom(from.summary());
  }
}

void Brand::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:Brand)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Brand::CopyFrom(const Brand& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:Brand)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Brand::IsInitialized() const {
  return true;
}

void Brand::Swap(Brand* other) {
  if (other == this) return;
  if (GetArenaNoVirtual() == other->GetArenaNoVirtual()) {
    InternalSwap(other);
  } else {
    Brand* temp = New(GetArenaNoVirtual());
    temp->MergeFrom(*other);
    other->CopyFrom(*this);
    InternalSwap(temp);
    if (GetArenaNoVirtual() == NULL) {
      delete temp;
    }
  }
}
void Brand::UnsafeArenaSwap(Brand* other) {
  if (other == this) return;
  GOOGLE_DCHECK(GetArenaNoVirtual() == other->GetArenaNoVirtual());
  InternalSwap(other);
}
void Brand::InternalSwap(Brand* other) {
  using std::swap;
  media_.InternalSwap(&other->media_);
  swap(name_, other->name_);
  swap(parent_, other->parent_);
  swap(summary_, other->summary_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata Brand::GetMetadata() const {
  protobuf_content_2fBrand_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_content_2fBrand_2eproto::file_level_metadata[kIndexInFileMessages];
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// Brand

// .Name name = 1;
bool Brand::has_name() const {
  return this != internal_default_instance() && name_ != NULL;
}
void Brand::clear_name() {
  if (GetArenaNoVirtual() == NULL && name_ != NULL) delete name_;
  name_ = NULL;
}
const ::Name& Brand::name() const {
  const ::Name* p = name_;
  // @@protoc_insertion_point(field_get:Brand.name)
  return p != NULL ? *p : *reinterpret_cast<const ::Name*>(
      &::_Name_default_instance_);
}
::Name* Brand::mutable_name() {
  
  if (name_ == NULL) {
    _slow_mutable_name();
  }
  // @@protoc_insertion_point(field_mutable:Brand.name)
  return name_;
}
::Name* Brand::release_name() {
  // @@protoc_insertion_point(field_release:Brand.name)
  
  if (GetArenaNoVirtual() != NULL) {
    return _slow_release_name();
  } else {
    ::Name* temp = name_;
    name_ = NULL;
    return temp;
  }
}
 void Brand::set_allocated_name(::Name* name) {
  ::google::protobuf::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == NULL) {
    delete name_;
  }
  if (name != NULL) {
    _slow_set_allocated_name(message_arena, &name);
  }
  name_ = name;
  if (name) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_set_allocated:Brand.name)
}

// .Brand parent = 2;
bool Brand::has_parent() const {
  return this != internal_default_instance() && parent_ != NULL;
}
void Brand::clear_parent() {
  if (GetArenaNoVirtual() == NULL && parent_ != NULL) delete parent_;
  parent_ = NULL;
}
const ::Brand& Brand::parent() const {
  const ::Brand* p = parent_;
  // @@protoc_insertion_point(field_get:Brand.parent)
  return p != NULL ? *p : *reinterpret_cast<const ::Brand*>(
      &::_Brand_default_instance_);
}
::Brand* Brand::mutable_parent() {
  
  if (parent_ == NULL) {
    _slow_mutable_parent();
  }
  // @@protoc_insertion_point(field_mutable:Brand.parent)
  return parent_;
}
::Brand* Brand::release_parent() {
  // @@protoc_insertion_point(field_release:Brand.parent)
  
  if (GetArenaNoVirtual() != NULL) {
    return _slow_release_parent();
  } else {
    ::Brand* temp = parent_;
    parent_ = NULL;
    return temp;
  }
}
 void Brand::set_allocated_parent(::Brand* parent) {
  ::google::protobuf::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == NULL) {
    delete parent_;
  }
  if (parent != NULL) {
    _slow_set_allocated_parent(message_arena, &parent);
  }
  parent_ = parent;
  if (parent) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_set_allocated:Brand.parent)
}

// .Content summary = 3;
bool Brand::has_summary() const {
  return this != internal_default_instance() && summary_ != NULL;
}
void Brand::clear_summary() {
  if (GetArenaNoVirtual() == NULL && summary_ != NULL) delete summary_;
  summary_ = NULL;
}
const ::Content& Brand::summary() const {
  const ::Content* p = summary_;
  // @@protoc_insertion_point(field_get:Brand.summary)
  return p != NULL ? *p : *reinterpret_cast<const ::Content*>(
      &::_Content_default_instance_);
}
::Content* Brand::mutable_summary() {
  
  if (summary_ == NULL) {
    _slow_mutable_summary();
  }
  // @@protoc_insertion_point(field_mutable:Brand.summary)
  return summary_;
}
::Content* Brand::release_summary() {
  // @@protoc_insertion_point(field_release:Brand.summary)
  
  if (GetArenaNoVirtual() != NULL) {
    return _slow_release_summary();
  } else {
    ::Content* temp = summary_;
    summary_ = NULL;
    return temp;
  }
}
 void Brand::set_allocated_summary(::Content* summary) {
  ::google::protobuf::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == NULL) {
    delete summary_;
  }
  if (summary != NULL) {
    _slow_set_allocated_summary(message_arena, &summary);
  }
  summary_ = summary;
  if (summary) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_set_allocated:Brand.summary)
}

// repeated .MediaItem media = 20;
int Brand::media_size() const {
  return media_.size();
}
void Brand::clear_media() {
  media_.Clear();
}
const ::MediaItem& Brand::media(int index) const {
  // @@protoc_insertion_point(field_get:Brand.media)
  return media_.Get(index);
}
::MediaItem* Brand::mutable_media(int index) {
  // @@protoc_insertion_point(field_mutable:Brand.media)
  return media_.Mutable(index);
}
::MediaItem* Brand::add_media() {
  // @@protoc_insertion_point(field_add:Brand.media)
  return media_.Add();
}
::google::protobuf::RepeatedPtrField< ::MediaItem >*
Brand::mutable_media() {
  // @@protoc_insertion_point(field_mutable_list:Brand.media)
  return &media_;
}
const ::google::protobuf::RepeatedPtrField< ::MediaItem >&
Brand::media() const {
  // @@protoc_insertion_point(field_list:Brand.media)
  return media_;
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

// @@protoc_insertion_point(global_scope)
