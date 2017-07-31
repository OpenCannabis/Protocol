// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: structs/pricing/SaleDescriptor.proto

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

 #import "structs/pricing/SaleDescriptor.pbobjc.h"
// @@protoc_insertion_point(imports)

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

#pragma mark - SaleDescriptorRoot

@implementation SaleDescriptorRoot

// No extensions in the file and no imports, so no need to generate
// +extensionRegistry.

@end

#pragma mark - SaleDescriptorRoot_FileDescriptor

static GPBFileDescriptor *SaleDescriptorRoot_FileDescriptor(void) {
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

#pragma mark - Enum SaleType

GPBEnumDescriptor *SaleType_EnumDescriptor(void) {
  static GPBEnumDescriptor *descriptor = NULL;
  if (!descriptor) {
    static const char *valueNames =
        "Percentage\000Bogo\000Loyalty\000";
    static const int32_t values[] = {
        SaleType_Percentage,
        SaleType_Bogo,
        SaleType_Loyalty,
    };
    GPBEnumDescriptor *worker =
        [GPBEnumDescriptor allocDescriptorForName:GPBNSStringifySymbol(SaleType)
                                       valueNames:valueNames
                                           values:values
                                            count:(uint32_t)(sizeof(values) / sizeof(int32_t))
                                     enumVerifier:SaleType_IsValidValue];
    if (!OSAtomicCompareAndSwapPtrBarrier(nil, worker, (void * volatile *)&descriptor)) {
      [worker release];
    }
  }
  return descriptor;
}

BOOL SaleType_IsValidValue(int32_t value__) {
  switch (value__) {
    case SaleType_Percentage:
    case SaleType_Bogo:
    case SaleType_Loyalty:
      return YES;
    default:
      return NO;
  }
}

#pragma mark - SaleDescriptor

@implementation SaleDescriptor

@dynamic type;
@dynamic effective;
@dynamic expiration;
@dynamic percentageAmount;
@dynamic bogoTrigger;
@dynamic bogoReward;
@dynamic loyaltyTrigger;
@dynamic loyaltyReward;

typedef struct SaleDescriptor__storage_ {
  uint32_t _has_storage_[1];
  SaleType type;
  uint32_t percentageAmount;
  uint32_t bogoTrigger;
  uint32_t bogoReward;
  uint32_t loyaltyTrigger;
  uint32_t loyaltyReward;
  uint64_t effective;
  uint64_t expiration;
} SaleDescriptor__storage_;

// This method is threadsafe because it is initially called
// in +initialize for each subclass.
+ (GPBDescriptor *)descriptor {
  static GPBDescriptor *descriptor = nil;
  if (!descriptor) {
    static GPBMessageFieldDescription fields[] = {
      {
        .name = "type",
        .dataTypeSpecific.enumDescFunc = SaleType_EnumDescriptor,
        .number = SaleDescriptor_FieldNumber_Type,
        .hasIndex = 0,
        .offset = (uint32_t)offsetof(SaleDescriptor__storage_, type),
        .flags = (GPBFieldFlags)(GPBFieldOptional | GPBFieldHasEnumDescriptor),
        .dataType = GPBDataTypeEnum,
      },
      {
        .name = "effective",
        .dataTypeSpecific.className = NULL,
        .number = SaleDescriptor_FieldNumber_Effective,
        .hasIndex = 1,
        .offset = (uint32_t)offsetof(SaleDescriptor__storage_, effective),
        .flags = GPBFieldOptional,
        .dataType = GPBDataTypeUInt64,
      },
      {
        .name = "expiration",
        .dataTypeSpecific.className = NULL,
        .number = SaleDescriptor_FieldNumber_Expiration,
        .hasIndex = 2,
        .offset = (uint32_t)offsetof(SaleDescriptor__storage_, expiration),
        .flags = GPBFieldOptional,
        .dataType = GPBDataTypeUInt64,
      },
      {
        .name = "percentageAmount",
        .dataTypeSpecific.className = NULL,
        .number = SaleDescriptor_FieldNumber_PercentageAmount,
        .hasIndex = 3,
        .offset = (uint32_t)offsetof(SaleDescriptor__storage_, percentageAmount),
        .flags = GPBFieldOptional,
        .dataType = GPBDataTypeUInt32,
      },
      {
        .name = "bogoTrigger",
        .dataTypeSpecific.className = NULL,
        .number = SaleDescriptor_FieldNumber_BogoTrigger,
        .hasIndex = 4,
        .offset = (uint32_t)offsetof(SaleDescriptor__storage_, bogoTrigger),
        .flags = GPBFieldOptional,
        .dataType = GPBDataTypeUInt32,
      },
      {
        .name = "bogoReward",
        .dataTypeSpecific.className = NULL,
        .number = SaleDescriptor_FieldNumber_BogoReward,
        .hasIndex = 5,
        .offset = (uint32_t)offsetof(SaleDescriptor__storage_, bogoReward),
        .flags = GPBFieldOptional,
        .dataType = GPBDataTypeUInt32,
      },
      {
        .name = "loyaltyTrigger",
        .dataTypeSpecific.className = NULL,
        .number = SaleDescriptor_FieldNumber_LoyaltyTrigger,
        .hasIndex = 6,
        .offset = (uint32_t)offsetof(SaleDescriptor__storage_, loyaltyTrigger),
        .flags = GPBFieldOptional,
        .dataType = GPBDataTypeUInt32,
      },
      {
        .name = "loyaltyReward",
        .dataTypeSpecific.className = NULL,
        .number = SaleDescriptor_FieldNumber_LoyaltyReward,
        .hasIndex = 7,
        .offset = (uint32_t)offsetof(SaleDescriptor__storage_, loyaltyReward),
        .flags = GPBFieldOptional,
        .dataType = GPBDataTypeUInt32,
      },
    };
    GPBDescriptor *localDescriptor =
        [GPBDescriptor allocDescriptorForClass:[SaleDescriptor class]
                                     rootClass:[SaleDescriptorRoot class]
                                          file:SaleDescriptorRoot_FileDescriptor()
                                        fields:fields
                                    fieldCount:(uint32_t)(sizeof(fields) / sizeof(GPBMessageFieldDescription))
                                   storageSize:sizeof(SaleDescriptor__storage_)
                                         flags:GPBDescriptorInitializationFlag_None];
    NSAssert(descriptor == nil, @"Startup recursed!");
    descriptor = localDescriptor;
  }
  return descriptor;
}

@end

int32_t SaleDescriptor_Type_RawValue(SaleDescriptor *message) {
  GPBDescriptor *descriptor = [SaleDescriptor descriptor];
  GPBFieldDescriptor *field = [descriptor fieldWithNumber:SaleDescriptor_FieldNumber_Type];
  return GPBGetMessageInt32Field(message, field);
}

void SetSaleDescriptor_Type_RawValue(SaleDescriptor *message, int32_t value) {
  GPBDescriptor *descriptor = [SaleDescriptor descriptor];
  GPBFieldDescriptor *field = [descriptor fieldWithNumber:SaleDescriptor_FieldNumber_Type];
  GPBSetInt32IvarWithFieldInternal(message, field, value, descriptor.file.syntax);
}


#pragma clang diagnostic pop

// @@protoc_insertion_point(global_scope)
