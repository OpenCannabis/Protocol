// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: media/MediaType.proto

#ifndef PROTOBUF_media_2fMediaType_2eproto__INCLUDED
#define PROTOBUF_media_2fMediaType_2eproto__INCLUDED

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
class DocumentType;
class DocumentTypeDefaultTypeInternal;
extern DocumentTypeDefaultTypeInternal _DocumentType_default_instance_;
class ImageType;
class ImageTypeDefaultTypeInternal;
extern ImageTypeDefaultTypeInternal _ImageType_default_instance_;
class MediaType;
class MediaTypeDefaultTypeInternal;
extern MediaTypeDefaultTypeInternal _MediaType_default_instance_;
class VideoType;
class VideoTypeDefaultTypeInternal;
extern VideoTypeDefaultTypeInternal _VideoType_default_instance_;

namespace protobuf_media_2fMediaType_2eproto {
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
}  // namespace protobuf_media_2fMediaType_2eproto

enum MediaType_Kind {
  MediaType_Kind_LINK = 0,
  MediaType_Kind_IMAGE = 1,
  MediaType_Kind_DOCUMENT = 2,
  MediaType_Kind_VIDEO = 3,
  MediaType_Kind_MediaType_Kind_INT_MIN_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32min,
  MediaType_Kind_MediaType_Kind_INT_MAX_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32max
};
bool MediaType_Kind_IsValid(int value);
const MediaType_Kind MediaType_Kind_Kind_MIN = MediaType_Kind_LINK;
const MediaType_Kind MediaType_Kind_Kind_MAX = MediaType_Kind_VIDEO;
const int MediaType_Kind_Kind_ARRAYSIZE = MediaType_Kind_Kind_MAX + 1;

const ::google::protobuf::EnumDescriptor* MediaType_Kind_descriptor();
inline const ::std::string& MediaType_Kind_Name(MediaType_Kind value) {
  return ::google::protobuf::internal::NameOfEnum(
    MediaType_Kind_descriptor(), value);
}
inline bool MediaType_Kind_Parse(
    const ::std::string& name, MediaType_Kind* value) {
  return ::google::protobuf::internal::ParseNamedEnum<MediaType_Kind>(
    MediaType_Kind_descriptor(), name, value);
}
enum ImageType_ImageKind {
  ImageType_ImageKind_PNG = 0,
  ImageType_ImageKind_JPG = 1,
  ImageType_ImageKind_GIF = 2,
  ImageType_ImageKind_SVG = 3,
  ImageType_ImageKind_WEBP = 4,
  ImageType_ImageKind_ImageType_ImageKind_INT_MIN_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32min,
  ImageType_ImageKind_ImageType_ImageKind_INT_MAX_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32max
};
bool ImageType_ImageKind_IsValid(int value);
const ImageType_ImageKind ImageType_ImageKind_ImageKind_MIN = ImageType_ImageKind_PNG;
const ImageType_ImageKind ImageType_ImageKind_ImageKind_MAX = ImageType_ImageKind_WEBP;
const int ImageType_ImageKind_ImageKind_ARRAYSIZE = ImageType_ImageKind_ImageKind_MAX + 1;

const ::google::protobuf::EnumDescriptor* ImageType_ImageKind_descriptor();
inline const ::std::string& ImageType_ImageKind_Name(ImageType_ImageKind value) {
  return ::google::protobuf::internal::NameOfEnum(
    ImageType_ImageKind_descriptor(), value);
}
inline bool ImageType_ImageKind_Parse(
    const ::std::string& name, ImageType_ImageKind* value) {
  return ::google::protobuf::internal::ParseNamedEnum<ImageType_ImageKind>(
    ImageType_ImageKind_descriptor(), name, value);
}
enum DocumentType_DocumentKind {
  DocumentType_DocumentKind_TXT = 0,
  DocumentType_DocumentKind_HTML = 1,
  DocumentType_DocumentKind_PDF = 2,
  DocumentType_DocumentKind_MARKDOWN = 3,
  DocumentType_DocumentKind_DocumentType_DocumentKind_INT_MIN_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32min,
  DocumentType_DocumentKind_DocumentType_DocumentKind_INT_MAX_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32max
};
bool DocumentType_DocumentKind_IsValid(int value);
const DocumentType_DocumentKind DocumentType_DocumentKind_DocumentKind_MIN = DocumentType_DocumentKind_TXT;
const DocumentType_DocumentKind DocumentType_DocumentKind_DocumentKind_MAX = DocumentType_DocumentKind_MARKDOWN;
const int DocumentType_DocumentKind_DocumentKind_ARRAYSIZE = DocumentType_DocumentKind_DocumentKind_MAX + 1;

