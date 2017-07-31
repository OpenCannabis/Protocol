// Generated by the protocol buffer compiler.  DO NOT EDIT!

package io.bloombox.schema.media.nano;

@SuppressWarnings("hiding")
public final class VideoType extends
    com.google.protobuf.nano.MessageNano {

  // enum VideoKind
  public static final int MP4 = 0;
  public static final int FLV = 1;
  public static final int HLS = 2;

  private static volatile VideoType[] _emptyArray;
  public static VideoType[] emptyArray() {
    // Lazily initializes the empty array
    if (_emptyArray == null) {
      synchronized (
          com.google.protobuf.nano.InternalNano.LAZY_INIT_LOCK) {
        if (_emptyArray == null) {
          _emptyArray = new VideoType[0];
        }
      }
    }
    return _emptyArray;
  }

  // .VideoType.VideoKind kind = 1;
  public int kind;

  public VideoType() {
    clear();
  }

  public VideoType clear() {
    kind = io.bloombox.schema.media.nano.VideoType.MP4;
    cachedSize = -1;
    return this;
  }

  @Override
  public void writeTo(com.google.protobuf.nano.CodedOutputByteBufferNano output)
      throws java.io.IOException {
    if (this.kind != io.bloombox.schema.media.nano.VideoType.MP4) {
      output.writeInt32(1, this.kind);
    }
    super.writeTo(output);
  }

  @Override
  protected int computeSerializedSize() {
    int size = super.computeSerializedSize();
    if (this.kind != io.bloombox.schema.media.nano.VideoType.MP4) {
      size += com.google.protobuf.nano.CodedOutputByteBufferNano
        .computeInt32Size(1, this.kind);
    }
    return size;
  }

  @Override
  public VideoType mergeFrom(
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
        case 8: {
          int value = input.readInt32();
          switch (value) {
            case io.bloombox.schema.media.nano.VideoType.MP4:
            case io.bloombox.schema.media.nano.VideoType.FLV:
            case io.bloombox.schema.media.nano.VideoType.HLS:
              this.kind = value;
              break;
          }
          break;
        }
      }
    }
  }

  public static VideoType parseFrom(byte[] data)
      throws com.google.protobuf.nano.InvalidProtocolBufferNanoException {
    return com.google.protobuf.nano.MessageNano.mergeFrom(new VideoType(), data);
  }

  public static VideoType parseFrom(
          com.google.protobuf.nano.CodedInputByteBufferNano input)
      throws java.io.IOException {
    return new VideoType().mergeFrom(input);
  }
}