// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: base/ProductType.proto

package io.bloombox.schema.base;

public final class BaseProductType {
  private BaseProductType() {}
  public static void registerAllExtensions(
      com.google.protobuf.ExtensionRegistryLite registry) {
  }

  public static void registerAllExtensions(
      com.google.protobuf.ExtensionRegistry registry) {
    registerAllExtensions(
        (com.google.protobuf.ExtensionRegistryLite) registry);
  }
  static final com.google.protobuf.Descriptors.Descriptor
    internal_static_ProductType_descriptor;
  static final 
    com.google.protobuf.GeneratedMessageV3.FieldAccessorTable
      internal_static_ProductType_fieldAccessorTable;

  public static com.google.protobuf.Descriptors.FileDescriptor
      getDescriptor() {
    return descriptor;
  }
  private static  com.google.protobuf.Descriptors.FileDescriptor
      descriptor;
  static {
    java.lang.String[] descriptorData = {
      "\n\026base/ProductType.proto\032\026base/ProductKi" +
      "nd.proto\")\n\013ProductType\022\032\n\004kind\030\001 \001(\0162\014." +
      "ProductKindB,\n\027io.bloombox.schema.baseB\017" +
      "BaseProductTypeP\001b\006proto3"
    };
    com.google.protobuf.Descriptors.FileDescriptor.InternalDescriptorAssigner assigner =
        new com.google.protobuf.Descriptors.FileDescriptor.    InternalDescriptorAssigner() {
          public com.google.protobuf.ExtensionRegistry assignDescriptors(
              com.google.protobuf.Descriptors.FileDescriptor root) {
            descriptor = root;
            return null;
          }
        };
    com.google.protobuf.Descriptors.FileDescriptor
      .internalBuildGeneratedFileFrom(descriptorData,
        new com.google.protobuf.Descriptors.FileDescriptor[] {
          io.bloombox.schema.base.BaseProductKind.getDescriptor(),
        }, assigner);
    internal_static_ProductType_descriptor =
      getDescriptor().getMessageTypes().get(0);
    internal_static_ProductType_fieldAccessorTable = new
      com.google.protobuf.GeneratedMessageV3.FieldAccessorTable(
        internal_static_ProductType_descriptor,
        new java.lang.String[] { "Kind", });
    io.bloombox.schema.base.BaseProductKind.getDescriptor();
  }

  // @@protoc_insertion_point(outer_class_scope)
}
