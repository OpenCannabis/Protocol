// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: structs/pricing/SaleDescriptor.proto

package io.bloombox.schema.product.struct;

/**
 * Protobuf type {@code SaleDescriptor}
 */
public  final class SaleDescriptor extends
    com.google.protobuf.GeneratedMessageV3 implements
    // @@protoc_insertion_point(message_implements:SaleDescriptor)
    SaleDescriptorOrBuilder {
  // Use SaleDescriptor.newBuilder() to construct.
  private SaleDescriptor(com.google.protobuf.GeneratedMessageV3.Builder<?> builder) {
    super(builder);
  }
  private SaleDescriptor() {
    type_ = 0;
    effective_ = 0L;
    expiration_ = 0L;
    percentageAmount_ = 0;
    bogoTrigger_ = 0;
    bogoReward_ = 0;
    loyaltyTrigger_ = 0;
    loyaltyReward_ = 0;
  }

  @java.lang.Override
  public final com.google.protobuf.UnknownFieldSet
  getUnknownFields() {
    return com.google.protobuf.UnknownFieldSet.getDefaultInstance();
  }
  private SaleDescriptor(
      com.google.protobuf.CodedInputStream input,
      com.google.protobuf.ExtensionRegistryLite extensionRegistry)
      throws com.google.protobuf.InvalidProtocolBufferException {
    this();
    int mutable_bitField0_ = 0;
    try {
      boolean done = false;
      while (!done) {
        int tag = input.readTag();
        switch (tag) {
          case 0:
            done = true;
            break;
          default: {
            if (!input.skipField(tag)) {
              done = true;
            }
            break;
          }
          case 8: {
            int rawValue = input.readEnum();

            type_ = rawValue;
            break;
          }
          case 16: {

            effective_ = input.readUInt64();
            break;
          }
          case 24: {

            expiration_ = input.readUInt64();
            break;
          }
          case 160: {

            percentageAmount_ = input.readUInt32();
            break;
          }
          case 168: {

            bogoTrigger_ = input.readUInt32();
            break;
          }
          case 176: {

            bogoReward_ = input.readUInt32();
            break;
          }
          case 184: {

            loyaltyTrigger_ = input.readUInt32();
            break;
          }
          case 192: {

            loyaltyReward_ = input.readUInt32();
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
      makeExtensionsImmutable();
    }
  }
  public static final com.google.protobuf.Descriptors.Descriptor
      getDescriptor() {
    return io.bloombox.schema.product.struct.ProductDiscount.internal_static_SaleDescriptor_descriptor;
  }

  protected com.google.protobuf.GeneratedMessageV3.FieldAccessorTable
      internalGetFieldAccessorTable() {
    return io.bloombox.schema.product.struct.ProductDiscount.internal_static_SaleDescriptor_fieldAccessorTable
        .ensureFieldAccessorsInitialized(
            io.bloombox.schema.product.struct.SaleDescriptor.class, io.bloombox.schema.product.struct.SaleDescriptor.Builder.class);
  }

  public static final int TYPE_FIELD_NUMBER = 1;
  private int type_;
  /**
   * <pre>
   * sale metadata
   * </pre>
   *
   * <code>.SaleType type = 1;</code>
   */
  public int getTypeValue() {
    return type_;
  }
  /**
   * <pre>
   * sale metadata
   * </pre>
   *
   * <code>.SaleType type = 1;</code>
   */
  public io.bloombox.schema.product.struct.SaleType getType() {
    io.bloombox.schema.product.struct.SaleType result = io.bloombox.schema.product.struct.SaleType.valueOf(type_);
    return result == null ? io.bloombox.schema.product.struct.SaleType.UNRECOGNIZED : result;
  }

  public static final int EFFECTIVE_FIELD_NUMBER = 2;
  private long effective_;
  /**
   * <code>uint64 effective = 2;</code>
   */
  public long getEffective() {
    return effective_;
  }

  public static final int EXPIRATION_FIELD_NUMBER = 3;
  private long expiration_;
  /**
   * <code>uint64 expiration = 3;</code>
   */
  public long getExpiration() {
    return expiration_;
  }

  public static final int PERCENTAGE_AMOUNT_FIELD_NUMBER = 20;
  private int percentageAmount_;
  /**
   * <pre>
   * sale amount and trigger properties
   * </pre>
   *
   * <code>uint32 percentage_amount = 20;</code>
   */
  public int getPercentageAmount() {
    return percentageAmount_;
  }

  public static final int BOGO_TRIGGER_FIELD_NUMBER = 21;
  private int bogoTrigger_;
  /**
   * <code>uint32 bogo_trigger = 21;</code>
   */
  public int getBogoTrigger() {
    return bogoTrigger_;
  }

  public static final int BOGO_REWARD_FIELD_NUMBER = 22;
  private int bogoReward_;
  /**
   * <code>uint32 bogo_reward = 22;</code>
   */
  public int getBogoReward() {
    return bogoReward_;
  }

  public static final int LOYALTY_TRIGGER_FIELD_NUMBER = 23;
  private int loyaltyTrigger_;
  /**
   * <code>uint32 loyalty_trigger = 23;</code>
   */
  public int getLoyaltyTrigger() {
    return loyaltyTrigger_;
  }

  public static final int LOYALTY_REWARD_FIELD_NUMBER = 24;
  private int loyaltyReward_;
  /**
   * <code>uint32 loyalty_reward = 24;</code>
   */
  public int getLoyaltyReward() {
    return loyaltyReward_;
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
    if (type_ != io.bloombox.schema.product.struct.SaleType.PERCENTAGE.getNumber()) {
      output.writeEnum(1, type_);
    }
    if (effective_ != 0L) {
      output.writeUInt64(2, effective_);
    }
    if (expiration_ != 0L) {
      output.writeUInt64(3, expiration_);
    }
    if (percentageAmount_ != 0) {
      output.writeUInt32(20, percentageAmount_);
    }
    if (bogoTrigger_ != 0) {
      output.writeUInt32(21, bogoTrigger_);
    }
    if (bogoReward_ != 0) {
      output.writeUInt32(22, bogoReward_);
    }
    if (loyaltyTrigger_ != 0) {
      output.writeUInt32(23, loyaltyTrigger_);
    }
    if (loyaltyReward_ != 0) {
      output.writeUInt32(24, loyaltyReward_);
    }
  }

  public int getSerializedSize() {
    int size = memoizedSize;
    if (size != -1) return size;

    size = 0;
    if (type_ != io.bloombox.schema.product.struct.SaleType.PERCENTAGE.getNumber()) {
      size += com.google.protobuf.CodedOutputStream
        .computeEnumSize(1, type_);
    }
    if (effective_ != 0L) {
      size += com.google.protobuf.CodedOutputStream
        .computeUInt64Size(2, effective_);
    }
    if (expiration_ != 0L) {
      size += com.google.protobuf.CodedOutputStream
        .computeUInt64Size(3, expiration_);
    }
    if (percentageAmount_ != 0) {
      size += com.google.protobuf.CodedOutputStream
        .computeUInt32Size(20, percentageAmount_);
    }
    if (bogoTrigger_ != 0) {
      size += com.google.protobuf.CodedOutputStream
        .computeUInt32Size(21, bogoTrigger_);
    }
    if (bogoReward_ != 0) {
      size += com.google.protobuf.CodedOutputStream
        .computeUInt32Size(22, bogoReward_);
    }
    if (loyaltyTrigger_ != 0) {
      size += com.google.protobuf.CodedOutputStream
        .computeUInt32Size(23, loyaltyTrigger_);
    }
    if (loyaltyReward_ != 0) {
      size += com.google.protobuf.CodedOutputStream
        .computeUInt32Size(24, loyaltyReward_);
    }
    memoizedSize = size;
    return size;
  }

  private static final long serialVersionUID = 0L;
  @java.lang.Override
  public boolean equals(final java.lang.Object obj) {
    if (obj == this) {
     return true;
    }
    if (!(obj instanceof io.bloombox.schema.product.struct.SaleDescriptor)) {
      return super.equals(obj);
    }
    io.bloombox.schema.product.struct.SaleDescriptor other = (io.bloombox.schema.product.struct.SaleDescriptor) obj;

    boolean result = true;
    result = result && type_ == other.type_;
    result = result && (getEffective()
        == other.getEffective());
    result = result && (getExpiration()
        == other.getExpiration());
    result = result && (getPercentageAmount()
        == other.getPercentageAmount());
    result = result && (getBogoTrigger()
        == other.getBogoTrigger());
    result = result && (getBogoReward()
        == other.getBogoReward());
    result = result && (getLoyaltyTrigger()
        == other.getLoyaltyTrigger());
    result = result && (getLoyaltyReward()
        == other.getLoyaltyReward());
    return result;
  }

  @java.lang.Override
  public int hashCode() {
    if (memoizedHashCode != 0) {
      return memoizedHashCode;
    }
    int hash = 41;
    hash = (19 * hash) + getDescriptor().hashCode();
    hash = (37 * hash) + TYPE_FIELD_NUMBER;
    hash = (53 * hash) + type_;
    hash = (37 * hash) + EFFECTIVE_FIELD_NUMBER;
    hash = (53 * hash) + com.google.protobuf.Internal.hashLong(
        getEffective());
    hash = (37 * hash) + EXPIRATION_FIELD_NUMBER;
    hash = (53 * hash) + com.google.protobuf.Internal.hashLong(
        getExpiration());
    hash = (37 * hash) + PERCENTAGE_AMOUNT_FIELD_NUMBER;
    hash = (53 * hash) + getPercentageAmount();
    hash = (37 * hash) + BOGO_TRIGGER_FIELD_NUMBER;
    hash = (53 * hash) + getBogoTrigger();
    hash = (37 * hash) + BOGO_REWARD_FIELD_NUMBER;
    hash = (53 * hash) + getBogoReward();
    hash = (37 * hash) + LOYALTY_TRIGGER_FIELD_NUMBER;
    hash = (53 * hash) + getLoyaltyTrigger();
    hash = (37 * hash) + LOYALTY_REWARD_FIELD_NUMBER;
    hash = (53 * hash) + getLoyaltyReward();
    hash = (29 * hash) + unknownFields.hashCode();
    memoizedHashCode = hash;
    return hash;
  }

  public static io.bloombox.schema.product.struct.SaleDescriptor parseFrom(
      java.nio.ByteBuffer data)
      throws com.google.protobuf.InvalidProtocolBufferException {
    return PARSER.parseFrom(data);
  }
  public static io.bloombox.schema.product.struct.SaleDescriptor parseFrom(
      java.nio.ByteBuffer data,
      com.google.protobuf.ExtensionRegistryLite extensionRegistry)
      throws com.google.protobuf.InvalidProtocolBufferException {
    return PARSER.parseFrom(data, extensionRegistry);
  }
  public static io.bloombox.schema.product.struct.SaleDescriptor parseFrom(
      com.google.protobuf.ByteString data)
      throws com.google.protobuf.InvalidProtocolBufferException {
    return PARSER.parseFrom(data);
  }
  public static io.bloombox.schema.product.struct.SaleDescriptor parseFrom(
      com.google.protobuf.ByteString data,
      com.google.protobuf.ExtensionRegistryLite extensionRegistry)
      throws com.google.protobuf.InvalidProtocolBufferException {
    return PARSER.parseFrom(data, extensionRegistry);
  }
  public static io.bloombox.schema.product.struct.SaleDescriptor parseFrom(byte[] data)
      throws com.google.protobuf.InvalidProtocolBufferException {
    return PARSER.parseFrom(data);
  }
  public static io.bloombox.schema.product.struct.SaleDescriptor parseFrom(
      byte[] data,
      com.google.protobuf.ExtensionRegistryLite extensionRegistry)
      throws com.google.protobuf.InvalidProtocolBufferException {
    return PARSER.parseFrom(data, extensionRegistry);
  }
  public static io.bloombox.schema.product.struct.SaleDescriptor parseFrom(java.io.InputStream input)
      throws java.io.IOException {
    return com.google.protobuf.GeneratedMessageV3
        .parseWithIOException(PARSER, input);
  }
  public static io.bloombox.schema.product.struct.SaleDescriptor parseFrom(
      java.io.InputStream input,
      com.google.protobuf.ExtensionRegistryLite extensionRegistry)
      throws java.io.IOException {
    return com.google.protobuf.GeneratedMessageV3
        .parseWithIOException(PARSER, input, extensionRegistry);
  }
  public static io.bloombox.schema.product.struct.SaleDescriptor parseDelimitedFrom(java.io.InputStream input)
      throws java.io.IOException {
    return com.google.protobuf.GeneratedMessageV3
        .parseDelimitedWithIOException(PARSER, input);
  }
  public static io.bloombox.schema.product.struct.SaleDescriptor parseDelimitedFrom(
      java.io.InputStream input,
      com.google.protobuf.ExtensionRegistryLite extensionRegistry)
      throws java.io.IOException {
    return com.google.protobuf.GeneratedMessageV3
        .parseDelimitedWithIOException(PARSER, input, extensionRegistry);
  }
  public static io.bloombox.schema.product.struct.SaleDescriptor parseFrom(
      com.google.protobuf.CodedInputStream input)
      throws java.io.IOException {
    return com.google.protobuf.GeneratedMessageV3
        .parseWithIOException(PARSER, input);
  }
  public static io.bloombox.schema.product.struct.SaleDescriptor parseFrom(
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
  public static Builder newBuilder(io.bloombox.schema.product.struct.SaleDescriptor prototype) {
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
   * Protobuf type {@code SaleDescriptor}
   */
  public static final class Builder extends
      com.google.protobuf.GeneratedMessageV3.Builder<Builder> implements
      // @@protoc_insertion_point(builder_implements:SaleDescriptor)
      io.bloombox.schema.product.struct.SaleDescriptorOrBuilder {
    public static final com.google.protobuf.Descriptors.Descriptor
        getDescriptor() {
      return io.bloombox.schema.product.struct.ProductDiscount.internal_static_SaleDescriptor_descriptor;
    }

    protected com.google.protobuf.GeneratedMessageV3.FieldAccessorTable
        internalGetFieldAccessorTable() {
      return io.bloombox.schema.product.struct.ProductDiscount.internal_static_SaleDescriptor_fieldAccessorTable
          .ensureFieldAccessorsInitialized(
              io.bloombox.schema.product.struct.SaleDescriptor.class, io.bloombox.schema.product.struct.SaleDescriptor.Builder.class);
    }

    // Construct using io.bloombox.schema.product.struct.SaleDescriptor.newBuilder()
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
      type_ = 0;

      effective_ = 0L;

      expiration_ = 0L;

      percentageAmount_ = 0;

      bogoTrigger_ = 0;

      bogoReward_ = 0;

      loyaltyTrigger_ = 0;

      loyaltyReward_ = 0;

      return this;
    }

    public com.google.protobuf.Descriptors.Descriptor
        getDescriptorForType() {
      return io.bloombox.schema.product.struct.ProductDiscount.internal_static_SaleDescriptor_descriptor;
    }

    public io.bloombox.schema.product.struct.SaleDescriptor getDefaultInstanceForType() {
      return io.bloombox.schema.product.struct.SaleDescriptor.getDefaultInstance();
    }

    public io.bloombox.schema.product.struct.SaleDescriptor build() {
      io.bloombox.schema.product.struct.SaleDescriptor result = buildPartial();
      if (!result.isInitialized()) {
        throw newUninitializedMessageException(result);
      }
      return result;
    }

    public io.bloombox.schema.product.struct.SaleDescriptor buildPartial() {
      io.bloombox.schema.product.struct.SaleDescriptor result = new io.bloombox.schema.product.struct.SaleDescriptor(this);
      result.type_ = type_;
      result.effective_ = effective_;
      result.expiration_ = expiration_;
      result.percentageAmount_ = percentageAmount_;
      result.bogoTrigger_ = bogoTrigger_;
      result.bogoReward_ = bogoReward_;
      result.loyaltyTrigger_ = loyaltyTrigger_;
      result.loyaltyReward_ = loyaltyReward_;
      onBuilt();
      return result;
    }

    public Builder clone() {
      return (Builder) super.clone();
    }
    public Builder setField(
        com.google.protobuf.Descriptors.FieldDescriptor field,
        Object value) {
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
        int index, Object value) {
      return (Builder) super.setRepeatedField(field, index, value);
    }
    public Builder addRepeatedField(
        com.google.protobuf.Descriptors.FieldDescriptor field,
        Object value) {
      return (Builder) super.addRepeatedField(field, value);
    }
    public Builder mergeFrom(com.google.protobuf.Message other) {
      if (other instanceof io.bloombox.schema.product.struct.SaleDescriptor) {
        return mergeFrom((io.bloombox.schema.product.struct.SaleDescriptor)other);
      } else {
        super.mergeFrom(other);
        return this;
      }
    }

    public Builder mergeFrom(io.bloombox.schema.product.struct.SaleDescriptor other) {
      if (other == io.bloombox.schema.product.struct.SaleDescriptor.getDefaultInstance()) return this;
      if (other.type_ != 0) {
        setTypeValue(other.getTypeValue());
      }
      if (other.getEffective() != 0L) {
        setEffective(other.getEffective());
      }
      if (other.getExpiration() != 0L) {
        setExpiration(other.getExpiration());
      }
      if (other.getPercentageAmount() != 0) {
        setPercentageAmount(other.getPercentageAmount());
      }
      if (other.getBogoTrigger() != 0) {
        setBogoTrigger(other.getBogoTrigger());
      }
      if (other.getBogoReward() != 0) {
        setBogoReward(other.getBogoReward());
      }
      if (other.getLoyaltyTrigger() != 0) {
        setLoyaltyTrigger(other.getLoyaltyTrigger());
      }
      if (other.getLoyaltyReward() != 0) {
        setLoyaltyReward(other.getLoyaltyReward());
      }
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
      io.bloombox.schema.product.struct.SaleDescriptor parsedMessage = null;
      try {
        parsedMessage = PARSER.parsePartialFrom(input, extensionRegistry);
      } catch (com.google.protobuf.InvalidProtocolBufferException e) {
        parsedMessage = (io.bloombox.schema.product.struct.SaleDescriptor) e.getUnfinishedMessage();
        throw e.unwrapIOException();
      } finally {
        if (parsedMessage != null) {
          mergeFrom(parsedMessage);
        }
      }
      return this;
    }

    private int type_ = 0;
    /**
     * <pre>
     * sale metadata
     * </pre>
     *
     * <code>.SaleType type = 1;</code>
     */
    public int getTypeValue() {
      return type_;
    }
    /**
     * <pre>
     * sale metadata
     * </pre>
     *
     * <code>.SaleType type = 1;</code>
     */
    public Builder setTypeValue(int value) {
      type_ = value;
      onChanged();
      return this;
    }
    /**
     * <pre>
     * sale metadata
     * </pre>
     *
     * <code>.SaleType type = 1;</code>
     */
    public io.bloombox.schema.product.struct.SaleType getType() {
      io.bloombox.schema.product.struct.SaleType result = io.bloombox.schema.product.struct.SaleType.valueOf(type_);
      return result == null ? io.bloombox.schema.product.struct.SaleType.UNRECOGNIZED : result;
    }
    /**
     * <pre>
     * sale metadata
     * </pre>
     *
     * <code>.SaleType type = 1;</code>
     */
    public Builder setType(io.bloombox.schema.product.struct.SaleType value) {
      if (value == null) {
        throw new NullPointerException();
      }
      
      type_ = value.getNumber();
      onChanged();
      return this;
    }
    /**
     * <pre>
     * sale metadata
     * </pre>
     *
     * <code>.SaleType type = 1;</code>
     */
    public Builder clearType() {
      
      type_ = 0;
      onChanged();
      return this;
    }

    private long effective_ ;
    /**
     * <code>uint64 effective = 2;</code>
     */
    public long getEffective() {
      return effective_;
    }
    /**
     * <code>uint64 effective = 2;</code>
     */
    public Builder setEffective(long value) {
      
      effective_ = value;
      onChanged();
      return this;
    }
    /**
     * <code>uint64 effective = 2;</code>
     */
    public Builder clearEffective() {
      
      effective_ = 0L;
      onChanged();
      return this;
    }

    private long expiration_ ;
    /**
     * <code>uint64 expiration = 3;</code>
     */
    public long getExpiration() {
      return expiration_;
    }
    /**
     * <code>uint64 expiration = 3;</code>
     */
    public Builder setExpiration(long value) {
      
      expiration_ = value;
      onChanged();
      return this;
    }
    /**
     * <code>uint64 expiration = 3;</code>
     */
    public Builder clearExpiration() {
      
      expiration_ = 0L;
      onChanged();
      return this;
    }

    private int percentageAmount_ ;
    /**
     * <pre>
     * sale amount and trigger properties
     * </pre>
     *
     * <code>uint32 percentage_amount = 20;</code>
     */
    public int getPercentageAmount() {
      return percentageAmount_;
    }
    /**
     * <pre>
     * sale amount and trigger properties
     * </pre>
     *
     * <code>uint32 percentage_amount = 20;</code>
     */
    public Builder setPercentageAmount(int value) {
      
      percentageAmount_ = value;
      onChanged();
      return this;
    }
    /**
     * <pre>
     * sale amount and trigger properties
     * </pre>
     *
     * <code>uint32 percentage_amount = 20;</code>
     */
    public Builder clearPercentageAmount() {
      
      percentageAmount_ = 0;
      onChanged();
      return this;
    }

    private int bogoTrigger_ ;
    /**
     * <code>uint32 bogo_trigger = 21;</code>
     */
    public int getBogoTrigger() {
      return bogoTrigger_;
    }
    /**
     * <code>uint32 bogo_trigger = 21;</code>
     */
    public Builder setBogoTrigger(int value) {
      
      bogoTrigger_ = value;
      onChanged();
      return this;
    }
    /**
     * <code>uint32 bogo_trigger = 21;</code>
     */
    public Builder clearBogoTrigger() {
      
      bogoTrigger_ = 0;
      onChanged();
      return this;
    }

    private int bogoReward_ ;
    /**
     * <code>uint32 bogo_reward = 22;</code>
     */
    public int getBogoReward() {
      return bogoReward_;
    }
    /**
     * <code>uint32 bogo_reward = 22;</code>
     */
    public Builder setBogoReward(int value) {
      
      bogoReward_ = value;
      onChanged();
      return this;
    }
    /**
     * <code>uint32 bogo_reward = 22;</code>
     */
    public Builder clearBogoReward() {
      
      bogoReward_ = 0;
      onChanged();
      return this;
    }

    private int loyaltyTrigger_ ;
    /**
     * <code>uint32 loyalty_trigger = 23;</code>
     */
    public int getLoyaltyTrigger() {
      return loyaltyTrigger_;
    }
    /**
     * <code>uint32 loyalty_trigger = 23;</code>
     */
    public Builder setLoyaltyTrigger(int value) {
      
      loyaltyTrigger_ = value;
      onChanged();
      return this;
    }
    /**
     * <code>uint32 loyalty_trigger = 23;</code>
     */
    public Builder clearLoyaltyTrigger() {
      
      loyaltyTrigger_ = 0;
      onChanged();
      return this;
    }

    private int loyaltyReward_ ;
    /**
     * <code>uint32 loyalty_reward = 24;</code>
     */
    public int getLoyaltyReward() {
      return loyaltyReward_;
    }
    /**
     * <code>uint32 loyalty_reward = 24;</code>
     */
    public Builder setLoyaltyReward(int value) {
      
      loyaltyReward_ = value;
      onChanged();
      return this;
    }
    /**
     * <code>uint32 loyalty_reward = 24;</code>
     */
    public Builder clearLoyaltyReward() {
      
      loyaltyReward_ = 0;
      onChanged();
      return this;
    }
    public final Builder setUnknownFields(
        final com.google.protobuf.UnknownFieldSet unknownFields) {
      return this;
    }

    public final Builder mergeUnknownFields(
        final com.google.protobuf.UnknownFieldSet unknownFields) {
      return this;
    }


    // @@protoc_insertion_point(builder_scope:SaleDescriptor)
  }

  // @@protoc_insertion_point(class_scope:SaleDescriptor)
  private static final io.bloombox.schema.product.struct.SaleDescriptor DEFAULT_INSTANCE;
  static {
    DEFAULT_INSTANCE = new io.bloombox.schema.product.struct.SaleDescriptor();
  }

  public static io.bloombox.schema.product.struct.SaleDescriptor getDefaultInstance() {
    return DEFAULT_INSTANCE;
  }

  private static final com.google.protobuf.Parser<SaleDescriptor>
      PARSER = new com.google.protobuf.AbstractParser<SaleDescriptor>() {
    public SaleDescriptor parsePartialFrom(
        com.google.protobuf.CodedInputStream input,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws com.google.protobuf.InvalidProtocolBufferException {
        return new SaleDescriptor(input, extensionRegistry);
    }
  };

  public static com.google.protobuf.Parser<SaleDescriptor> parser() {
    return PARSER;
  }

  @java.lang.Override
  public com.google.protobuf.Parser<SaleDescriptor> getParserForType() {
    return PARSER;
  }

  public io.bloombox.schema.product.struct.SaleDescriptor getDefaultInstanceForType() {
    return DEFAULT_INSTANCE;
  }

}

