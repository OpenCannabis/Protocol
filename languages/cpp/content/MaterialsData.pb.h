// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: content/MaterialsData.proto

#ifndef PROTOBUF_content_2fMaterialsData_2eproto__INCLUDED
#define PROTOBUF_content_2fMaterialsData_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3003000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3003002 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
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
#include <google/protobuf/unknown_field_set.h>
#include "structs/Grow.pb.h"
#include "structs/Species.pb.h"
#include "structs/Genetics.pb.h"
// @@protoc_insertion_point(includes)
class Genetics;
class GeneticsDefaultTypeInternal;
extern GeneticsDefaultTypeInternal _Genetics_default_instance_;
class MaterialsData;
class MaterialsDataDefaultTypeInternal;
extern MaterialsDataDefaultTypeInternal _MaterialsData_default_instance_;

namespace protobuf_content_2fMaterialsData_2eproto {
// Internal implementation detail -- do not call these.
struct TableStruct {
  static const ::google::protobuf::internal::ParseTableField entries[];
  static const ::google::protobuf::internal::AuxillaryParseTableField aux[];
  static const ::google::protobuf::internal::ParseTable schema[];
  static const ::google::protobuf::uint32 offsets[];
  static void InitDefaultsImpl();
  static void Shutdown();
};
void AddDescriptors();
void InitDefaults();
}  // namespace protobuf_content_2fMaterialsData_2eproto

// ===================================================================

class MaterialsData : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:MaterialsData) */ {
 public:
  MaterialsData();
  virtual ~MaterialsData();

  MaterialsData(const MaterialsData& from);

  inline MaterialsData& operator=(const MaterialsData& from) {
    CopyFrom(from);
    return *this;
  }

  inline ::google::protobuf::Arena* GetArena() const PROTOBUF_FINAL {
    return GetArenaNoVirtual();
  }
  inline void* GetMaybeArenaPointer() const PROTOBUF_FINAL {
    return MaybeArenaPtr();
  }
  static const ::google::protobuf::Descriptor* descriptor();
  static const MaterialsData& default_instance();

