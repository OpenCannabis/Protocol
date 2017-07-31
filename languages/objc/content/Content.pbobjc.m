// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: content/Content.proto

// This CPP symbol can be defined to use imports that match up to the framework
// imports needed when using CocoaPods.
#if !defined(GPB_USE_PROTOBUF_FRAMEWORK_IMPORTS)
 #define GPB_USE_PROTOBUF_FRAMEWORK_IMPORTS 0
#endif

#if GPB_USE_PROTOBUF_FRAMEWORK_IMPORTS
 #import <Protobuf/GPBProtocolBuffers_RuntimeSupport.h>
#else
 #import "GPBProtocolBuffers_RuntimeSupport.h"
#endif

 #import "content/Content.pbobjc.h"
 #import "base/Language.pbobjc.h"
 #import "base/Compression.pbobjc.h"
// @@protoc_insertion_point(imports)

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

#pragma mark - ContentRoot

@implementation ContentRoot

// No extensions in the file and none of the imports (direct or indirect)
// defined extensions, so no need to generate +extensionRegistry.

@end

#pragma mark - ContentRoot_FileDescriptor

static GPBFileDescriptor *ContentRoot_FileDescriptor(void) {
  // This is called by +initialize so there is no need to worry
  // about thread safety of the singleton.
  static GPBFileDescriptor *descriptor = NULL;
  if (!descriptor) {
    GPB_DEBUG_CHECK_RUNTIME_VERSIONS();
    descriptor = [[GPBFileDescriptor alloc] initWithPackage:@""
                                                     syntax:GPBFileSyntaxProto3];
  }
  return descriptor;
}

#pragma mark - Content

@implementation Content

@dynamic type;
@dynamic encoding;
@dynamic content;
@dynamic language;
@dynamic hasCompression, compression;

typedef struct Content__storage_ {
  uint32_t _has_storage_[1];
  Content_Type type;
  Content_Encoding encoding;
  Language language;
  NSData *content;
  Compression *compression;
} Content__storage_;

// This method is threadsafe because it is initially called
// in +initialize for each subclass.
+ (GPBDescriptor *)descriptor {
  static GPBDescriptor *descriptor = nil;
  if (!descriptor) {
    static GPBMessageFieldDescription fields[] = {
      {
        .name = "type",
        .dataTypeSpecific.enumDescFunc = Content_Type_EnumDescriptor,
        .number = Content_FieldNumber_Type,
        .hasIndex = 0,
        .offset = (uint32_t)offsetof(Content__storage_, type),
        .flags = (GPBFieldFlags)(GPBFieldOptional | GPBFieldHasEnumDescriptor),
        .dataType = GPBDataTypeEnum,
      },
      {
        .name = "encoding",
        .dataTypeSpecific.enumDescFunc = Content_Encoding_EnumDescriptor,
        .number = Content_FieldNumber_Encoding,
        .hasIndex = 1,
        .offset = (uint32_t)offsetof(Content__storage_, encoding),
        .flags = (GPBFieldFlags)(GPBFieldOptional | GPBFieldHasEnumDescriptor),
        .dataType = GPBDataTypeEnum,
      },
      {
        .name = "content",
        .dataTypeSpecific.className = NULL,
        .number = Content_FieldNumber_Content,
        .hasIndex = 2,
        .offset = (uint32_t)offsetof(Content__storage_, content),
        .flags = GPBFieldOptional,
        .dataType = GPBDataTypeBytes,
      },
      {
        .name = "language",
        .dataTypeSpecific.enumDescFunc = Language_EnumDescriptor,
        .number = Content_FieldNumber_Language,
        .hasIndex = 3,
        .offset = (uint32_t)offsetof(Content__storage_, language),
        .flags = (GPBFieldFlags)(GPBFieldOptional | GPBFieldHasEnumDescriptor),
        .dataType = GPBDataTypeEnum,
      },
      {
        .name = "compression",
        .dataTypeSpecific.className = GPBStringifySymbol(Compression),
        .number = Content_FieldNumber_Compression,
        .hasIndex = 4,
        .offset = (uint32_t)offsetof(Content__storage_, compression),
        .flags = GPBFieldOptional,
        .dataType = GPBDataTypeMessage,
      },
    };
    GPBDescriptor *localDescriptor =
        [GPBDescriptor allocDescriptorForClass:[Content class]
                                     rootClass:[ContentRoot class]
                                          file:ContentRoot_FileDescriptor()
                                        fields:fields
                                    fieldCount:(uint32_t)(sizeof(fields) / sizeof(GPBMessageFieldDescription))
                                   storageSize:sizeof(Content__storage_)
                                         flags:GPBDescriptorInitializationFlag_None];
    NSAssert(descriptor == nil, @"Startup recursed!");
    descriptor = localDescriptor;
  }
  return descriptor;
}