const ::google::protobuf::EnumDescriptor* DocumentType_DocumentKind_descriptor();
inline const ::std::string& DocumentType_DocumentKind_Name(DocumentType_DocumentKind value) {
  return ::google::protobuf::internal::NameOfEnum(
    DocumentType_DocumentKind_descriptor(), value);
}
inline bool DocumentType_DocumentKind_Parse(
    const ::std::string& name, DocumentType_DocumentKind* value) {
  return ::google::protobuf::internal::ParseNamedEnum<DocumentType_DocumentKind>(
    DocumentType_DocumentKind_descriptor(), name, value);
}
enum VideoType_VideoKind {
  VideoType_VideoKind_MP4 = 0,
  VideoType_VideoKind_FLV = 1,
  VideoType_VideoKind_HLS = 2,
  VideoType_VideoKind_VideoType_VideoKind_INT_MIN_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32min,
  VideoType_VideoKind_VideoType_VideoKind_INT_MAX_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32max
};
bool VideoType_VideoKind_IsValid(int value);
const VideoType_VideoKind VideoType_VideoKind_VideoKind_MIN = VideoType_VideoKind_MP4;
const VideoType_VideoKind VideoType_VideoKind_VideoKind_MAX = VideoType_VideoKind_HLS;
const int VideoType_VideoKind_VideoKind_ARRAYSIZE = VideoType_VideoKind_VideoKind_MAX + 1;

const ::google::protobuf::EnumDescriptor* VideoType_VideoKind_descriptor();
inline const ::std::string& VideoType_VideoKind_Name(VideoType_VideoKind value) {
  return ::google::protobuf::internal::NameOfEnum(
    VideoType_VideoKind_descriptor(), value);
}
inline bool VideoType_VideoKind_Parse(
    const ::std::string& name, VideoType_VideoKind* value) {
  return ::google::protobuf::internal::ParseNamedEnum<VideoType_VideoKind>(
    VideoType_VideoKind_descriptor(), name, value);
}
// ===================================================================

class MediaType : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:MediaType) */ {
 public:
  MediaType();
  virtual ~MediaType();

  MediaType(const MediaType& from);

