/**
 * @fileoverview
 * @enhanceable
 * @public
 */
// GENERATED CODE -- DO NOT EDIT!

goog.exportSymbol('proto.MediaItem', null, global);

/**
 * Generated by JsPbCodeGenerator.
 * @param {Array=} opt_data Optional initial data array, typically from a
 * server response, or constructed directly in Javascript. The array is used
 * in place and becomes part of the constructed object. It is not cloned.
 * If no data is provided, the constructed object will be empty, but still
 * valid.
 * @extends {jspb.Message}
 * @constructor
 */
proto.MediaItem = function(opt_data) {
  jspb.Message.initialize(this, opt_data, 0, -1, null, null);
};
goog.inherits(proto.MediaItem, jspb.Message);
if (goog.DEBUG && !COMPILED) {
  proto.MediaItem.displayName = 'proto.MediaItem';
}


if (jspb.Message.GENERATE_TO_OBJECT) {
/**
 * Creates an object representation of this proto suitable for use in Soy templates.
 * Field names that are reserved in JavaScript and will be renamed to pb_name.
 * To access a reserved field use, foo.pb_<name>, eg, foo.pb_default.
 * For the list of reserved names please see:
 *     com.google.apps.jspb.JsClassTemplate.JS_RESERVED_WORDS.
 * @param {boolean=} opt_includeInstance Whether to include the JSPB instance
 *     for transitional soy proto support: http://goto/soy-param-migration
 * @return {!Object}
 */
proto.MediaItem.prototype.toObject = function(opt_includeInstance) {
  return proto.MediaItem.toObject(opt_includeInstance, this);
};


/**
 * Static version of the {@see toObject} method.
 * @param {boolean|undefined} includeInstance Whether to include the JSPB
 *     instance for transitional soy proto support:
 *     http://goto/soy-param-migration
 * @param {!proto.MediaItem} msg The msg instance to transform.
 * @return {!Object}
 */
proto.MediaItem.toObject = function(includeInstance, msg) {
  var f, obj = {
    key: (f = msg.getKey()) && proto.MediaKey.toObject(includeInstance, f),
    type: (f = msg.getType()) && proto.MediaType.toObject(includeInstance, f),
    name: jspb.Message.getFieldWithDefault(msg, 3, "")
  };

  if (includeInstance) {
    obj.$jspbMessageInstance = msg;
  }
  return obj;
};
}


/**
 * Deserializes binary data (in protobuf wire format).
 * @param {jspb.ByteSource} bytes The bytes to deserialize.
 * @return {!proto.MediaItem}
 */
proto.MediaItem.deserializeBinary = function(bytes) {
  var reader = new jspb.BinaryReader(bytes);
  var msg = new proto.MediaItem;
  return proto.MediaItem.deserializeBinaryFromReader(msg, reader);
};


/**
 * Deserializes binary data (in protobuf wire format) from the
 * given reader into the given message object.
 * @param {!proto.MediaItem} msg The message object to deserialize into.
 * @param {!jspb.BinaryReader} reader The BinaryReader to use.
 * @return {!proto.MediaItem}
 */
proto.MediaItem.deserializeBinaryFromReader = function(msg, reader) {
  while (reader.nextField()) {
    if (reader.isEndGroup()) {
      break;
    }
    var field = reader.getFieldNumber();
    switch (field) {
    case 1:
      var value = new proto.MediaKey;
      reader.readMessage(value,proto.MediaKey.deserializeBinaryFromReader);
      msg.setKey(value);
      break;
    case 2:
      var value = new proto.MediaType;
      reader.readMessage(value,proto.MediaType.deserializeBinaryFromReader);
      msg.setType(value);
      break;
    case 3:
      var value = /** @type {string} */ (reader.readString());
      msg.setName(value);
      break;
    default:
      reader.skipField();
      break;
    }
  }
  return msg;
};


/**
 * Serializes the message to binary data (in protobuf wire format).
 * @return {!Uint8Array}
 */
proto.MediaItem.prototype.serializeBinary = function() {
  var writer = new jspb.BinaryWriter();
  proto.MediaItem.serializeBinaryToWriter(this, writer);
  return writer.getResultBuffer();
};


/**
 * Serializes the given message to binary data (in protobuf wire
 * format), writing to the given BinaryWriter.
 * @param {!proto.MediaItem} message
 * @param {!jspb.BinaryWriter} writer
 */
proto.MediaItem.serializeBinaryToWriter = function(message, writer) {
  var f = undefined;
  f = message.getKey();
  if (f != null) {
    writer.writeMessage(
      1,
      f,
      proto.MediaKey.serializeBinaryToWriter
    );
  }
  f = message.getType();
  if (f != null) {
    writer.writeMessage(
      2,
      f,
      proto.MediaType.serializeBinaryToWriter
    );
  }
  f = message.getName();
  if (f.length > 0) {
    writer.writeString(
      3,
      f
    );
  }
};


/**
 * optional MediaKey key = 1;
 * @return {?proto.MediaKey}
 */
proto.MediaItem.prototype.getKey = function() {
  return /** @type{?proto.MediaKey} */ (
    jspb.Message.getWrapperField(this, proto.MediaKey, 1));
};


/** @param {?proto.MediaKey|undefined} value */
proto.MediaItem.prototype.setKey = function(value) {
  jspb.Message.setWrapperField(this, 1, value);
};


proto.MediaItem.prototype.clearKey = function() {
  this.setKey(undefined);
};


/**
 * Returns whether this field is set.
 * @return {!boolean}
 */
proto.MediaItem.prototype.hasKey = function() {
  return jspb.Message.getField(this, 1) != null;
};


/**
 * optional MediaType type = 2;
 * @return {?proto.MediaType}
 */
proto.MediaItem.prototype.getType = function() {
  return /** @type{?proto.MediaType} */ (
    jspb.Message.getWrapperField(this, proto.MediaType, 2));
};


/** @param {?proto.MediaType|undefined} value */
proto.MediaItem.prototype.setType = function(value) {
  jspb.Message.setWrapperField(this, 2, value);
};


proto.MediaItem.prototype.clearType = function() {
  this.setType(undefined);
};


/**
 * Returns whether this field is set.
 * @return {!boolean}
 */
proto.MediaItem.prototype.hasType = function() {
  return jspb.Message.getField(this, 2) != null;
};


/**
 * optional string name = 3;
 * @return {string}
 */
proto.MediaItem.prototype.getName = function() {
  return /** @type {string} */ (jspb.Message.getFieldWithDefault(this, 3, ""));
};


/** @param {string} value */
proto.MediaItem.prototype.setName = function(value) {
  jspb.Message.setField(this, 3, value);
};


