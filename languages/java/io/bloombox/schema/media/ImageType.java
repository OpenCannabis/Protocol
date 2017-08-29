// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: media/MediaType.proto

package io.bloombox.schema.media;

/**
 * <pre>
 * -- Media Type: Images -- //
 * </pre>
 *
 * Protobuf type {@code ImageType}
 */
public  final class ImageType extends
    com.google.protobuf.GeneratedMessageV3 implements
    // @@protoc_insertion_point(message_implements:ImageType)
    ImageTypeOrBuilder {
private static final long serialVersionUID = 0L;
  // Use ImageType.newBuilder() to construct.
  private ImageType(com.google.protobuf.GeneratedMessageV3.Builder<?> builder) {
    super(builder);
  }
  private ImageType() {
    kind_ = 0;
  }

  @java.lang.Override
  public final com.google.protobuf.UnknownFieldSet
  getUnknownFields() {
    return this.unknownFields;
  }
  private ImageType(
      com.google.protobuf.CodedInputStream input,
      com.google.protobuf.ExtensionRegistryLite extensionRegistry)
      throws com.google.protobuf.InvalidProtocolBufferException {
    this();
    int mutable_bitField0_ = 0;
    com.google.protobuf.UnknownFieldSet.Builder unknownFields =
        com.google.protobuf.UnknownFieldSet.newBuilder();
    try {
      boolean done = false;
      while (!done) {
        int tag = input.readTag();
        switch (tag) {
          case 0:
            done = true;
            break;
          default: {
            if (!parseUnknownFieldProto3(
                input, unknownFields, extensionRegistry, tag)) {
              done = true;
            }
            break;
          }
          case 8: {
            int rawValue = input.readEnum();

            kind_ = rawValue;
            break;
          }
        }
      }
    } catch (com.google.protobuf.InvalidProtocolBufferException e) {
      throw e.setUnfinishedMessage(this);
    } catch (java.io.IOException e) {
      throw new com.google.protobuf.InvalidProtocolBufferException(
          e).setUnfinishedMessage(this);
    } finally {
      this.unknownFields = unknownFields.build();
      makeExtensionsImmutable();
    }
  }
  public static final com.google.protobuf.Descriptors.Descriptor
      getDescriptor() {
    return io.bloombox.schema.media.MediaItemType.internal_static_ImageType_descriptor;
  }

  protected com.google.protobuf.GeneratedMessageV3.FieldAccessorTable
      internalGetFieldAccessorTable() {
    return io.bloombox.schema.media.MediaItemType.internal_static_ImageType_fieldAccessorTable
        .ensureFieldAccessorsInitialized(
            io.bloombox.schema.media.ImageType.class, io.bloombox.schema.media.ImageType.Builder.class);
  }

  /**
   * Protobuf enum {@code ImageType.ImageKind}
   */
  public enum ImageKind
      implements com.google.protobuf.ProtocolMessageEnum {
    /**
     * <code>PNG = 0;</code>
     */
    PNG(0),
    /**
     * <code>JPG = 1;</code>
     */
    JPG(1),
    /**
     * <code>GIF = 2;</code>
     */
    GIF(2),
    /**
     * <code>SVG = 3;</code>
     */
    SVG(3),
    /**
     * <code>WEBP = 4;</code>
     */
    WEBP(4),
    UNRECOGNIZED(-1),
    ;

    /**
     * <code>PNG = 0;</code>
     */
    public static final int PNG_VALUE = 0;
    /**
     * <code>JPG = 1;</code>
     */
    public static final int JPG_VALUE = 1;
    /**
     * <code>GIF = 2;</code>
     */
    public static final int GIF_VALUE = 2;
    /**
     * <code>SVG = 3;</code>
     */
    public static final int SVG_VALUE = 3;
    /**
     * <code>WEBP = 4;</code>
     */
    public static final int WEBP_VALUE = 4;


    public final int getNumber() {
      if (this == UNRECOGNIZED) {
        throw new java.lang.IllegalArgumentException(
            "Can't get the number of an unknown enum value.");
      }
      return value;
    }

    /**
     * @deprecated Use {@link #forNumber(int)} instead.
     */
    @java.lang.Deprecated
    public static ImageKind valueOf(int value) {
      return forNumber(value);
    }

    public static ImageKind forNumber(int value) {
      switch (value) {
        case 0: return PNG;
        case 1: return JPG;
        case 2: return GIF;
        case 3: return SVG;
        case 4: return WEBP;
        default: return null;
      }
    }

    public static com.google.protobuf.Internal.EnumLiteMap<ImageKind>
        internalGetValueMap() {
      return internalValueMap;
    }
    private static final com.google.protobuf.Internal.EnumLiteMap<
        ImageKind> internalValueMap =
          new com.google.protobuf.Internal.EnumLiteMap<ImageKind>() {
            public ImageKind findValueByNumber(int number) {
              return ImageKind.forNumber(number);
            }
          };

    public final com.google.protobuf.Descriptors.EnumValueDescriptor
        getValueDescriptor() {
      return getDescriptor().getValues().get(ordinal());
    }
    public final com.google.protobuf.Descriptors.EnumDescriptor
        getDescriptorForType() {
      return getDescriptor();
    }
    public static final com.google.protobuf.Descriptors.EnumDescriptor
        getDescriptor() {
      return io.bloombox.schema.media.ImageType.getDescriptor().getEnumTypes().get(0);
    }

    private static final ImageKind[] VALUES = values();

    public static ImageKind valueOf(
        com.google.protobuf.Descriptors.EnumValueDescriptor desc) {
      if (desc.getType() != getDescriptor()) {
        throw new java.lang.IllegalArgumentException(
          "EnumValueDescriptor is not for this type.");
      }
      if (desc.getIndex() == -1) {
        return UNRECOGNIZED;
      }
      return VALUES[desc.getIndex()];
    }

    private final int value;

    private ImageKind(int value) {
      this.value = value;
    }

    // @@protoc_insertion_point(enum_scope:ImageType.ImageKind)
  }

  public static final int KIND_FIELD_NUMBER = 1;
  private int kind_;
  /**
   * <code>.ImageType.ImageKind kind = 1;</code>
   */
  public int getKindValue() {
    return kind_;
  }
  /**
   * <code>.ImageType.ImageKind kind = 1;</code>
   */
  public io.bloombox.schema.media.ImageType.ImageKind getKind() {
    io.bloombox.schema.media.ImageType.ImageKind result = io.bloombox.schema.media.ImageType.ImageKind.valueOf(kind_);
    return result == null ? io.bloombox.schema.media.ImageType.ImageKind.UNRECOGNIZED : result;
  }

  private byte memoizedIsInitialized = -1;
  public final boolean isInitialized() {
    byte isInitialized = memoizedIsInitialized;
    if (isInitialized == 1) return true;
    if (isInitialized == 0) return false;

    memoizedIsInitialized = 1;
    return true;
  }

  public void writeTo(com.google.protobuf.CodedOutputStream output)
                      throws java.io.IOException {
    if (kind_ != io.bloombox.schema.media.ImageType.ImageKind.PNG.getNumber()) {
      output.writeEnum(1, kind_);
    }
    unknownFields.writeTo(output);
  }

  public int getSerializedSize() {
    int size = memoizedSize;
    if (size != -1) return size;

    size = 0;
    if (kind_ != io.bloombox.schema.media.ImageType.ImageKind.PNG.getNumber()) {
      size += com.google.protobuf.CodedOutputStream
        .computeEnumSize(1, kind_);
    }
    size += unknownFields.getSerializedSize();
    memoizedSize = size;
    return size;
  }

  @java.lang.Override
  public boolean equals(final java.lang.Object obj) {
    if (obj == this) {
     return true;
    }
    if (!(obj instanceof io.bloombox.schema.media.ImageType)) {
      return super.equals(obj);
    }
    io.bloombox.schema.media.ImageType other = (io.bloombox.schema.media.ImageType) obj;

    boolean result = true;
    result = result && kind_ == other.kind_;
    result = result && unknownFields.equals(other.unknownFields);
    return result;
  }

  @java.lang.Override
  public int hashCode() {
    if (memoizedHashCode != 0) {
      return memoizedHashCode;
    }
    int hash = 41;
    hash = (19 * hash) + getDescriptor().hashCode();
    hash = (37 * hash) + KIND_FIELD_NUMBER;
    hash = (53 * hash) + kind_;
    hash = (29 * hash) + unknownFields.hashCode();
    memoizedHashCode = hash;
    return hash;
  }

  public static io.bloombox.schema.media.ImageType parseFrom(
      java.nio.ByteBuffer data)
      throws com.google.protobuf.InvalidProtocolBufferException {
    return PARSER.parseFrom(data);
  }
  public static io.bloombox.schema.media.ImageType parseFrom(
      java.nio.ByteBuffer data,
      com.google.protobuf.ExtensionRegistryLite extensionRegistry)
      throws com.google.protobuf.InvalidProtocolBufferException {
    return PARSER.parseFrom(data, extensionRegistry);
  }
  public static io.bloombox.schema.media.ImageType parseFrom(
      com.google.protobuf.ByteString data)
      throws com.google.protobuf.InvalidProtocolBufferException {
    return PARSER.parseFrom(data);
  }
  public static io.bloombox.schema.media.ImageType parseFrom(
      com.google.protobuf.ByteString data,
      com.google.protobuf.ExtensionRegistryLite extensionRegistry)
      throws com.google.protobuf.InvalidProtocolBufferException {
    return PARSER.parseFrom(data, extensionRegistry);
  }
  public static io.bloombox.schema.media.ImageType parseFrom(byte[] data)
      throws com.google.protobuf.InvalidProtocolBufferException {
    return PARSER.parseFrom(data);
  }
  public static io.bloombox.schema.media.ImageType parseFrom(
      byte[] data,
      com.google.protobuf.ExtensionRegistryLite extensionRegistry)
      throws com.google.protobuf.InvalidProtocolBufferException {
    return PARSER.parseFrom(data, extensionRegistry);
  }
  public static io.bloombox.schema.media.ImageType parseFrom(java.io.InputStream input)
      throws java.io.IOException {
    return com.google.protobuf.GeneratedMessageV3
        .parseWithIOException(PARSER, input);
  }
  public static io.bloombox.schema.media.ImageType parseFrom(
      java.io.InputStream input,
      com.google.protobuf.ExtensionRegistryLite extensionRegistry)
      throws java.io.IOException {
    return com.google.protobuf.GeneratedMessageV3
        .parseWithIOException(PARSER, input, extensionRegistry);
  }
  public static io.bloombox.schema.media.ImageType parseDelimitedFrom(java.io.InputStream input)
      throws java.io.IOException {
    return com.google.protobuf.GeneratedMessageV3
        .parseDelimitedWithIOException(PARSER, input);
  }
  public static io.bloombox.schema.media.ImageType parseDelimitedFrom(
      java.io.InputStream input,
      com.google.protobuf.ExtensionRegistryLite extensionRegistry)
      throws java.io.IOException {
    return com.google.protobuf.GeneratedMessageV3
        .parseDelimitedWithIOException(PARSER, input, extensionRegistry);
  }
  public static io.bloombox.schema.media.ImageType parseFrom(
      com.google.protobuf.CodedInputStream input)
      throws java.io.IOException {
    return com.google.protobuf.GeneratedMessageV3
        .parseWithIOException(PARSER, input);
  }
  public static io.bloombox.schema.media.ImageType parseFrom(
      com.google.protobuf.CodedInputStream input,
      com.google.protobuf.ExtensionRegistryLite extensionRegistry)
      throws java.io.IOException {
    return com.google.protobuf.GeneratedMessageV3
        .parseWithIOException(PARSER, input, extensionRegistry);
  }

  public Builder newBuilderForType() { return newBuilder(); }
  public static Builder newBuilder() {
    return DEFAULT_INSTANCE.toBuilder();
  }
  public static Builder newBuilder(io.bloombox.schema.media.ImageType prototype) {
    return DEFAULT_INSTANCE.toBuilder().mergeFrom(prototype);
  }
  public Builder toBuilder() {
    return this == DEFAULT_INSTANCE
        ? new Builder() : new Builder().mergeFrom(this);
  }

  @java.lang.Override
  protected Builder newBuilderForType(
      com.google.protobuf.GeneratedMessageV3.BuilderParent parent) {
    Builder builder = new Builder(parent);
    return builder;
  }
  /**
   * <pre>
   * -- Media Type: Images -- //
   * </pre>
   *
   * Protobuf type {@code ImageType}
   */
  public static final class Builder extends
      com.google.protobuf.GeneratedMessageV3.Builder<Builder> implements
      // @@protoc_insertion_point(builder_implements:ImageType)
      io.bloombox.schema.media.ImageTypeOrBuilder {
    public static final com.google.protobuf.Descriptors.Descriptor
        getDescriptor() {
      return io.bloombox.schema.media.MediaItemType.internal_static_ImageType_descriptor;
    }

    protected com.google.protobuf.GeneratedMessageV3.FieldAccessorTable
        internalGetFieldAccessorTable() {
      return io.bloombox.schema.media.MediaItemType.internal_static_ImageType_fieldAccessorTable
          .ensureFieldAccessorsInitialized(
              io.bloombox.schema.media.ImageType.class, io.bloombox.schema.media.ImageType.Builder.class);
    }

    // Construct using io.bloombox.schema.media.ImageType.newBuilder()
    private Builder() {
      maybeForceBuilderInitialization();
    }

    private Builder(
        com.google.protobuf.GeneratedMessageV3.BuilderParent parent) {
      super(parent);
      maybeForceBuilderInitialization();
    }
    private void maybeForceBuilderInitialization() {
      if (com.google.protobuf.GeneratedMessageV3
              .alwaysUseFieldBuilders) {
      }
    }
    public Builder clear() {
      super.clear();
      kind_ = 0;

      return this;
    }

    public com.google.protobuf.Descriptors.Descriptor
        getDescriptorForType() {
      return io.bloombox.schema.media.MediaItemType.internal_static_ImageType_descriptor;
    }

    public io.bloombox.schema.media.ImageType getDefaultInstanceForType() {
      return io.bloombox.schema.media.ImageType.getDefaultInstance();
    }

    public io.bloombox.schema.media.ImageType build() {
      io.bloombox.schema.media.ImageType result = buildPartial();
      if (!result.isInitialized()) {
        throw newUninitializedMessageException(result);
      }
      return result;
    }

    public io.bloombox.schema.media.ImageType buildPartial() {
      io.bloombox.schema.media.ImageType result = new io.bloombox.schema.media.ImageType(this);
      result.kind_ = kind_;
      onBuilt();
      return result;
    }

    public Builder clone() {
      return (Builder) super.clone();
    }
    public Builder setField(
        com.google.protobuf.Descriptors.FieldDescriptor field,
        java.lang.Object value) {
      return (Builder) super.setField(field, value);
    }
    public Builder clearField(
        com.google.protobuf.Descriptors.FieldDescriptor field) {
      return (Builder) super.clearField(field);
    }
    public Builder clearOneof(
        com.google.protobuf.Descriptors.OneofDescriptor oneof) {
      return (Builder) super.clearOneof(oneof);
    }
    public Builder setRepeatedField(
        com.google.protobuf.Descriptors.FieldDescriptor field,
        int index, java.lang.Object value) {
      return (Builder) super.setRepeatedField(field, index, value);
    }
    public Builder addRepeatedField(
        com.google.protobuf.Descriptors.FieldDescriptor field,
        java.lang.Object value) {
      return (Builder) super.addRepeatedField(field, value);
    }
    public Builder mergeFrom(com.google.protobuf.Message other) {
      if (other instanceof io.bloombox.schema.media.ImageType) {
        return mergeFrom((io.bloombox.schema.media.ImageType)other);
      } else {
        super.mergeFrom(other);
        return this;
      }
    }

    public Builder mergeFrom(io.bloombox.schema.media.ImageType other) {
      if (other == io.bloombox.schema.media.ImageType.getDefaultInstance()) return this;
      if (other.kind_ != 0) {
        setKindValue(other.getKindValue());
      }
      this.mergeUnknownFields(other.unknownFields);
      onChanged();
      return this;
    }

    public final boolean isInitialized() {
      return true;
    }

    public Builder mergeFrom(
        com.google.protobuf.CodedInputStream input,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws java.io.IOException {
      io.bloombox.schema.media.ImageType parsedMessage = null;
      try {
        parsedMessage = PARSER.parsePartialFrom(input, extensionRegistry);
      } catch (com.google.protobuf.InvalidProtocolBufferException e) {
        parsedMessage = (io.bloombox.schema.media.ImageType) e.getUnfinishedMessage();
        throw e.unwrapIOException();
      } finally {
        if (parsedMessage != null) {
          mergeFrom(parsedMessage);
        }
      }
      return this;
    }

    private int kind_ = 0;
    /**
     * <code>.ImageType.ImageKind kind = 1;</code>
     */
    public int getKindValue() {
      return kind_;
    }
    /**
     * <code>.ImageType.ImageKind kind = 1;</code>
     */
    public Builder setKindValue(int value) {
      kind_ = value;
      onChanged();
      return this;
    }
    /**
     * <code>.ImageType.ImageKind kind = 1;</code>
     */
    public io.bloombox.schema.media.ImageType.ImageKind getKind() {
      io.bloombox.schema.media.ImageType.ImageKind result = io.bloombox.schema.media.ImageType.ImageKind.valueOf(kind_);
      return result == null ? io.bloombox.schema.media.ImageType.ImageKind.UNRECOGNIZED : result;
    }
    /**
     * <code>.ImageType.ImageKind kind = 1;</code>
     */
    public Builder setKind(io.bloombox.schema.media.ImageType.ImageKind value) {
      if (value == null) {
        throw new NullPointerException();
      }
      
      kind_ = value.getNumber();
      onChanged();
      return this;
    }
    /**
     * <code>.ImageType.ImageKind kind = 1;</code>
     */
    public Builder clearKind() {
      
      kind_ = 0;
      onChanged();
      return this;
    }
    public final Builder setUnknownFields(
        final com.google.protobuf.UnknownFieldSet unknownFields) {
      return super.setUnknownFieldsProto3(unknownFields);
    }

    public final Builder mergeUnknownFields(
        final com.google.protobuf.UnknownFieldSet unknownFields) {
      return super.mergeUnknownFields(unknownFields);
    }


    // @@protoc_insertion_point(builder_scope:ImageType)
  }

  // @@protoc_insertion_point(class_scope:ImageType)
  private static final io.bloombox.schema.media.ImageType DEFAULT_INSTANCE;
  static {
    DEFAULT_INSTANCE = new io.bloombox.schema.media.ImageType();
  }

  public static io.bloombox.schema.media.ImageType getDefaultInstance() {
    return DEFAULT_INSTANCE;
  }

  private static final com.google.protobuf.Parser<ImageType>
      PARSER = new com.google.protobuf.AbstractParser<ImageType>() {
    public ImageType parsePartialFrom(
        com.google.protobuf.CodedInputStream input,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws com.google.protobuf.InvalidProtocolBufferException {
        return new ImageType(input, extensionRegistry);
    }
  };

  public static com.google.protobuf.Parser<ImageType> parser() {
    return PARSER;
  }

  @java.lang.Override
  public com.google.protobuf.Parser<ImageType> getParserForType() {
    return PARSER;
  }

  public io.bloombox.schema.media.ImageType getDefaultInstanceForType() {
    return DEFAULT_INSTANCE;
  }

}

