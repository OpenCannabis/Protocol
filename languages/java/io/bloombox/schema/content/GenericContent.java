// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: content/Content.proto

package io.bloombox.schema.content;

public final class GenericContent {
  private GenericContent() {}
  public static void registerAllExtensions(
      com.google.protobuf.ExtensionRegistryLite registry) {
  }

  public static void registerAllExtensions(
      com.google.protobuf.ExtensionRegistry registry) {
    registerAllExtensions(
        (com.google.protobuf.ExtensionRegistryLite) registry);
  }
  static final com.google.protobuf.Descriptors.Descriptor
    internal_static_Content_descriptor;
  static final 
    com.google.protobuf.GeneratedMessageV3.FieldAccessorTable
      internal_static_Content_fieldAccessorTable;

  public static com.google.protobuf.Descriptors.FileDescriptor
      getDescriptor() {
    return descriptor;
  }
  private static  com.google.protobuf.Descriptors.FileDescriptor
      descriptor;
  static {
    java.lang.String[] descriptorData = {
      "\n\025content/Content.proto\032\023base/Language.p" +
      "roto\032\026base/Compression.proto\"\334\001\n\007Content" +
      "\022\033\n\004type\030\001 \001(\0162\r.Content.Type\022#\n\010encodin" +
      "g\030\002 \001(\0162\021.Content.Encoding\022\017\n\007content\030\003 " +
      "\001(\014\022\033\n\010language\030\004 \001(\0162\t.Language\022!\n\013comp" +
      "ression\030\005 \001(\0132\014.Compression\"(\n\004Type\022\010\n\004T" +
      "EXT\020\000\022\014\n\010MARKDOWN\020\001\022\010\n\004HTML\020\002\"\024\n\010Encodin" +
      "g\022\010\n\004UTF8\020\000B3\n\032io.bloombox.schema.conten" +
      "tB\016GenericContentH\001P\001\370\001\001b\006proto3"
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
          io.bloombox.schema.base.BaseLanguage.getDescriptor(),
          io.bloombox.schema.base.BaseCompression.getDescriptor(),
        }, assigner);
    internal_static_Content_descriptor =
      getDescriptor().getMessageTypes().get(0);
    internal_static_Content_fieldAccessorTable = new
      com.google.protobuf.GeneratedMessageV3.FieldAccessorTable(
        internal_static_Content_descriptor,
        new java.lang.String[] { "Type", "Encoding", "Content", "Language", "Compression", });
    io.bloombox.schema.base.BaseLanguage.getDescriptor();
    io.bloombox.schema.base.BaseCompression.getDescriptor();
  }

  // @@protoc_insertion_point(outer_class_scope)
}
