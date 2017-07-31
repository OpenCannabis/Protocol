// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: structs/pricing/PricingDescriptor.proto

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

@class FreebiePricingDescriptor;
@class PricingDescriptor;
@class PricingTierAvailability;
@class SaleDescriptor;
@class UnitPricingDescriptor;
@class WeightedPricingDescriptor;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - Enum PricingType

/** -- Pricing: Objects */
typedef GPB_ENUM(PricingType) {
  /**
   * Value used if any message's field encounters a value that is not defined
   * by this enum. The message will also have C functions to get/set the rawValue
   * of the field.
   **/
  PricingType_GPBUnrecognizedEnumeratorValue = kGPBUnrecognizedEnumeratorValue,
  PricingType_Unit = 0,
  PricingType_Weighted = 1,
  PricingType_Freebie = 2,
};

GPBEnumDescriptor *PricingType_EnumDescriptor(void);

/**
 * Checks to see if the given value is defined by the enum or was not known at
 * the time this source was generated.
 **/
BOOL PricingType_IsValidValue(int32_t value);

#pragma mark - Enum PricingWeightTier

typedef GPB_ENUM(PricingWeightTier) {
  /**
   * Value used if any message's field encounters a value that is not defined
   * by this enum. The message will also have C functions to get/set the rawValue
   * of the field.
   **/
  PricingWeightTier_GPBUnrecognizedEnumeratorValue = kGPBUnrecognizedEnumeratorValue,
  PricingWeightTier_Other = 0,
  PricingWeightTier_Gram = 1,
  PricingWeightTier_Halfgram = 2,
  PricingWeightTier_Quartergram = 3,
  PricingWeightTier_Dub = 4,
  PricingWeightTier_Eighth = 5,
  PricingWeightTier_Quarter = 6,
  PricingWeightTier_Half = 7,
  PricingWeightTier_Ounce = 8,
  PricingWeightTier_Pound = 9,
};

GPBEnumDescriptor *PricingWeightTier_EnumDescriptor(void);

/**
 * Checks to see if the given value is defined by the enum or was not known at
 * the time this source was generated.
 **/
BOOL PricingWeightTier_IsValidValue(int32_t value);

#pragma mark - PricingDescriptorRoot

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
@interface PricingDescriptorRoot : GPBRootObject
@end

#pragma mark - PricingTierAvailability

typedef GPB_ENUM(PricingTierAvailability_FieldNumber) {
  PricingTierAvailability_FieldNumber_Offered = 1,
  PricingTierAvailability_FieldNumber_Available = 2,
};

@interface PricingTierAvailability : GPBMessage

@property(nonatomic, readwrite) BOOL offered;

@property(nonatomic, readwrite) BOOL available;

@end

#pragma mark - UnitPricingDescriptor

typedef GPB_ENUM(UnitPricingDescriptor_FieldNumber) {
  UnitPricingDescriptor_FieldNumber_PriceValue = 1,
  UnitPricingDescriptor_FieldNumber_Status = 2,
  UnitPricingDescriptor_FieldNumber_DiscountsArray = 3,
};

/**
 * -- Pricing: Typed Descriptors
 **/
@interface UnitPricingDescriptor : GPBMessage

@property(nonatomic, readwrite) float priceValue;

@property(nonatomic, readwrite, strong, null_resettable) PricingTierAvailability *status;
/** Test to see if @c status has been set. */
@property(nonatomic, readwrite) BOOL hasStatus;

@property(nonatomic, readwrite, strong, null_resettable) NSMutableArray<SaleDescriptor*> *discountsArray;
/** The number of items in @c discountsArray without causing the array to be created. */
@property(nonatomic, readonly) NSUInteger discountsArray_Count;

@end

#pragma mark - WeightedPricingDescriptor

typedef GPB_ENUM(WeightedPricingDescriptor_FieldNumber) {
  WeightedPricingDescriptor_FieldNumber_Weight = 1,
  WeightedPricingDescriptor_FieldNumber_Tier = 2,
  WeightedPricingDescriptor_FieldNumber_WeightInGrams = 3,
};