@end

int32_t Content_Type_RawValue(Content *message) {
  GPBDescriptor *descriptor = [Content descriptor];
  GPBFieldDescriptor *field = [descriptor fieldWithNumber:Content_FieldNumber_Type];
  return GPBGetMessageInt32Field(message, field);
}

void SetContent_Type_RawValue(Content *message, int32_t value) {
  GPBDescriptor *descriptor = [Content descriptor];
  GPBFieldDescriptor *field = [descriptor fieldWithNumber:Content_FieldNumber_Type];
  GPBSetInt32IvarWithFieldInternal(message, field, value, descriptor.file.syntax);
}

int32_t Content_Encoding_RawValue(Content *message) {
  GPBDescriptor *descriptor = [Content descriptor];
  GPBFieldDescriptor *field = [descriptor fieldWithNumber:Content_FieldNumber_Encoding];
  return GPBGetMessageInt32Field(message, field);
}

void SetContent_Encoding_RawValue(Content *message, int32_t value) {
  GPBDescriptor *descriptor = [Content descriptor];
  GPBFieldDescriptor *field = [descriptor fieldWithNumber:Content_FieldNumber_Encoding];
  GPBSetInt32IvarWithFieldInternal(message, field, value, descriptor.file.syntax);
}

int32_t Content_Language_RawValue(Content *message) {
  GPBDescriptor *descriptor = [Content descriptor];
  GPBFieldDescriptor *field = [descriptor fieldWithNumber:Content_FieldNumber_Language];
  return GPBGetMessageInt32Field(message, field);
}

void SetContent_Language_RawValue(Content *message, int32_t value) {
  GPBDescriptor *descriptor = [Content descriptor];
  GPBFieldDescriptor *field = [descriptor fieldWithNumber:Content_FieldNumber_Language];
  GPBSetInt32IvarWithFieldInternal(message, field, value, descriptor.file.syntax);
}

#pragma mark - Enum Content_Type

GPBEnumDescriptor *Content_Type_EnumDescriptor(void) {
  static GPBEnumDescriptor *descriptor = NULL;
  if (!descriptor) {
    static const char *valueNames =
        "Text\000Markdown\000Html\000";
    static const int32_t values[] = {
        Content_Type_Text,
        Content_Type_Markdown,
        Content_Type_Html,
    };
    GPBEnumDescriptor *worker =
        [GPBEnumDescriptor allocDescriptorForName:GPBNSStringifySymbol(Content_Type)
                                       valueNames:valueNames
                                           values:values
                                            count:(uint32_t)(sizeof(values) / sizeof(int32_t))
                                     enumVerifier:Content_Type_IsValidValue];
    if (!OSAtomicCompareAndSwapPtrBarrier(nil, worker, (void * volatile *)&descriptor)) {
      [worker release];
    }
  }
  return descriptor;
}

BOOL Content_Type_IsValidValue(int32_t value__) {
  switch (value__) {
    case Content_Type_Text:
    case Content_Type_Markdown:
    case Content_Type_Html:
      return YES;
    default:
      return NO;
  }
}

#pragma mark - Enum Content_Encoding

GPBEnumDescriptor *Content_Encoding_EnumDescriptor(void) {
  static GPBEnumDescriptor *descriptor = NULL;
  if (!descriptor) {
    static const char *valueNames =
        "Utf8\000";
    static const int32_t values[] = {
        Content_Encoding_Utf8,
    };
    GPBEnumDescriptor *worker =
        [GPBEnumDescriptor allocDescriptorForName:GPBNSStringifySymbol(Content_Encoding)
                                       valueNames:valueNames
                                           values:values
                                            count:(uint32_t)(sizeof(values) / sizeof(int32_t))
                                     enumVerifier:Content_Encoding_IsValidValue];
    if (!OSAtomicCompareAndSwapPtrBarrier(nil, worker, (void * volatile *)&descriptor)) {
      [worker release];
    }
  }
  return descriptor;
}

BOOL Content_Encoding_IsValidValue(int32_t value__) {
  switch (value__) {
    case Content_Encoding_Utf8:
      return YES;
    default:
      return NO;
  }
}


#pragma clang diagnostic pop

// @@protoc_insertion_point(global_scope)