  inline MediaType& operator=(const MediaType& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  MediaType(MediaType&& from) noexcept
    : MediaType() {
    *this = ::std::move(from);
  }

  inline MediaType& operator=(MediaType&& from) noexcept {
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
  static const MediaType& default_instance();

  static inline const MediaType* internal_default_instance() {
    return reinterpret_cast<const MediaType*>(
               &_MediaType_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    0;

  void UnsafeArenaSwap(MediaType* other);
  void Swap(MediaType* other);
  friend void swap(MediaType& a, MediaType& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline MediaType* New() const PROTOBUF_FINAL { return New(NULL); }

  MediaType* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const MediaType& from);
  void MergeFrom(const MediaType& from);
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
  void InternalSwap(MediaType* other);
  protected:
  explicit MediaType(::google::protobuf::Arena* arena);
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

  typedef MediaType_Kind Kind;
  static const Kind LINK =
    MediaType_Kind_LINK;
  static const Kind IMAGE =
    MediaType_Kind_IMAGE;
  static const Kind DOCUMENT =
    MediaType_Kind_DOCUMENT;
  static const Kind VIDEO =
    MediaType_Kind_VIDEO;
  static inline bool Kind_IsValid(int value) {
    return MediaType_Kind_IsValid(value);
  }
  static const Kind Kind_MIN =
    MediaType_Kind_Kind_MIN;
  static const Kind Kind_MAX =
    MediaType_Kind_Kind_MAX;
  static const int Kind_ARRAYSIZE =
    MediaType_Kind_Kind_ARRAYSIZE;
  static inline const ::google::protobuf::EnumDescriptor*
  Kind_descriptor() {
    return MediaType_Kind_descriptor();
  }
  static inline const ::std::string& Kind_Name(Kind value) {
    return MediaType_Kind_Name(value);
  }
  static inline bool Kind_Parse(const ::std::string& name,
      Kind* value) {
    return MediaType_Kind_Parse(name, value);
  }

  // accessors -------------------------------------------------------

  // .ImageType image_type = 101;
  bool has_image_type() const;
  void clear_image_type();
  static const int kImageTypeFieldNumber = 101;
  private:
  void _slow_mutable_image_type();
  void _slow_set_allocated_image_type(
      ::google::protobuf::Arena* message_arena, ::ImageType** image_type);
  ::ImageType* _slow_release_image_type();
  public:
  const ::ImageType& image_type() const;
  ::ImageType* mutable_image_type();
  ::ImageType* release_image_type();
  void set_allocated_image_type(::ImageType* image_type);
  ::ImageType* unsafe_arena_release_image_type();
  void unsafe_arena_set_allocated_image_type(
      ::ImageType* image_type);

  // .DocumentType document_type = 201;
  bool has_document_type() const;
  void clear_document_type();
  static const int kDocumentTypeFieldNumber = 201;
  private:
  void _slow_mutable_document_type();
  void _slow_set_allocated_document_type(
      ::google::protobuf::Arena* message_arena, ::DocumentType** document_type);
  ::DocumentType* _slow_release_document_type();
  public:
  const ::DocumentType& document_type() const;
  ::DocumentType* mutable_document_type();
  ::DocumentType* release_document_type();
  void set_allocated_document_type(::DocumentType* document_type);
  ::DocumentType* unsafe_arena_release_document_type();
  void unsafe_arena_set_allocated_document_type(
      ::DocumentType* document_type);

  // .VideoType video_type = 301;
  bool has_video_type() const;
  void clear_video_type();
  static const int kVideoTypeFieldNumber = 301;
  private:
  void _slow_mutable_video_type();
  void _slow_set_allocated_video_type(
      ::google::protobuf::Arena* message_arena, ::VideoType** video_type);
  ::VideoType* _slow_release_video_type();
  public:
  const ::VideoType& video_type() const;
  ::VideoType* mutable_video_type();
  ::VideoType* release_video_type();
  void set_allocated_video_type(::VideoType* video_type);
  ::VideoType* unsafe_arena_release_video_type();
  void unsafe_arena_set_allocated_video_type(
      ::VideoType* video_type);

  // .MediaType.Kind kind = 1;
  void clear_kind();
  static const int kKindFieldNumber = 1;
  ::MediaType_Kind kind() const;
  void set_kind(::MediaType_Kind value);

  // @@protoc_insertion_point(class_scope:MediaType)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  template <typename T> friend class ::google::protobuf::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::ImageType* image_type_;
  ::DocumentType* document_type_;
  ::VideoType* video_type_;
  int kind_;
  mutable int _cached_size_;
  friend struct protobuf_media_2fMediaType_2eproto::TableStruct;
};
// -------------------------------------------------------------------

class ImageType : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:ImageType) */ {
 public:
  ImageType();
  virtual ~ImageType();

  ImageType(const ImageType& from);

  inline ImageType& operator=(const ImageType& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  ImageType(ImageType&& from) noexcept
    : ImageType() {
    *this = ::std::move(from);
  }

  inline ImageType& operator=(ImageType&& from) noexcept {
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
  static const ImageType& default_instance();

  static inline const ImageType* internal_default_instance() {
    return reinterpret_cast<const ImageType*>(
               &_ImageType_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    1;

  void UnsafeArenaSwap(ImageType* other);
  void Swap(ImageType* other);
  friend void swap(ImageType& a, ImageType& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline ImageType* New() const PROTOBUF_FINAL { return New(NULL); }

  ImageType* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const ImageType& from);
  void MergeFrom(const ImageType& from);
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
  void InternalSwap(ImageType* other);
  protected:
  explicit ImageType(::google::protobuf::Arena* arena);
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

  typedef ImageType_ImageKind ImageKind;
  static const ImageKind PNG =
    ImageType_ImageKind_PNG;
  static const ImageKind JPG =
    ImageType_ImageKind_JPG;
  static const ImageKind GIF =
    ImageType_ImageKind_GIF;
  static const ImageKind SVG =
    ImageType_ImageKind_SVG;
  static const ImageKind WEBP =
    ImageType_ImageKind_WEBP;
  static inline bool ImageKind_IsValid(int value) {
    return ImageType_ImageKind_IsValid(value);
  }
  static const ImageKind ImageKind_MIN =
    ImageType_ImageKind_ImageKind_MIN;
  static const ImageKind ImageKind_MAX =
    ImageType_ImageKind_ImageKind_MAX;
  static const int ImageKind_ARRAYSIZE =
    ImageType_ImageKind_ImageKind_ARRAYSIZE;
  static inline const ::google::protobuf::EnumDescriptor*
  ImageKind_descriptor() {
    return ImageType_ImageKind_descriptor();
  }
  static inline const ::std::string& ImageKind_Name(ImageKind value) {
    return ImageType_ImageKind_Name(value);
  }
  static inline bool ImageKind_Parse(const ::std::string& name,
      ImageKind* value) {
    return ImageType_ImageKind_Parse(name, value);
  }

  // accessors -------------------------------------------------------

  // .ImageType.ImageKind kind = 1;
  void clear_kind();
  static const int kKindFieldNumber = 1;
  ::ImageType_ImageKind kind() const;
  void set_kind(::ImageType_ImageKind value);

  // @@protoc_insertion_point(class_scope:ImageType)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  template <typename T> friend class ::google::protobuf::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  int kind_;
  mutable int _cached_size_;
  friend struct protobuf_media_2fMediaType_2eproto::TableStruct;
};
// -------------------------------------------------------------------

class DocumentType : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:DocumentType) */ {
 public:
  DocumentType();
  virtual ~DocumentType();

  DocumentType(const DocumentType& from);

  inline DocumentType& operator=(const DocumentType& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  DocumentType(DocumentType&& from) noexcept
    : DocumentType() {
    *this = ::std::move(from);
  }

  inline DocumentType& operator=(DocumentType&& from) noexcept {
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
  static const DocumentType& default_instance();

  static inline const DocumentType* internal_default_instance() {
    return reinterpret_cast<const DocumentType*>(
               &_DocumentType_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    2;

  void UnsafeArenaSwap(DocumentType* other);
  void Swap(DocumentType* other);
  friend void swap(DocumentType& a, DocumentType& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline DocumentType* New() const PROTOBUF_FINAL { return New(NULL); }

  DocumentType* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const DocumentType& from);
  void MergeFrom(const DocumentType& from);
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
  void InternalSwap(DocumentType* other);
  protected:
  explicit DocumentType(::google::protobuf::Arena* arena);
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

  typedef DocumentType_DocumentKind DocumentKind;
  static const DocumentKind TXT =
    DocumentType_DocumentKind_TXT;
  static const DocumentKind HTML =
    DocumentType_DocumentKind_HTML;
  static const DocumentKind PDF =
    DocumentType_DocumentKind_PDF;
  static const DocumentKind MARKDOWN =
    DocumentType_DocumentKind_MARKDOWN;
  static inline bool DocumentKind_IsValid(int value) {
    return DocumentType_DocumentKind_IsValid(value);
  }
  static const DocumentKind DocumentKind_MIN =
    DocumentType_DocumentKind_DocumentKind_MIN;
  static const DocumentKind DocumentKind_MAX =
    DocumentType_DocumentKind_DocumentKind_MAX;
  static const int DocumentKind_ARRAYSIZE =
    DocumentType_DocumentKind_DocumentKind_ARRAYSIZE;
  static inline const ::google::protobuf::EnumDescriptor*
  DocumentKind_descriptor() {
    return DocumentType_DocumentKind_descriptor();
  }
  static inline const ::std::string& DocumentKind_Name(DocumentKind value) {
    return DocumentType_DocumentKind_Name(value);
  }
  static inline bool DocumentKind_Parse(const ::std::string& name,
      DocumentKind* value) {
    return DocumentType_DocumentKind_Parse(name, value);
  }

  // accessors -------------------------------------------------------

  // .DocumentType.DocumentKind kind = 1;
  void clear_kind();
  static const int kKindFieldNumber = 1;
  ::DocumentType_DocumentKind kind() const;
  void set_kind(::DocumentType_DocumentKind value);

  // bool compressed = 2;
  void clear_compressed();
  static const int kCompressedFieldNumber = 2;
  bool compressed() const;
  void set_compressed(bool value);

  // @@protoc_insertion_point(class_scope:DocumentType)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  template <typename T> friend class ::google::protobuf::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  int kind_;
  bool compressed_;
  mutable int _cached_size_;
  friend struct protobuf_media_2fMediaType_2eproto::TableStruct;
};
// -------------------------------------------------------------------

class VideoType : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:VideoType) */ {
 public:
  VideoType();
  virtual ~VideoType();

  VideoType(const VideoType& from);

  inline VideoType& operator=(const VideoType& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  VideoType(VideoType&& from) noexcept
    : VideoType() {
    *this = ::std::move(from);
  }

  inline VideoType& operator=(VideoType&& from) noexcept {
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
  static const VideoType& default_instance();

  static inline const VideoType* internal_default_instance() {
    return reinterpret_cast<const VideoType*>(
               &_VideoType_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    3;

  void UnsafeArenaSwap(VideoType* other);
  void Swap(VideoType* other);
  friend void swap(VideoType& a, VideoType& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline VideoType* New() const PROTOBUF_FINAL { return New(NULL); }

  VideoType* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const VideoType& from);
  void MergeFrom(const VideoType& from);
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
  void InternalSwap(VideoType* other);
  protected:
  explicit VideoType(::google::protobuf::Arena* arena);
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

  typedef VideoType_VideoKind VideoKind;
  static const VideoKind MP4 =
    VideoType_VideoKind_MP4;
  static const VideoKind FLV =
    VideoType_VideoKind_FLV;
  static const VideoKind HLS =
    VideoType_VideoKind_HLS;
  static inline bool VideoKind_IsValid(int value) {
    return VideoType_VideoKind_IsValid(value);
  }
  static const VideoKind VideoKind_MIN =
    VideoType_VideoKind_VideoKind_MIN;
  static const VideoKind VideoKind_MAX =
    VideoType_VideoKind_VideoKind_MAX;
  static const int VideoKind_ARRAYSIZE =
    VideoType_VideoKind_VideoKind_ARRAYSIZE;
  static inline const ::google::protobuf::EnumDescriptor*
  VideoKind_descriptor() {
    return VideoType_VideoKind_descriptor();
  }
  static inline const ::std::string& VideoKind_Name(VideoKind value) {
    return VideoType_VideoKind_Name(value);
  }
  static inline bool VideoKind_Parse(const ::std::string& name,
      VideoKind* value) {
    return VideoType_VideoKind_Parse(name, value);
  }

  // accessors -------------------------------------------------------

  // .VideoType.VideoKind kind = 1;
  void clear_kind();
  static const int kKindFieldNumber = 1;
  ::VideoType_VideoKind kind() const;
  void set_kind(::VideoType_VideoKind value);

  // @@protoc_insertion_point(class_scope:VideoType)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  template <typename T> friend class ::google::protobuf::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  int kind_;
  mutable int _cached_size_;
  friend struct protobuf_media_2fMediaType_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// MediaType

// .MediaType.Kind kind = 1;
inline void MediaType::clear_kind() {
  kind_ = 0;
}
inline ::MediaType_Kind MediaType::kind() const {
  // @@protoc_insertion_point(field_get:MediaType.kind)
  return static_cast< ::MediaType_Kind >(kind_);
}
inline void MediaType::set_kind(::MediaType_Kind value) {
  
  kind_ = value;
  // @@protoc_insertion_point(field_set:MediaType.kind)
}

// .ImageType image_type = 101;
inline bool MediaType::has_image_type() const {
  return this != internal_default_instance() && image_type_ != NULL;
}
inline void MediaType::clear_image_type() {
  if (GetArenaNoVirtual() == NULL && image_type_ != NULL) delete image_type_;
  image_type_ = NULL;
}
inline const ::ImageType& MediaType::image_type() const {
  const ::ImageType* p = image_type_;
  // @@protoc_insertion_point(field_get:MediaType.image_type)
  return p != NULL ? *p : *reinterpret_cast<const ::ImageType*>(
      &::_ImageType_default_instance_);
}
inline ::ImageType* MediaType::mutable_image_type() {
  
  if (image_type_ == NULL) {
    _slow_mutable_image_type();
  }
  // @@protoc_insertion_point(field_mutable:MediaType.image_type)
  return image_type_;
}
inline ::ImageType* MediaType::release_image_type() {
  // @@protoc_insertion_point(field_release:MediaType.image_type)
  
  if (GetArenaNoVirtual() != NULL) {
    return _slow_release_image_type();
  } else {
    ::ImageType* temp = image_type_;
    image_type_ = NULL;
    return temp;
  }
}
inline  void MediaType::set_allocated_image_type(::ImageType* image_type) {
  ::google::protobuf::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == NULL) {
    delete image_type_;
  }
  if (image_type != NULL) {
    _slow_set_allocated_image_type(message_arena, &image_type);
  }
  image_type_ = image_type;
  if (image_type) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_set_allocated:MediaType.image_type)
}

// .DocumentType document_type = 201;
inline bool MediaType::has_document_type() const {
  return this != internal_default_instance() && document_type_ != NULL;
}
inline void MediaType::clear_document_type() {
  if (GetArenaNoVirtual() == NULL && document_type_ != NULL) delete document_type_;
  document_type_ = NULL;
}
inline const ::DocumentType& MediaType::document_type() const {
  const ::DocumentType* p = document_type_;
  // @@protoc_insertion_point(field_get:MediaType.document_type)
  return p != NULL ? *p : *reinterpret_cast<const ::DocumentType*>(
      &::_DocumentType_default_instance_);
}
inline ::DocumentType* MediaType::mutable_document_type() {
  
  if (document_type_ == NULL) {
    _slow_mutable_document_type();
  }
  // @@protoc_insertion_point(field_mutable:MediaType.document_type)
  return document_type_;
}
inline ::DocumentType* MediaType::release_document_type() {
  // @@protoc_insertion_point(field_release:MediaType.document_type)
  
  if (GetArenaNoVirtual() != NULL) {
    return _slow_release_document_type();
  } else {
    ::DocumentType* temp = document_type_;
    document_type_ = NULL;
    return temp;
  }
}
inline  void MediaType::set_allocated_document_type(::DocumentType* document_type) {
  ::google::protobuf::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == NULL) {
    delete document_type_;
  }
  if (document_type != NULL) {
    _slow_set_allocated_document_type(message_arena, &document_type);
  }
  document_type_ = document_type;
  if (document_type) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_set_allocated:MediaType.document_type)
}

// .VideoType video_type = 301;
inline bool MediaType::has_video_type() const {
  return this != internal_default_instance() && video_type_ != NULL;
}
inline void MediaType::clear_video_type() {
  if (GetArenaNoVirtual() == NULL && video_type_ != NULL) delete video_type_;
  video_type_ = NULL;
}
inline const ::VideoType& MediaType::video_type() const {
  const ::VideoType* p = video_type_;
  // @@protoc_insertion_point(field_get:MediaType.video_type)
  return p != NULL ? *p : *reinterpret_cast<const ::VideoType*>(
      &::_VideoType_default_instance_);
}
inline ::VideoType* MediaType::mutable_video_type() {
  
  if (video_type_ == NULL) {
    _slow_mutable_video_type();
  }
  // @@protoc_insertion_point(field_mutable:MediaType.video_type)
  return video_type_;
}
inline ::VideoType* MediaType::release_video_type() {
  // @@protoc_insertion_point(field_release:MediaType.video_type)
  
  if (GetArenaNoVirtual() != NULL) {
    return _slow_release_video_type();
  } else {
    ::VideoType* temp = video_type_;
    video_type_ = NULL;
    return temp;
  }
}
inline  void MediaType::set_allocated_video_type(::VideoType* video_type) {
  ::google::protobuf::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == NULL) {
    delete video_type_;
  }
  if (video_type != NULL) {
    _slow_set_allocated_video_type(message_arena, &video_type);
  }
  video_type_ = video_type;
  if (video_type) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_set_allocated:MediaType.video_type)
}

// -------------------------------------------------------------------

// ImageType

// .ImageType.ImageKind kind = 1;
inline void ImageType::clear_kind() {
  kind_ = 0;
}
inline ::ImageType_ImageKind ImageType::kind() const {
  // @@protoc_insertion_point(field_get:ImageType.kind)
  return static_cast< ::ImageType_ImageKind >(kind_);
}
inline void ImageType::set_kind(::ImageType_ImageKind value) {
  
  kind_ = value;
  // @@protoc_insertion_point(field_set:ImageType.kind)
}

// -------------------------------------------------------------------

// DocumentType

// .DocumentType.DocumentKind kind = 1;
inline void DocumentType::clear_kind() {
  kind_ = 0;
}
inline ::DocumentType_DocumentKind DocumentType::kind() const {
  // @@protoc_insertion_point(field_get:DocumentType.kind)
  return static_cast< ::DocumentType_DocumentKind >(kind_);
}
inline void DocumentType::set_kind(::DocumentType_DocumentKind value) {
  
  kind_ = value;
  // @@protoc_insertion_point(field_set:DocumentType.kind)
}

// bool compressed = 2;
inline void DocumentType::clear_compressed() {
  compressed_ = false;
}
inline bool DocumentType::compressed() const {
  // @@protoc_insertion_point(field_get:DocumentType.compressed)
  return compressed_;
}
inline void DocumentType::set_compressed(bool value) {
  
  compressed_ = value;
  // @@protoc_insertion_point(field_set:DocumentType.compressed)
}

// -------------------------------------------------------------------

// VideoType

// .VideoType.VideoKind kind = 1;
inline void VideoType::clear_kind() {
  kind_ = 0;
}
inline ::VideoType_VideoKind VideoType::kind() const {
  // @@protoc_insertion_point(field_get:VideoType.kind)
  return static_cast< ::VideoType_VideoKind >(kind_);
}
inline void VideoType::set_kind(::VideoType_VideoKind value) {
  
  kind_ = value;
  // @@protoc_insertion_point(field_set:VideoType.kind)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS
// -------------------------------------------------------------------

// -------------------------------------------------------------------

// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)


namespace google {
namespace protobuf {

template <> struct is_proto_enum< ::MediaType_Kind> : ::google::protobuf::internal::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::MediaType_Kind>() {
  return ::MediaType_Kind_descriptor();
}
template <> struct is_proto_enum< ::ImageType_ImageKind> : ::google::protobuf::internal::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::ImageType_ImageKind>() {
  return ::ImageType_ImageKind_descriptor();
}
template <> struct is_proto_enum< ::DocumentType_DocumentKind> : ::google::protobuf::internal::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::DocumentType_DocumentKind>() {
  return ::DocumentType_DocumentKind_descriptor();
}
template <> struct is_proto_enum< ::VideoType_VideoKind> : ::google::protobuf::internal::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::VideoType_VideoKind>() {
  return ::VideoType_VideoKind_descriptor();
}

}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_media_2fMediaType_2eproto__INCLUDED