@interface WeightedPricingDescriptor : GPBMessage

@property(nonatomic, readwrite) PricingWeightTier weight;

@property(nonatomic, readwrite, strong, null_resettable) UnitPricingDescriptor *tier;
/** Test to see if @c tier has been set. */
@property(nonatomic, readwrite) BOOL hasTier;

@property(nonatomic, readwrite) float weightInGrams;

@end

/**
 * Fetches the raw value of a @c WeightedPricingDescriptor's @c weight property, even
 * if the value was not defined by the enum at the time the code was generated.
 **/
int32_t WeightedPricingDescriptor_Weight_RawValue(WeightedPricingDescriptor *message);
/**
 * Sets the raw value of an @c WeightedPricingDescriptor's @c weight property, allowing
 * it to be set to a value that was not defined by the enum at the time the code
 * was generated.
 **/
void SetWeightedPricingDescriptor_Weight_RawValue(WeightedPricingDescriptor *message, int32_t value);

#pragma mark - FreebiePricingDescriptor

@interface FreebiePricingDescriptor : GPBMessage

@end

#pragma mark - PricingDescriptor

typedef GPB_ENUM(PricingDescriptor_FieldNumber) {
  PricingDescriptor_FieldNumber_Type = 1,
  PricingDescriptor_FieldNumber_Unit = 20,
  PricingDescriptor_FieldNumber_Weighted = 21,
  PricingDescriptor_FieldNumber_Freebie = 22,
};

/**
 * -- Pricing: Main Descriptor
 **/
@interface PricingDescriptor : GPBMessage

@property(nonatomic, readwrite) PricingType type;

/** -- descriptors */
@property(nonatomic, readwrite, strong, null_resettable) UnitPricingDescriptor *unit;
/** Test to see if @c unit has been set. */
@property(nonatomic, readwrite) BOOL hasUnit;

@property(nonatomic, readwrite, strong, null_resettable) WeightedPricingDescriptor *weighted;
/** Test to see if @c weighted has been set. */
@property(nonatomic, readwrite) BOOL hasWeighted;

@property(nonatomic, readwrite, strong, null_resettable) FreebiePricingDescriptor *freebie;
/** Test to see if @c freebie has been set. */
@property(nonatomic, readwrite) BOOL hasFreebie;

@end

/**
 * Fetches the raw value of a @c PricingDescriptor's @c type property, even
 * if the value was not defined by the enum at the time the code was generated.
 **/
int32_t PricingDescriptor_Type_RawValue(PricingDescriptor *message);
/**
 * Sets the raw value of an @c PricingDescriptor's @c type property, allowing
 * it to be set to a value that was not defined by the enum at the time the code
 * was generated.
 **/
void SetPricingDescriptor_Type_RawValue(PricingDescriptor *message, int32_t value);

#pragma mark - ProductPricing

typedef GPB_ENUM(ProductPricing_FieldNumber) {
  ProductPricing_FieldNumber_DiscountsArray = 1,
  ProductPricing_FieldNumber_ManifestArray = 2,
};

/**
 * -- Pricing: Product-level Object
 **/
@interface ProductPricing : GPBMessage

@property(nonatomic, readwrite, strong, null_resettable) NSMutableArray<SaleDescriptor*> *discountsArray;
/** The number of items in @c discountsArray without causing the array to be created. */
@property(nonatomic, readonly) NSUInteger discountsArray_Count;

@property(nonatomic, readwrite, strong, null_resettable) NSMutableArray<PricingDescriptor*> *manifestArray;
/** The number of items in @c manifestArray without causing the array to be created. */
@property(nonatomic, readonly) NSUInteger manifestArray_Count;

@end

NS_ASSUME_NONNULL_END

CF_EXTERN_C_END

#pragma clang diagnostic pop

// @@protoc_insertion_point(global_scope)
