// Generated by the protocol buffer compiler.  DO NOT EDIT!

package io.bloombox.schema.product.struct.nano;

@SuppressWarnings("hiding")
public final class FreebiePricingDescriptor extends
    com.google.protobuf.nano.MessageNano {

  private static volatile FreebiePricingDescriptor[] _emptyArray;
  public static FreebiePricingDescriptor[] emptyArray() {
    // Lazily initializes the empty array
    if (_emptyArray == null) {
      synchronized (
          com.google.protobuf.nano.InternalNano.LAZY_INIT_LOCK) {
        if (_emptyArray == null) {
          _emptyArray = new FreebiePricingDescriptor[0];
        }
      }
    }
    return _emptyArray;
  }

  public FreebiePricingDescriptor() {
    clear();
  }

  public FreebiePricingDescriptor clear() {
    cachedSize = -1;
    return this;
  }

  @Override
  public FreebiePricingDescriptor mergeFrom(
          com.google.protobuf.nano.CodedInputByteBufferNano input)
      throws java.io.IOException {
    while (true) {
      int tag = input.readTag();
      switch (tag) {
        case 0:
          return this;
        default: {
          if (!com.google.protobuf.nano.WireFormatNano.parseUnknownField(input, tag)) {
            return this;
          }
          break;
        }
      }
    }
  }

  public static FreebiePricingDescriptor parseFrom(byte[] data)
      throws com.google.protobuf.nano.InvalidProtocolBufferNanoException {
    return com.google.protobuf.nano.MessageNano.mergeFrom(new FreebiePricingDescriptor(), data);
  }

  public static FreebiePricingDescriptor parseFrom(
          com.google.protobuf.nano.CodedInputByteBufferNano input)
      throws java.io.IOException {
    return new FreebiePricingDescriptor().mergeFrom(input);
  }
}