  static inline const MaterialsData* internal_default_instance() {
    return reinterpret_cast<const MaterialsData*>(
               &_MaterialsData_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    0;

  void UnsafeArenaSwap(MaterialsData* other);
  void Swap(MaterialsData* other);

  // implements Message ----------------------------------------------

  inline MaterialsData* New() const PROTOBUF_FINAL { return New(NULL); }

  MaterialsData* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const MaterialsData& from);
  void MergeFrom(const MaterialsData& from);
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
  void InternalSwap(MaterialsData* other);
  protected:
  explicit MaterialsData(::google::protobuf::Arena* arena);
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

  // accessors -------------------------------------------------------

  // repeated string ingredients = 1;
  int ingredients_size() const;
  void clear_ingredients();
  static const int kIngredientsFieldNumber = 1;
  const ::std::string& ingredients(int index) const;
  ::std::string* mutable_ingredients(int index);
  void set_ingredients(int index, const ::std::string& value);
  #if LANG_CXX11
  void set_ingredients(int index, ::std::string&& value);
  #endif
  void set_ingredients(int index, const char* value);
  void set_ingredients(int index, const char* value, size_t size);
  ::std::string* add_ingredients();
  void add_ingredients(const ::std::string& value);
  #if LANG_CXX11
  void add_ingredients(::std::string&& value);
  #endif
  void add_ingredients(const char* value);
  void add_ingredients(const char* value, size_t size);
  const ::google::protobuf::RepeatedPtrField< ::std::string>& ingredients() const;
  ::google::protobuf::RepeatedPtrField< ::std::string>* mutable_ingredients();

  // .Genetics genetics = 4;
  bool has_genetics() const;
  void clear_genetics();
  static const int kGeneticsFieldNumber = 4;
  private:
  void _slow_mutable_genetics();
  void _slow_set_allocated_genetics(
      ::google::protobuf::Arena* message_arena, ::Genetics** genetics);
  ::Genetics* _slow_release_genetics();
  public:
  const ::Genetics& genetics() const;
  ::Genetics* mutable_genetics();
  ::Genetics* release_genetics();
  void set_allocated_genetics(::Genetics* genetics);
  ::Genetics* unsafe_arena_release_genetics();
  void unsafe_arena_set_allocated_genetics(
      ::Genetics* genetics);

  // .Grow grow = 2;
  void clear_grow();
  static const int kGrowFieldNumber = 2;
  ::Grow grow() const;
  void set_grow(::Grow value);

  // .Species species = 3;
  void clear_species();
  static const int kSpeciesFieldNumber = 3;
  ::Species species() const;
  void set_species(::Species value);

  // @@protoc_insertion_point(class_scope:MaterialsData)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  friend class ::google::protobuf::Arena;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::google::protobuf::RepeatedPtrField< ::std::string> ingredients_;
  ::Genetics* genetics_;
  int grow_;
  int species_;
  mutable int _cached_size_;
  friend struct protobuf_content_2fMaterialsData_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
// MaterialsData

// repeated string ingredients = 1;
inline int MaterialsData::ingredients_size() const {
  return ingredients_.size();
}
inline void MaterialsData::clear_ingredients() {
  ingredients_.Clear();
}
inline const ::std::string& MaterialsData::ingredients(int index) const {
  // @@protoc_insertion_point(field_get:MaterialsData.ingredients)
  return ingredients_.Get(index);
}
inline ::std::string* MaterialsData::mutable_ingredients(int index) {
  // @@protoc_insertion_point(field_mutable:MaterialsData.ingredients)
  return ingredients_.Mutable(index);
}
inline void MaterialsData::set_ingredients(int index, const ::std::string& value) {
  // @@protoc_insertion_point(field_set:MaterialsData.ingredients)
  ingredients_.Mutable(index)->assign(value);
}
#if LANG_CXX11
inline void MaterialsData::set_ingredients(int index, ::std::string&& value) {
  // @@protoc_insertion_point(field_set:MaterialsData.ingredients)
  ingredients_.Mutable(index)->assign(std::move(value));
}
#endif
inline void MaterialsData::set_ingredients(int index, const char* value) {
  GOOGLE_DCHECK(value != NULL);
  ingredients_.Mutable(index)->assign(value);
  // @@protoc_insertion_point(field_set_char:MaterialsData.ingredients)
}
inline void MaterialsData::set_ingredients(int index, const char* value, size_t size) {
  ingredients_.Mutable(index)->assign(
    reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:MaterialsData.ingredients)
}
inline ::std::string* MaterialsData::add_ingredients() {
  // @@protoc_insertion_point(field_add_mutable:MaterialsData.ingredients)
  return ingredients_.Add();
}
inline void MaterialsData::add_ingredients(const ::std::string& value) {
  ingredients_.Add()->assign(value);
  // @@protoc_insertion_point(field_add:MaterialsData.ingredients)
}
#if LANG_CXX11
inline void MaterialsData::add_ingredients(::std::string&& value) {
  ingredients_.Add(std::move(value));
  // @@protoc_insertion_point(field_add:MaterialsData.ingredients)
}
#endif
inline void MaterialsData::add_ingredients(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  ingredients_.Add()->assign(value);
  // @@protoc_insertion_point(field_add_char:MaterialsData.ingredients)
}
inline void MaterialsData::add_ingredients(const char* value, size_t size) {
  ingredients_.Add()->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_add_pointer:MaterialsData.ingredients)
}
inline const ::google::protobuf::RepeatedPtrField< ::std::string>&
MaterialsData::ingredients() const {
  // @@protoc_insertion_point(field_list:MaterialsData.ingredients)
  return ingredients_;
}
inline ::google::protobuf::RepeatedPtrField< ::std::string>*
MaterialsData::mutable_ingredients() {
  // @@protoc_insertion_point(field_mutable_list:MaterialsData.ingredients)
  return &ingredients_;
}

// .Grow grow = 2;
inline void MaterialsData::clear_grow() {
  grow_ = 0;
}
inline ::Grow MaterialsData::grow() const {
  // @@protoc_insertion_point(field_get:MaterialsData.grow)
  return static_cast< ::Grow >(grow_);
}
inline void MaterialsData::set_grow(::Grow value) {
  
  grow_ = value;
  // @@protoc_insertion_point(field_set:MaterialsData.grow)
}

// .Species species = 3;
inline void MaterialsData::clear_species() {
  species_ = 0;
}
inline ::Species MaterialsData::species() const {
  // @@protoc_insertion_point(field_get:MaterialsData.species)
  return static_cast< ::Species >(species_);
}
inline void MaterialsData::set_species(::Species value) {
  
  species_ = value;
  // @@protoc_insertion_point(field_set:MaterialsData.species)
}

// .Genetics genetics = 4;
inline bool MaterialsData::has_genetics() const {
  return this != internal_default_instance() && genetics_ != NULL;
}
inline void MaterialsData::clear_genetics() {
  if (GetArenaNoVirtual() == NULL && genetics_ != NULL) delete genetics_;
  genetics_ = NULL;
}
inline const ::Genetics& MaterialsData::genetics() const {
  // @@protoc_insertion_point(field_get:MaterialsData.genetics)
  return genetics_ != NULL ? *genetics_
                         : *::Genetics::internal_default_instance();
}
inline ::Genetics* MaterialsData::mutable_genetics() {
  
  if (genetics_ == NULL) {
    _slow_mutable_genetics();
  }
  // @@protoc_insertion_point(field_mutable:MaterialsData.genetics)
  return genetics_;
}
inline ::Genetics* MaterialsData::release_genetics() {
  // @@protoc_insertion_point(field_release:MaterialsData.genetics)
  
  if (GetArenaNoVirtual() != NULL) {
    return _slow_release_genetics();
  } else {
    ::Genetics* temp = genetics_;
    genetics_ = NULL;
    return temp;
  }
}
inline  void MaterialsData::set_allocated_genetics(::Genetics* genetics) {
  ::google::protobuf::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == NULL) {
    delete genetics_;
  }
  if (genetics != NULL) {
    _slow_set_allocated_genetics(message_arena, &genetics);
  }
  genetics_ = genetics;
  if (genetics) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_set_allocated:MaterialsData.genetics)
}

#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)


// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_content_2fMaterialsData_2eproto__INCLUDED
