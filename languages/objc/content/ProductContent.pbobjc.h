// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: content/ProductContent.proto

// This CPP symbol can be defined to use imports that match up to the framework
// imports needed when using CocoaPods.
#if !defined(GPB_USE_PROTOBUF_FRAMEWORK_IMPORTS)
 #define GPB_USE_PROTOBUF_FRAMEWORK_IMPORTS 0
#endif

#if GPB_USE_PROTOBUF_FRAMEWORK_IMPORTS
 #import <Protobuf/GPBProtocolBuffers.h>
#else
 #import "GPBProtocolBuffers.h"
#endif

#if GOOGLE_PROTOBUF_OBJC_VERSION < 30002
#error This file was generated by a newer version of protoc which is incompatible with your Protocol Buffer library sources.
#endif
#if 30002 < GOOGLE_PROTOBUF_OBJC_MIN_SUPPORTED_VERSION
#error This file was generated by an older version of protoc which is incompatible with your Protocol Buffer library sources.
#endif

// @@protoc_insertion_point(imports)

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

CF_EXTERN_C_BEGIN

@class Brand;
@class Content;
@class MediaItem;
@class Name;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - ProductContentRoot

/**
 * Exposes the extension registry for this file.
 *
 * The base class provides:
 * @code
 *   + (GPBExtensionRegistry *)extensionRegistry;
 * @endcode
 * which is a @c GPBExtensionRegistry that includes all the extensions defined by
 * this file and all files that it depends on.
 **/
@interface ProductContentRoot : GPBRootObject
@end

#pragma mark - ProductContent

typedef GPB_ENUM(ProductContent_FieldNumber) {
  ProductContent_FieldNumber_Name = 1,
  ProductContent_FieldNumber_Summary = 2,
  ProductContent_FieldNumber_Brand = 3,
  ProductContent_FieldNumber_MediaArray = 20,
  ProductContent_FieldNumber_Usage = 30,
  ProductContent_FieldNumber_Dosage = 31,
  ProductContent_FieldNumber_Advice = 32,
};

@interface ProductContent : GPBMessage

/** -- Basic Properties */
@property(nonatomic, readwrite, strong, null_resettable) Name *name;
/** Test to see if @c name has been set. */
@property(nonatomic, readwrite) BOOL hasName;

/** narrative summary */
@property(nonatomic, readwrite, strong, null_resettable) Content *summary;
/** Test to see if @c summary has been set. */
@property(nonatomic, readwrite) BOOL hasSummary;

/** product's brand */
@property(nonatomic, readwrite, strong, null_resettable) Brand *brand;
/** Test to see if @c brand has been set. */
@property(nonatomic, readwrite) BOOL hasBrand;

/** -- Media */
@property(nonatomic, readwrite, strong, null_resettable) NSMutableArray<MediaItem*> *mediaArray;
/** The number of items in @c mediaArray without causing the array to be created. */
@property(nonatomic, readonly) NSUInteger mediaArray_Count;

/** -- Extended Attributes */
@property(nonatomic, readwrite, strong, null_resettable) Content *usage;
/** Test to see if @c usage has been set. */
@property(nonatomic, readwrite) BOOL hasUsage;

/** dosage advice */
@property(nonatomic, readwrite, strong, null_resettable) Content *dosage;
/** Test to see if @c dosage has been set. */
@property(nonatomic, readwrite) BOOL hasDosage;

/** internal advice */
@property(nonatomic, readwrite, strong, null_resettable) Content *advice;
/** Test to see if @c advice has been set. */
@property(nonatomic, readwrite) BOOL hasAdvice;

@end

NS_ASSUME_NONNULL_END

CF_EXTERN_C_END

#pragma clang diagnostic pop

// @@protoc_insertion_point(global_scope)
