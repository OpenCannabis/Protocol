// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: structs/pricing/PricingDescriptor.proto

package io.bloombox.schema.product.struct;

/**
 * <pre>
 * -- Pricing: Product-level Object
 * </pre>
 *
 * Protobuf type {@code ProductPricing}
 */
public  final class ProductPricing extends
    com.google.protobuf.GeneratedMessageV3 implements
    // @@protoc_insertion_point(message_implements:ProductPricing)
    ProductPricingOrBuilder {
private static final long serialVersionUID = 0L;
  // Use ProductPricing.newBuilder() to construct.
  private ProductPricing(com.google.protobuf.GeneratedMessageV3.Builder<?> builder) {
    super(builder);
  }
  private ProductPricing() {
    discounts_ = java.util.Collections.emptyList();
    manifest_ = java.util.Collections.emptyList();
  }

  @java.lang.Override
  public final com.google.protobuf.UnknownFieldSet
  getUnknownFields() {
    return this.unknownFields;
  }
  private ProductPricing(
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
          case 10: {
            if (!((mutable_bitField0_ & 0x00000001) == 0x00000001)) {
              discounts_ = new java.util.ArrayList<io.bloombox.schema.product.struct.SaleDescriptor>();
              mutable_bitField0_ |= 0x00000001;
            }
            discounts_.add(
                input.readMessage(io.bloombox.schema.product.struct.SaleDescriptor.parser(), extensionRegistry));
            break;
          }
          case 18: {
            if (!((mutable_bitField0_ & 0x00000002) == 0x00000002)) {
              manifest_ = new java.util.ArrayList<io.bloombox.schema.product.struct.PricingDescriptor>();
              mutable_bitField0_ |= 0x00000002;
            }
            manifest_.add(
                input.readMessage(io.bloombox.schema.product.struct.PricingDescriptor.parser(), extensionRegistry));
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
      if (((mutable_bitField0_ & 0x00000001) == 0x00000001)) {
        discounts_ = java.util.Collections.unmodifiableList(discounts_);
      }
      if (((mutable_bitField0_ & 0x00000002) == 0x00000002)) {
        manifest_ = java.util.Collections.unmodifiableList(manifest_);
      }
      this.unknownFields = unknownFields.build();
      makeExtensionsImmutable();
    }
  }
  public static final com.google.protobuf.Descriptors.Descriptor
      getDescriptor() {
    return io.bloombox.schema.product.struct.ProductPricingSpec.internal_static_ProductPricing_descriptor;
  }

  protected com.google.protobuf.GeneratedMessageV3.FieldAccessorTable
      internalGetFieldAccessorTable() {
    return io.bloombox.schema.product.struct.ProductPricingSpec.internal_static_ProductPricing_fieldAccessorTable
        .ensureFieldAccessorsInitialized(
            io.bloombox.schema.product.struct.ProductPricing.class, io.bloombox.schema.product.struct.ProductPricing.Builder.class);
  }

  public static final int DISCOUNTS_FIELD_NUMBER = 1;
  private java.util.List<io.bloombox.schema.product.struct.SaleDescriptor> discounts_;
  /**
   * <code>repeated .SaleDescriptor discounts = 1;</code>
   */
  public java.util.List<io.bloombox.schema.product.struct.SaleDescriptor> getDiscountsList() {
    return discounts_;
  }
  /**
   * <code>repeated .SaleDescriptor discounts = 1;</code>
   */
  public java.util.List<? extends io.bloombox.schema.product.struct.SaleDescriptorOrBuilder> 
      getDiscountsOrBuilderList() {
    return discounts_;
  }
  /**
   * <code>repeated .SaleDescriptor discounts = 1;</code>
   */
  public int getDiscountsCount() {
    return discounts_.size();
  }
  /**
   * <code>repeated .SaleDescriptor discounts = 1;</code>
   */
  public io.bloombox.schema.product.struct.SaleDescriptor getDiscounts(int index) {
    return discounts_.get(index);
  }
  /**
   * <code>repeated .SaleDescriptor discounts = 1;</code>
   */
  public io.bloombox.schema.product.struct.SaleDescriptorOrBuilder getDiscountsOrBuilder(
      int index) {
    return discounts_.get(index);
  }

  public static final int MANIFEST_FIELD_NUMBER = 2;
  private java.util.List<io.bloombox.schema.product.struct.PricingDescriptor> manifest_;
  /**
   * <code>repeated .PricingDescriptor manifest = 2;</code>
   */
  public java.util.List<io.bloombox.schema.product.struct.PricingDescriptor> getManifestList() {
    return manifest_;
  }
  /**
   * <code>repeated .PricingDescriptor manifest = 2;</code>
   */
  public java.util.List<? extends io.bloombox.schema.product.struct.PricingDescriptorOrBuilder> 
      getManifestOrBuilderList() {
    return manifest_;
  }
  /**
   * <code>repeated .PricingDescriptor manifest = 2;</code>
   */
  public int getManifestCount() {
    return manifest_.size();
  }
  /**
   * <code>repeated .PricingDescriptor manifest = 2;</code>
   */
  public io.bloombox.schema.product.struct.PricingDescriptor getManifest(int index) {
    return manifest_.get(index);
  }
  /**
   * <code>repeated .PricingDescriptor manifest = 2;</code>
   */
  public io.bloombox.schema.product.struct.PricingDescriptorOrBuilder getManifestOrBuilder(
      int index) {
    return manifest_.get(index);
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
    for (int i = 0; i < discounts_.size(); i++) {
      output.writeMessage(1, discounts_.get(i));
    }
    for (int i = 0; i < manifest_.size(); i++) {
      output.writeMessage(2, manifest_.get(i));
    }
    unknownFields.writeTo(output);
  }

  public int getSerializedSize() {
    int size = memoizedSize;
    if (size != -1) return size;

    size = 0;
    for (int i = 0; i < discounts_.size(); i++) {
      size += com.google.protobuf.CodedOutputStream
        .computeMessageSize(1, discounts_.get(i));
    }
    for (int i = 0; i < manifest_.size(); i++) {
      size += com.google.protobuf.CodedOutputStream
        .computeMessageSize(2, manifest_.get(i));
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
    if (!(obj instanceof io.bloombox.schema.product.struct.ProductPricing)) {
      return super.equals(obj);
    }
    io.bloombox.schema.product.struct.ProductPricing other = (io.bloombox.schema.product.struct.ProductPricing) obj;

    boolean result = true;
    result = result && getDiscountsList()
        .equals(other.getDiscountsList());
    result = result && getManifestList()
        .equals(other.getManifestList());
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
    if (getDiscountsCount() > 0) {
      hash = (37 * hash) + DISCOUNTS_FIELD_NUMBER;
      hash = (53 * hash) + getDiscountsList().hashCode();
    }
    if (getManifestCount() > 0) {
      hash = (37 * hash) + MANIFEST_FIELD_NUMBER;
      hash = (53 * hash) + getManifestList().hashCode();
    }
    hash = (29 * hash) + unknownFields.hashCode();
    memoizedHashCode = hash;
    return hash;
  }

  public static io.bloombox.schema.product.struct.ProductPricing parseFrom(
      java.nio.ByteBuffer data)
      throws com.google.protobuf.InvalidProtocolBufferException {
    return PARSER.parseFrom(data);
  }
  public static io.bloombox.schema.product.struct.ProductPricing parseFrom(
      java.nio.ByteBuffer data,
      com.google.protobuf.ExtensionRegistryLite extensionRegistry)
      throws com.google.protobuf.InvalidProtocolBufferException {
    return PARSER.parseFrom(data, extensionRegistry);
  }
  public static io.bloombox.schema.product.struct.ProductPricing parseFrom(
      com.google.protobuf.ByteString data)
      throws com.google.protobuf.InvalidProtocolBufferException {
    return PARSER.parseFrom(data);
  }
  public static io.bloombox.schema.product.struct.ProductPricing parseFrom(
      com.google.protobuf.ByteString data,
      com.google.protobuf.ExtensionRegistryLite extensionRegistry)
      throws com.google.protobuf.InvalidProtocolBufferException {
    return PARSER.parseFrom(data, extensionRegistry);
  }
  public static io.bloombox.schema.product.struct.ProductPricing parseFrom(byte[] data)
      throws com.google.protobuf.InvalidProtocolBufferException {
    return PARSER.parseFrom(data);
  }
  public static io.bloombox.schema.product.struct.ProductPricing parseFrom(
      byte[] data,
      com.google.protobuf.ExtensionRegistryLite extensionRegistry)
      throws com.google.protobuf.InvalidProtocolBufferException {
    return PARSER.parseFrom(data, extensionRegistry);
  }
  public static io.bloombox.schema.product.struct.ProductPricing parseFrom(java.io.InputStream input)
      throws java.io.IOException {
    return com.google.protobuf.GeneratedMessageV3
        .parseWithIOException(PARSER, input);
  }
  public static io.bloombox.schema.product.struct.ProductPricing parseFrom(
      java.io.InputStream input,
      com.google.protobuf.ExtensionRegistryLite extensionRegistry)
      throws java.io.IOException {
    return com.google.protobuf.GeneratedMessageV3
        .parseWithIOException(PARSER, input, extensionRegistry);
  }
  public static io.bloombox.schema.product.struct.ProductPricing parseDelimitedFrom(java.io.InputStream input)
      throws java.io.IOException {
    return com.google.protobuf.GeneratedMessageV3
        .parseDelimitedWithIOException(PARSER, input);
  }
  public static io.bloombox.schema.product.struct.ProductPricing parseDelimitedFrom(
      java.io.InputStream input,
      com.google.protobuf.ExtensionRegistryLite extensionRegistry)
      throws java.io.IOException {
    return com.google.protobuf.GeneratedMessageV3
        .parseDelimitedWithIOException(PARSER, input, extensionRegistry);
  }
  public static io.bloombox.schema.product.struct.ProductPricing parseFrom(
      com.google.protobuf.CodedInputStream input)
      throws java.io.IOException {
    return com.google.protobuf.GeneratedMessageV3
        .parseWithIOException(PARSER, input);
  }
  public static io.bloombox.schema.product.struct.ProductPricing parseFrom(
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
  public static Builder newBuilder(io.bloombox.schema.product.struct.ProductPricing prototype) {
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
   * -- Pricing: Product-level Object
   * </pre>
   *
   * Protobuf type {@code ProductPricing}
   */
  public static final class Builder extends
      com.google.protobuf.GeneratedMessageV3.Builder<Builder> implements
      // @@protoc_insertion_point(builder_implements:ProductPricing)
      io.bloombox.schema.product.struct.ProductPricingOrBuilder {
    public static final com.google.protobuf.Descriptors.Descriptor
        getDescriptor() {
      return io.bloombox.schema.product.struct.ProductPricingSpec.internal_static_ProductPricing_descriptor;
    }

    protected com.google.protobuf.GeneratedMessageV3.FieldAccessorTable
        internalGetFieldAccessorTable() {
      return io.bloombox.schema.product.struct.ProductPricingSpec.internal_static_ProductPricing_fieldAccessorTable
          .ensureFieldAccessorsInitialized(
              io.bloombox.schema.product.struct.ProductPricing.class, io.bloombox.schema.product.struct.ProductPricing.Builder.class);
    }

    // Construct using io.bloombox.schema.product.struct.ProductPricing.newBuilder()
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
        getDiscountsFieldBuilder();
        getManifestFieldBuilder();
      }
    }
    public Builder clear() {
      super.clear();
      if (discountsBuilder_ == null) {
        discounts_ = java.util.Collections.emptyList();
        bitField0_ = (bitField0_ & ~0x00000001);
      } else {
        discountsBuilder_.clear();
      }
      if (manifestBuilder_ == null) {
        manifest_ = java.util.Collections.emptyList();
        bitField0_ = (bitField0_ & ~0x00000002);
      } else {
        manifestBuilder_.clear();
      }
      return this;
    }

    public com.google.protobuf.Descriptors.Descriptor
        getDescriptorForType() {
      return io.bloombox.schema.product.struct.ProductPricingSpec.internal_static_ProductPricing_descriptor;
    }

    public io.bloombox.schema.product.struct.ProductPricing getDefaultInstanceForType() {
      return io.bloombox.schema.product.struct.ProductPricing.getDefaultInstance();
    }

    public io.bloombox.schema.product.struct.ProductPricing build() {
      io.bloombox.schema.product.struct.ProductPricing result = buildPartial();
      if (!result.isInitialized()) {
        throw newUninitializedMessageException(result);
      }
      return result;
    }

    public io.bloombox.schema.product.struct.ProductPricing buildPartial() {
      io.bloombox.schema.product.struct.ProductPricing result = new io.bloombox.schema.product.struct.ProductPricing(this);
      int from_bitField0_ = bitField0_;
      if (discountsBuilder_ == null) {
        if (((bitField0_ & 0x00000001) == 0x00000001)) {
          discounts_ = java.util.Collections.unmodifiableList(discounts_);
          bitField0_ = (bitField0_ & ~0x00000001);
        }
        result.discounts_ = discounts_;
      } else {
        result.discounts_ = discountsBuilder_.build();
      }
      if (manifestBuilder_ == null) {
        if (((bitField0_ & 0x00000002) == 0x00000002)) {
          manifest_ = java.util.Collections.unmodifiableList(manifest_);
          bitField0_ = (bitField0_ & ~0x00000002);
        }
        result.manifest_ = manifest_;
      } else {
        result.manifest_ = manifestBuilder_.build();
      }
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
      if (other instanceof io.bloombox.schema.product.struct.ProductPricing) {
        return mergeFrom((io.bloombox.schema.product.struct.ProductPricing)other);
      } else {
        super.mergeFrom(other);
        return this;
      }
    }

    public Builder mergeFrom(io.bloombox.schema.product.struct.ProductPricing other) {
      if (other == io.bloombox.schema.product.struct.ProductPricing.getDefaultInstance()) return this;
      if (discountsBuilder_ == null) {
        if (!other.discounts_.isEmpty()) {
          if (discounts_.isEmpty()) {
            discounts_ = other.discounts_;
            bitField0_ = (bitField0_ & ~0x00000001);
          } else {
            ensureDiscountsIsMutable();
            discounts_.addAll(other.discounts_);
          }
          onChanged();
        }
      } else {
        if (!other.discounts_.isEmpty()) {
          if (discountsBuilder_.isEmpty()) {
            discountsBuilder_.dispose();
            discountsBuilder_ = null;
            discounts_ = other.discounts_;
            bitField0_ = (bitField0_ & ~0x00000001);
            discountsBuilder_ = 
              com.google.protobuf.GeneratedMessageV3.alwaysUseFieldBuilders ?
                 getDiscountsFieldBuilder() : null;
          } else {
            discountsBuilder_.addAllMessages(other.discounts_);
          }
        }
      }
      if (manifestBuilder_ == null) {
        if (!other.manifest_.isEmpty()) {
          if (manifest_.isEmpty()) {
            manifest_ = other.manifest_;
            bitField0_ = (bitField0_ & ~0x00000002);
          } else {
            ensureManifestIsMutable();
            manifest_.addAll(other.manifest_);
          }
          onChanged();
        }
      } else {
        if (!other.manifest_.isEmpty()) {
          if (manifestBuilder_.isEmpty()) {
            manifestBuilder_.dispose();
            manifestBuilder_ = null;
            manifest_ = other.manifest_;
            bitField0_ = (bitField0_ & ~0x00000002);
            manifestBuilder_ = 
              com.google.protobuf.GeneratedMessageV3.alwaysUseFieldBuilders ?
                 getManifestFieldBuilder() : null;
          } else {
            manifestBuilder_.addAllMessages(other.manifest_);
          }
        }
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
      io.bloombox.schema.product.struct.ProductPricing parsedMessage = null;
      try {
        parsedMessage = PARSER.parsePartialFrom(input, extensionRegistry);
      } catch (com.google.protobuf.InvalidProtocolBufferException e) {
        parsedMessage = (io.bloombox.schema.product.struct.ProductPricing) e.getUnfinishedMessage();
        throw e.unwrapIOException();
      } finally {
        if (parsedMessage != null) {
          mergeFrom(parsedMessage);
        }
      }
      return this;
    }
    private int bitField0_;

    private java.util.List<io.bloombox.schema.product.struct.SaleDescriptor> discounts_ =
      java.util.Collections.emptyList();
    private void ensureDiscountsIsMutable() {
      if (!((bitField0_ & 0x00000001) == 0x00000001)) {
        discounts_ = new java.util.ArrayList<io.bloombox.schema.product.struct.SaleDescriptor>(discounts_);
        bitField0_ |= 0x00000001;
       }
    }

    private com.google.protobuf.RepeatedFieldBuilderV3<
        io.bloombox.schema.product.struct.SaleDescriptor, io.bloombox.schema.product.struct.SaleDescriptor.Builder, io.bloombox.schema.product.struct.SaleDescriptorOrBuilder> discountsBuilder_;

    /**
     * <code>repeated .SaleDescriptor discounts = 1;</code>
     */
    public java.util.List<io.bloombox.schema.product.struct.SaleDescriptor> getDiscountsList() {
      if (discountsBuilder_ == null) {
        return java.util.Collections.unmodifiableList(discounts_);
      } else {
        return discountsBuilder_.getMessageList();
      }
    }
    /**
     * <code>repeated .SaleDescriptor discounts = 1;</code>
     */
    public int getDiscountsCount() {
      if (discountsBuilder_ == null) {
        return discounts_.size();
      } else {
        return discountsBuilder_.getCount();
      }
    }
    /**
     * <code>repeated .SaleDescriptor discounts = 1;</code>
     */
    public io.bloombox.schema.product.struct.SaleDescriptor getDiscounts(int index) {
      if (discountsBuilder_ == null) {
        return discounts_.get(index);
      } else {
        return discountsBuilder_.getMessage(index);
      }
    }
    /**
     * <code>repeated .SaleDescriptor discounts = 1;</code>
     */
    public Builder setDiscounts(
        int index, io.bloombox.schema.product.struct.SaleDescriptor value) {
      if (discountsBuilder_ == null) {
        if (value == null) {
          throw new NullPointerException();
        }
        ensureDiscountsIsMutable();
        discounts_.set(index, value);
        onChanged();
      } else {
        discountsBuilder_.setMessage(index, value);
      }
      return this;
    }
    /**
     * <code>repeated .SaleDescriptor discounts = 1;</code>
     */
    public Builder setDiscounts(
        int index, io.bloombox.schema.product.struct.SaleDescriptor.Builder builderForValue) {
      if (discountsBuilder_ == null) {
        ensureDiscountsIsMutable();
        discounts_.set(index, builderForValue.build());
        onChanged();
      } else {
        discountsBuilder_.setMessage(index, builderForValue.build());
      }
      return this;
    }
    /**
     * <code>repeated .SaleDescriptor discounts = 1;</code>
     */
    public Builder addDiscounts(io.bloombox.schema.product.struct.SaleDescriptor value) {
      if (discountsBuilder_ == null) {
        if (value == null) {
          throw new NullPointerException();
        }
        ensureDiscountsIsMutable();
        discounts_.add(value);
        onChanged();
      } else {
        discountsBuilder_.addMessage(value);
      }
      return this;
    }
    /**
     * <code>repeated .SaleDescriptor discounts = 1;</code>
     */
    public Builder addDiscounts(
        int index, io.bloombox.schema.product.struct.SaleDescriptor value) {
      if (discountsBuilder_ == null) {
        if (value == null) {
          throw new NullPointerException();
        }
        ensureDiscountsIsMutable();
        discounts_.add(index, value);
        onChanged();
      } else {
        discountsBuilder_.addMessage(index, value);
      }
      return this;
    }
    /**
     * <code>repeated .SaleDescriptor discounts = 1;</code>
     */
    public Builder addDiscounts(
        io.bloombox.schema.product.struct.SaleDescriptor.Builder builderForValue) {
      if (discountsBuilder_ == null) {
        ensureDiscountsIsMutable();
        discounts_.add(builderForValue.build());
        onChanged();
      } else {
        discountsBuilder_.addMessage(builderForValue.build());
      }
      return this;
    }
    /**
     * <code>repeated .SaleDescriptor discounts = 1;</code>
     */
    public Builder addDiscounts(
        int index, io.bloombox.schema.product.struct.SaleDescriptor.Builder builderForValue) {
      if (discountsBuilder_ == null) {
        ensureDiscountsIsMutable();
        discounts_.add(index, builderForValue.build());
        onChanged();
      } else {
        discountsBuilder_.addMessage(index, builderForValue.build());
      }
      return this;
    }
    /**
     * <code>repeated .SaleDescriptor discounts = 1;</code>
     */
    public Builder addAllDiscounts(
        java.lang.Iterable<? extends io.bloombox.schema.product.struct.SaleDescriptor> values) {
      if (discountsBuilder_ == null) {
        ensureDiscountsIsMutable();
        com.google.protobuf.AbstractMessageLite.Builder.addAll(
            values, discounts_);
        onChanged();
      } else {
        discountsBuilder_.addAllMessages(values);
      }
      return this;
    }
    /**
     * <code>repeated .SaleDescriptor discounts = 1;</code>
     */
    public Builder clearDiscounts() {
      if (discountsBuilder_ == null) {
        discounts_ = java.util.Collections.emptyList();
        bitField0_ = (bitField0_ & ~0x00000001);
        onChanged();
      } else {
        discountsBuilder_.clear();
      }
      return this;
    }
    /**
     * <code>repeated .SaleDescriptor discounts = 1;</code>
     */
    public Builder removeDiscounts(int index) {
      if (discountsBuilder_ == null) {
        ensureDiscountsIsMutable();
        discounts_.remove(index);
        onChanged();
      } else {
        discountsBuilder_.remove(index);
      }
      return this;
    }
    /**
     * <code>repeated .SaleDescriptor discounts = 1;</code>
     */
    public io.bloombox.schema.product.struct.SaleDescriptor.Builder getDiscountsBuilder(
        int index) {
      return getDiscountsFieldBuilder().getBuilder(index);
    }
    /**
     * <code>repeated .SaleDescriptor discounts = 1;</code>
     */
    public io.bloombox.schema.product.struct.SaleDescriptorOrBuilder getDiscountsOrBuilder(
        int index) {
      if (discountsBuilder_ == null) {
        return discounts_.get(index);  } else {
        return discountsBuilder_.getMessageOrBuilder(index);
      }
    }
    /**
     * <code>repeated .SaleDescriptor discounts = 1;</code>
     */
    public java.util.List<? extends io.bloombox.schema.product.struct.SaleDescriptorOrBuilder> 
         getDiscountsOrBuilderList() {
      if (discountsBuilder_ != null) {
        return discountsBuilder_.getMessageOrBuilderList();
      } else {
        return java.util.Collections.unmodifiableList(discounts_);
      }
    }
    /**
     * <code>repeated .SaleDescriptor discounts = 1;</code>
     */
    public io.bloombox.schema.product.struct.SaleDescriptor.Builder addDiscountsBuilder() {
      return getDiscountsFieldBuilder().addBuilder(
          io.bloombox.schema.product.struct.SaleDescriptor.getDefaultInstance());
    }
    /**
     * <code>repeated .SaleDescriptor discounts = 1;</code>
     */
    public io.bloombox.schema.product.struct.SaleDescriptor.Builder addDiscountsBuilder(
        int index) {
      return getDiscountsFieldBuilder().addBuilder(
          index, io.bloombox.schema.product.struct.SaleDescriptor.getDefaultInstance());
    }
    /**
     * <code>repeated .SaleDescriptor discounts = 1;</code>
     */
    public java.util.List<io.bloombox.schema.product.struct.SaleDescriptor.Builder> 
         getDiscountsBuilderList() {
      return getDiscountsFieldBuilder().getBuilderList();
    }
    private com.google.protobuf.RepeatedFieldBuilderV3<
        io.bloombox.schema.product.struct.SaleDescriptor, io.bloombox.schema.product.struct.SaleDescriptor.Builder, io.bloombox.schema.product.struct.SaleDescriptorOrBuilder> 
        getDiscountsFieldBuilder() {
      if (discountsBuilder_ == null) {
        discountsBuilder_ = new com.google.protobuf.RepeatedFieldBuilderV3<
            io.bloombox.schema.product.struct.SaleDescriptor, io.bloombox.schema.product.struct.SaleDescriptor.Builder, io.bloombox.schema.product.struct.SaleDescriptorOrBuilder>(
                discounts_,
                ((bitField0_ & 0x00000001) == 0x00000001),
                getParentForChildren(),
                isClean());
        discounts_ = null;
      }
      return discountsBuilder_;
    }

    private java.util.List<io.bloombox.schema.product.struct.PricingDescriptor> manifest_ =
      java.util.Collections.emptyList();
    private void ensureManifestIsMutable() {
      if (!((bitField0_ & 0x00000002) == 0x00000002)) {
        manifest_ = new java.util.ArrayList<io.bloombox.schema.product.struct.PricingDescriptor>(manifest_);
        bitField0_ |= 0x00000002;
       }
    }

    private com.google.protobuf.RepeatedFieldBuilderV3<
        io.bloombox.schema.product.struct.PricingDescriptor, io.bloombox.schema.product.struct.PricingDescriptor.Builder, io.bloombox.schema.product.struct.PricingDescriptorOrBuilder> manifestBuilder_;

    /**
     * <code>repeated .PricingDescriptor manifest = 2;</code>
     */
    public java.util.List<io.bloombox.schema.product.struct.PricingDescriptor> getManifestList() {
      if (manifestBuilder_ == null) {
        return java.util.Collections.unmodifiableList(manifest_);
      } else {
        return manifestBuilder_.getMessageList();
      }
    }
    /**
     * <code>repeated .PricingDescriptor manifest = 2;</code>
     */
    public int getManifestCount() {
      if (manifestBuilder_ == null) {
        return manifest_.size();
      } else {
        return manifestBuilder_.getCount();
      }
    }
    /**
     * <code>repeated .PricingDescriptor manifest = 2;</code>
     */
    public io.bloombox.schema.product.struct.PricingDescriptor getManifest(int index) {
      if (manifestBuilder_ == null) {
        return manifest_.get(index);
      } else {
        return manifestBuilder_.getMessage(index);
      }
    }
    /**
     * <code>repeated .PricingDescriptor manifest = 2;</code>
     */
    public Builder setManifest(
        int index, io.bloombox.schema.product.struct.PricingDescriptor value) {
      if (manifestBuilder_ == null) {
        if (value == null) {
          throw new NullPointerException();
        }
        ensureManifestIsMutable();
        manifest_.set(index, value);
        onChanged();
      } else {
        manifestBuilder_.setMessage(index, value);
      }
      return this;
    }
    /**
     * <code>repeated .PricingDescriptor manifest = 2;</code>
     */
    public Builder setManifest(
        int index, io.bloombox.schema.product.struct.PricingDescriptor.Builder builderForValue) {
      if (manifestBuilder_ == null) {
        ensureManifestIsMutable();
        manifest_.set(index, builderForValue.build());
        onChanged();
      } else {
        manifestBuilder_.setMessage(index, builderForValue.build());
      }
      return this;
    }
    /**
     * <code>repeated .PricingDescriptor manifest = 2;</code>
     */
    public Builder addManifest(io.bloombox.schema.product.struct.PricingDescriptor value) {
      if (manifestBuilder_ == null) {
        if (value == null) {
          throw new NullPointerException();
        }
        ensureManifestIsMutable();
        manifest_.add(value);
        onChanged();
      } else {
        manifestBuilder_.addMessage(value);
      }
      return this;
    }
    /**
     * <code>repeated .PricingDescriptor manifest = 2;</code>
     */
    public Builder addManifest(
        int index, io.bloombox.schema.product.struct.PricingDescriptor value) {
      if (manifestBuilder_ == null) {
        if (value == null) {
          throw new NullPointerException();
        }
        ensureManifestIsMutable();
        manifest_.add(index, value);
        onChanged();
      } else {
        manifestBuilder_.addMessage(index, value);
      }
      return this;
    }
    /**
     * <code>repeated .PricingDescriptor manifest = 2;</code>
     */
    public Builder addManifest(
        io.bloombox.schema.product.struct.PricingDescriptor.Builder builderForValue) {
      if (manifestBuilder_ == null) {
        ensureManifestIsMutable();
        manifest_.add(builderForValue.build());
        onChanged();
      } else {
        manifestBuilder_.addMessage(builderForValue.build());
      }
      return this;
    }
    /**
     * <code>repeated .PricingDescriptor manifest = 2;</code>
     */
    public Builder addManifest(
        int index, io.bloombox.schema.product.struct.PricingDescriptor.Builder builderForValue) {
      if (manifestBuilder_ == null) {
        ensureManifestIsMutable();
        manifest_.add(index, builderForValue.build());
        onChanged();
      } else {
        manifestBuilder_.addMessage(index, builderForValue.build());
      }
      return this;
    }
    /**
     * <code>repeated .PricingDescriptor manifest = 2;</code>
     */
    public Builder addAllManifest(
        java.lang.Iterable<? extends io.bloombox.schema.product.struct.PricingDescriptor> values) {
      if (manifestBuilder_ == null) {
        ensureManifestIsMutable();
        com.google.protobuf.AbstractMessageLite.Builder.addAll(
            values, manifest_);
        onChanged();
      } else {
        manifestBuilder_.addAllMessages(values);
      }
      return this;
    }
    /**
     * <code>repeated .PricingDescriptor manifest = 2;</code>
     */
    public Builder clearManifest() {
      if (manifestBuilder_ == null) {
        manifest_ = java.util.Collections.emptyList();
        bitField0_ = (bitField0_ & ~0x00000002);
        onChanged();
      } else {
        manifestBuilder_.clear();
      }
      return this;
    }
    /**
     * <code>repeated .PricingDescriptor manifest = 2;</code>
     */
    public Builder removeManifest(int index) {
      if (manifestBuilder_ == null) {
        ensureManifestIsMutable();
        manifest_.remove(index);
        onChanged();
      } else {
        manifestBuilder_.remove(index);
      }
      return this;
    }
    /**
     * <code>repeated .PricingDescriptor manifest = 2;</code>
     */
    public io.bloombox.schema.product.struct.PricingDescriptor.Builder getManifestBuilder(
        int index) {
      return getManifestFieldBuilder().getBuilder(index);
    }
    /**
     * <code>repeated .PricingDescriptor manifest = 2;</code>
     */
    public io.bloombox.schema.product.struct.PricingDescriptorOrBuilder getManifestOrBuilder(
        int index) {
      if (manifestBuilder_ == null) {
        return manifest_.get(index);  } else {
        return manifestBuilder_.getMessageOrBuilder(index);
      }
    }
    /**
     * <code>repeated .PricingDescriptor manifest = 2;</code>
     */
    public java.util.List<? extends io.bloombox.schema.product.struct.PricingDescriptorOrBuilder> 
         getManifestOrBuilderList() {
      if (manifestBuilder_ != null) {
        return manifestBuilder_.getMessageOrBuilderList();
      } else {
        return java.util.Collections.unmodifiableList(manifest_);
      }
    }
    /**
     * <code>repeated .PricingDescriptor manifest = 2;</code>
     */
    public io.bloombox.schema.product.struct.PricingDescriptor.Builder addManifestBuilder() {
      return getManifestFieldBuilder().addBuilder(
          io.bloombox.schema.product.struct.PricingDescriptor.getDefaultInstance());
    }
    /**
     * <code>repeated .PricingDescriptor manifest = 2;</code>
     */
    public io.bloombox.schema.product.struct.PricingDescriptor.Builder addManifestBuilder(
        int index) {
      return getManifestFieldBuilder().addBuilder(
          index, io.bloombox.schema.product.struct.PricingDescriptor.getDefaultInstance());
    }
    /**
     * <code>repeated .PricingDescriptor manifest = 2;</code>
     */
    public java.util.List<io.bloombox.schema.product.struct.PricingDescriptor.Builder> 
         getManifestBuilderList() {
      return getManifestFieldBuilder().getBuilderList();
    }
    private com.google.protobuf.RepeatedFieldBuilderV3<
        io.bloombox.schema.product.struct.PricingDescriptor, io.bloombox.schema.product.struct.PricingDescriptor.Builder, io.bloombox.schema.product.struct.PricingDescriptorOrBuilder> 
        getManifestFieldBuilder() {
      if (manifestBuilder_ == null) {
        manifestBuilder_ = new com.google.protobuf.RepeatedFieldBuilderV3<
            io.bloombox.schema.product.struct.PricingDescriptor, io.bloombox.schema.product.struct.PricingDescriptor.Builder, io.bloombox.schema.product.struct.PricingDescriptorOrBuilder>(
                manifest_,
                ((bitField0_ & 0x00000002) == 0x00000002),
                getParentForChildren(),
                isClean());
        manifest_ = null;
      }
      return manifestBuilder_;
    }
    public final Builder setUnknownFields(
        final com.google.protobuf.UnknownFieldSet unknownFields) {
      return super.setUnknownFieldsProto3(unknownFields);
    }

    public final Builder mergeUnknownFields(
        final com.google.protobuf.UnknownFieldSet unknownFields) {
      return super.mergeUnknownFields(unknownFields);
    }


    // @@protoc_insertion_point(builder_scope:ProductPricing)
  }

  // @@protoc_insertion_point(class_scope:ProductPricing)
  private static final io.bloombox.schema.product.struct.ProductPricing DEFAULT_INSTANCE;
  static {
    DEFAULT_INSTANCE = new io.bloombox.schema.product.struct.ProductPricing();
  }

  public static io.bloombox.schema.product.struct.ProductPricing getDefaultInstance() {
    return DEFAULT_INSTANCE;
  }

  private static final com.google.protobuf.Parser<ProductPricing>
      PARSER = new com.google.protobuf.AbstractParser<ProductPricing>() {
    public ProductPricing parsePartialFrom(
        com.google.protobuf.CodedInputStream input,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws com.google.protobuf.InvalidProtocolBufferException {
        return new ProductPricing(input, extensionRegistry);
    }
  };

  public static com.google.protobuf.Parser<ProductPricing> parser() {
    return PARSER;
  }

  @java.lang.Override
  public com.google.protobuf.Parser<ProductPricing> getParserForType() {
    return PARSER;
  }

  public io.bloombox.schema.product.struct.ProductPricing getDefaultInstanceForType() {
    return DEFAULT_INSTANCE;
  }

}

