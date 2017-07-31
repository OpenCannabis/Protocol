// Generated by the protocol buffer compiler.  DO NOT EDIT!

package io.bloombox.schema.content.nano;

@SuppressWarnings("hiding")
public final class ProductContent extends
    com.google.protobuf.nano.MessageNano {

  private static volatile ProductContent[] _emptyArray;
  public static ProductContent[] emptyArray() {
    // Lazily initializes the empty array
    if (_emptyArray == null) {
      synchronized (
          com.google.protobuf.nano.InternalNano.LAZY_INIT_LOCK) {
        if (_emptyArray == null) {
          _emptyArray = new ProductContent[0];
        }
      }
    }
    return _emptyArray;
  }

  // .Name name = 1;
  public io.bloombox.schema.content.nano.Name name;

  // .Content summary = 2;
  public io.bloombox.schema.content.nano.Content summary;

  // .Brand brand = 3;
  public io.bloombox.schema.content.nano.Brand brand;

  // repeated .MediaItem media = 20;
  public io.bloombox.schema.media.nano.MediaItem[] media;

  // .Content usage = 30;
  public io.bloombox.schema.content.nano.Content usage;

  // .Content dosage = 31;
  public io.bloombox.schema.content.nano.Content dosage;

  // .Content advice = 32;
  public io.bloombox.schema.content.nano.Content advice;

  public ProductContent() {
    clear();
  }

  public ProductContent clear() {
    name = null;
    summary = null;
    brand = null;
    media = io.bloombox.schema.media.nano.MediaItem.emptyArray();
    usage = null;
    dosage = null;
    advice = null;
    cachedSize = -1;
    return this;
  }

  @Override
  public void writeTo(com.google.protobuf.nano.CodedOutputByteBufferNano output)
      throws java.io.IOException {
    if (this.name != null) {
      output.writeMessage(1, this.name);
    }
    if (this.summary != null) {
      output.writeMessage(2, this.summary);
    }
    if (this.brand != null) {
      output.writeMessage(3, this.brand);
    }
    if (this.media != null && this.media.length > 0) {
      for (int i = 0; i < this.media.length; i++) {
        io.bloombox.schema.media.nano.MediaItem element = this.media[i];
        if (element != null) {
          output.writeMessage(20, element);
        }
      }
    }
    if (this.usage != null) {
      output.writeMessage(30, this.usage);
    }
    if (this.dosage != null) {
      output.writeMessage(31, this.dosage);
    }
    if (this.advice != null) {
      output.writeMessage(32, this.advice);
    }
    super.writeTo(output);
  }

  @Override
  protected int computeSerializedSize() {
    int size = super.computeSerializedSize();
    if (this.name != null) {
      size += com.google.protobuf.nano.CodedOutputByteBufferNano
        .computeMessageSize(1, this.name);
    }
    if (this.summary != null) {
      size += com.google.protobuf.nano.CodedOutputByteBufferNano
        .computeMessageSize(2, this.summary);
    }
    if (this.brand != null) {
      size += com.google.protobuf.nano.CodedOutputByteBufferNano
        .computeMessageSize(3, this.brand);
    }
    if (this.media != null && this.media.length > 0) {
      for (int i = 0; i < this.media.length; i++) {
        io.bloombox.schema.media.nano.MediaItem element = this.media[i];
        if (element != null) {
          size += com.google.protobuf.nano.CodedOutputByteBufferNano
            .computeMessageSize(20, element);
        }
      }
    }
    if (this.usage != null) {
      size += com.google.protobuf.nano.CodedOutputByteBufferNano
        .computeMessageSize(30, this.usage);
    }
    if (this.dosage != null) {
      size += com.google.protobuf.nano.CodedOutputByteBufferNano
        .computeMessageSize(31, this.dosage);
    }
    if (this.advice != null) {
      size += com.google.protobuf.nano.CodedOutputByteBufferNano
        .computeMessageSize(32, this.advice);
    }
    return size;
  }

  @Override
  public ProductContent mergeFrom(
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
        case 10: {
          if (this.name == null) {
            this.name = new io.bloombox.schema.content.nano.Name();
          }
          input.readMessage(this.name);
          break;
        }
        case 18: {
          if (this.summary == null) {
            this.summary = new io.bloombox.schema.content.nano.Content();
          }
          input.readMessage(this.summary);
          break;
        }
        case 26: {
          if (this.brand == null) {
            this.brand = new io.bloombox.schema.content.nano.Brand();
          }
          input.readMessage(this.brand);
          break;
        }
        case 162: {
          int arrayLength = com.google.protobuf.nano.WireFormatNano
              .getRepeatedFieldArrayLength(input, 162);
          int i = this.media == null ? 0 : this.media.length;
          io.bloombox.schema.media.nano.MediaItem[] newArray =
              new io.bloombox.schema.media.nano.MediaItem[i + arrayLength];
          if (i != 0) {
            java.lang.System.arraycopy(this.media, 0, newArray, 0, i);
          }
          for (; i < newArray.length - 1; i++) {
            newArray[i] = new io.bloombox.schema.media.nano.MediaItem();
            input.readMessage(newArray[i]);
            input.readTag();
          }
          // Last one without readTag.
          newArray[i] = new io.bloombox.schema.media.nano.MediaItem();
          input.readMessage(newArray[i]);
          this.media = newArray;
          break;
        }
        case 242: {
          if (this.usage == null) {
            this.usage = new io.bloombox.schema.content.nano.Content();
          }
          input.readMessage(this.usage);
          break;
        }
        case 250: {
          if (this.dosage == null) {
            this.dosage = new io.bloombox.schema.content.nano.Content();
          }
          input.readMessage(this.dosage);
          break;
        }
        case 258: {
          if (this.advice == null) {
            this.advice = new io.bloombox.schema.content.nano.Content();
          }
          input.readMessage(this.advice);
          break;
        }
      }
    }
  }

  public static ProductContent parseFrom(byte[] data)
      throws com.google.protobuf.nano.InvalidProtocolBufferNanoException {
    return com.google.protobuf.nano.MessageNano.mergeFrom(new ProductContent(), data);
  }

  public static ProductContent parseFrom(
          com.google.protobuf.nano.CodedInputByteBufferNano input)
      throws java.io.IOException {
    return new ProductContent().mergeFrom(input);
  }
}