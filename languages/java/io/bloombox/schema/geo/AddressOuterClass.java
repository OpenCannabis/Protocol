// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: geo/Address.proto

package io.bloombox.schema.geo;

public final class AddressOuterClass {
  private AddressOuterClass() {}
  public static void registerAllExtensions(
      com.google.protobuf.ExtensionRegistryLite registry) {
  }

  public static void registerAllExtensions(
      com.google.protobuf.ExtensionRegistry registry) {
    registerAllExtensions(
        (com.google.protobuf.ExtensionRegistryLite) registry);
  }
  static final com.google.protobuf.Descriptors.Descriptor
    internal_static_Address_descriptor;
  static final 
    com.google.protobuf.GeneratedMessageV3.FieldAccessorTable
      internal_static_Address_fieldAccessorTable;

  public static com.google.protobuf.Descriptors.FileDescriptor
      getDescriptor() {
    return descriptor;
  }
  private static  com.google.protobuf.Descriptors.FileDescriptor
      descriptor;
  static {
    java.lang.String[] descriptorData = {
      "\n\021geo/Address.proto\"q\n\007Address\022\022\n\nfirst_" +
      "line\030\001 \001(\t\022\023\n\013second_line\030\002 \001(\t\022\014\n\004city\030" +
      "\003 \001(\t\022\r\n\005state\030\004 \001(\t\022\017\n\007zipcode\030\005 \001(\t\022\017\n" +
      "\007country\030\006 \001(\tB\034\n\026io.bloombox.schema.geo" +
      "H\001P\001b\006proto3"
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
        }, assigner);
    internal_static_Address_descriptor =
      getDescriptor().getMessageTypes().get(0);
    internal_static_Address_fieldAccessorTable = new
      com.google.protobuf.GeneratedMessageV3.FieldAccessorTable(
        internal_static_Address_descriptor,
        new java.lang.String[] { "FirstLine", "SecondLine", "City", "State", "Zipcode", "Country", });
  }

  // @@protoc_insertion_point(outer_class_scope)
}
