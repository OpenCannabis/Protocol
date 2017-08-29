/**
 * @fileoverview
 * @enhanceable
 * @suppress {messageConventions} JS Compiler reports an error if a variable or
 *     field starts with 'MSG_' and isn't a translatable message.
 * @public
 */
// GENERATED CODE -- DO NOT EDIT!

goog.exportSymbol('proto.Brand', null, global);

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
proto.Brand = function(opt_data) {
  jspb.Message.initialize(this, opt_data, 0, -1, proto.Brand.repeatedFields_, null);
};
goog.inherits(proto.Brand, jspb.Message);
if (goog.DEBUG && !COMPILED) {
  proto.Brand.displayName = 'proto.Brand';
}
/**
 * List of repeated fields within this message type.
 * @private {!Array<number>}
 * @const
 */
proto.Brand.repeatedFields_ = [20];



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
proto.Brand.prototype.toObject = function(opt_includeInstance) {
  return proto.Brand.toObject(opt_includeInstance, this);
};


/**
 * Static version of the {@see toObject} method.
 * @param {boolean|undefined} includeInstance Whether to include the JSPB
 *     instance for transitional soy proto support:
 *     http://goto/soy-param-migration
 * @param {!proto.Brand} msg The msg instance to transform.
 * @return {!Object}
 * @suppress {unusedLocalVariables} f is only used for nested messages
 */
proto.Brand.toObject = function(includeInstance, msg) {
  var f, obj = {
    name: (f = msg.getName()) && proto.Name.toObject(includeInstance, f),
    parent: (f = msg.getParent()) && proto.Brand.toObject(includeInstance, f),
    summary: (f = msg.getSummary()) && proto.Content.toObject(includeInstance, f),
    mediaList: jspb.Message.toObjectList(msg.getMediaList(),
    proto.MediaItem.toObject, includeInstance)
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
 * @return {!proto.Brand}
 */
proto.Brand.deserializeBinary = function(bytes) {
  var reader = new jspb.BinaryReader(bytes);
  var msg = new proto.Brand;
  return proto.Brand.deserializeBinaryFromReader(msg, reader);
};


/**
 * Deserializes binary data (in protobuf wire format) from the
 * given reader into the given message object.
 * @param {!proto.Brand} msg The message object to deserialize into.
 * @param {!jspb.BinaryReader} reader The BinaryReader to use.
 * @return {!proto.Brand}
 */
proto.Brand.deserializeBinaryFromReader = function(msg, reader) {
  while (reader.nextField()) {
    if (reader.isEndGroup()) {
      break;
    }
    var field = reader.getFieldNumber();
    switch (field) {
    case 1:
      var value = new proto.Name;
      reader.readMessage(value,proto.Name.deserializeBinaryFromReader);
      msg.setName(value);
      break;
    case 2:
      var value = new proto.Brand;
      reader.readMessage(value,proto.Brand.deserializeBinaryFromReader);
      msg.setParent(value);
      break;
    case 3:
      var value = new proto.Content;
      reader.readMessage(value,proto.Content.deserializeBinaryFromReader);
      msg.setSummary(value);
      break;
    case 20:
      var value = new proto.MediaItem;
      reader.readMessage(value,proto.MediaItem.deserializeBinaryFromReader);
      msg.addMedia(value);
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
proto.Brand.prototype.serializeBinary = function() {
  var writer = new jspb.BinaryWriter();
  proto.Brand.serializeBinaryToWriter(this, writer);
  return writer.getResultBuffer();
};


/**
 * Serializes the given message to binary data (in protobuf wire
 * format), writing to the given BinaryWriter.
 * @param {!proto.Brand} message
 * @param {!jspb.BinaryWriter} writer
 * @suppress {unusedLocalVariables} f is only used for nested messages
 */
proto.Brand.serializeBinaryToWriter = function(message, writer) {
  var f = undefined;
  f = message.getName();
  if (f != null) {
    writer.writeMessage(
      1,
      f,
      proto.Name.serializeBinaryToWriter
    );
  }
  f = message.getParent();
  if (f != null) {
    writer.writeMessage(
      2,
      f,
      proto.Brand.serializeBinaryToWriter
    );
  }
  f = message.getSummary();
  if (f != null) {
    writer.writeMessage(
      3,
      f,
      proto.Content.serializeBinaryToWriter
    );
  }
  f = message.getMediaList();
  if (f.length > 0) {
    writer.writeRepeatedMessage(
      20,
      f,
      proto.MediaItem.serializeBinaryToWriter
    );
  }
};


/**
 * optional Name name = 1;
 * @return {?proto.Name}
 */
proto.Brand.prototype.getName = function() {
  return /** @type{?proto.Name} */ (
    jspb.Message.getWrapperField(this, proto.Name, 1));
};


/** @param {?proto.Name|undefined} value */
proto.Brand.prototype.setName = function(value) {
  jspb.Message.setWrapperField(this, 1, value);
};


proto.Brand.prototype.clearName = function() {
  this.setName(undefined);
};


/**
 * Returns whether this field is set.
 * @return {!boolean}
 */
proto.Brand.prototype.hasName = function() {
  return jspb.Message.getField(this, 1) != null;
};


/**
 * optional Brand parent = 2;
 * @return {?proto.Brand}
 */
proto.Brand.prototype.getParent = function() {
  return /** @type{?proto.Brand} */ (
    jspb.Message.getWrapperField(this, proto.Brand, 2));
};


/** @param {?proto.Brand|undefined} value */
proto.Brand.prototype.setParent = function(value) {
  jspb.Message.setWrapperField(this, 2, value);
};


proto.Brand.prototype.clearParent = function() {
  this.setParent(undefined);
};


/**
 * Returns whether this field is set.
 * @return {!boolean}
 */
proto.Brand.prototype.hasParent = function() {
  return jspb.Message.getField(this, 2) != null;
};


/**
 * optional Content summary = 3;
 * @return {?proto.Content}
 */
proto.Brand.prototype.getSummary = function() {
  return /** @type{?proto.Content} */ (
    jspb.Message.getWrapperField(this, proto.Content, 3));
};


/** @param {?proto.Content|undefined} value */
proto.Brand.prototype.setSummary = function(value) {
  jspb.Message.setWrapperField(this, 3, value);
};


proto.Brand.prototype.clearSummary = function() {
  this.setSummary(undefined);
};


/**
 * Returns whether this field is set.
 * @return {!boolean}
 */
proto.Brand.prototype.hasSummary = function() {
  return jspb.Message.getField(this, 3) != null;
};


/**
 * repeated MediaItem media = 20;
 * @return {!Array.<!proto.MediaItem>}
 */
proto.Brand.prototype.getMediaList = function() {
  return /** @type{!Array.<!proto.MediaItem>} */ (
    jspb.Message.getRepeatedWrapperField(this, proto.MediaItem, 20));
};


/** @param {!Array.<!proto.MediaItem>} value */
proto.Brand.prototype.setMediaList = function(value) {
  jspb.Message.setRepeatedWrapperField(this, 20, value);
};


/**
 * @param {!proto.MediaItem=} opt_value
 * @param {number=} opt_index
 * @return {!proto.MediaItem}
 */
proto.Brand.prototype.addMedia = function(opt_value, opt_index) {
  return jspb.Message.addToRepeatedWrapperField(this, 20, opt_value, proto.MediaItem, opt_index);
};


proto.Brand.prototype.clearMediaList = function() {
  this.setMediaList([]);
};


