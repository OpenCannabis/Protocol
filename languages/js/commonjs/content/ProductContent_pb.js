/**
 * @fileoverview
 * @enhanceable
 * @suppress {messageConventions} JS Compiler reports an error if a variable or
 *     field starts with 'MSG_' and isn't a translatable message.
 * @public
 */
// GENERATED CODE -- DO NOT EDIT!

var jspb = require('google-protobuf');
var goog = jspb;
var global = Function('return this')();

var content_Name_pb = require('../content/Name_pb.js');
var content_Content_pb = require('../content/Content_pb.js');
var content_Brand_pb = require('../content/Brand_pb.js');
var media_MediaItem_pb = require('../media/MediaItem_pb.js');
goog.exportSymbol('proto.ProductContent', null, global);

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
proto.ProductContent = function(opt_data) {
  jspb.Message.initialize(this, opt_data, 0, -1, proto.ProductContent.repeatedFields_, null);
};
goog.inherits(proto.ProductContent, jspb.Message);
if (goog.DEBUG && !COMPILED) {
  proto.ProductContent.displayName = 'proto.ProductContent';
}
/**
 * List of repeated fields within this message type.
 * @private {!Array<number>}
 * @const
 */
proto.ProductContent.repeatedFields_ = [20];



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
proto.ProductContent.prototype.toObject = function(opt_includeInstance) {
  return proto.ProductContent.toObject(opt_includeInstance, this);
};


/**
 * Static version of the {@see toObject} method.
 * @param {boolean|undefined} includeInstance Whether to include the JSPB
 *     instance for transitional soy proto support:
 *     http://goto/soy-param-migration
 * @param {!proto.ProductContent} msg The msg instance to transform.
 * @return {!Object}
 * @suppress {unusedLocalVariables} f is only used for nested messages
 */
proto.ProductContent.toObject = function(includeInstance, msg) {
  var f, obj = {
    name: (f = msg.getName()) && content_Name_pb.Name.toObject(includeInstance, f),
    summary: (f = msg.getSummary()) && content_Content_pb.Content.toObject(includeInstance, f),
    brand: (f = msg.getBrand()) && content_Brand_pb.Brand.toObject(includeInstance, f),
    mediaList: jspb.Message.toObjectList(msg.getMediaList(),
    media_MediaItem_pb.MediaItem.toObject, includeInstance),
    usage: (f = msg.getUsage()) && content_Content_pb.Content.toObject(includeInstance, f),
    dosage: (f = msg.getDosage()) && content_Content_pb.Content.toObject(includeInstance, f),
    advice: (f = msg.getAdvice()) && content_Content_pb.Content.toObject(includeInstance, f)
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
 * @return {!proto.ProductContent}
 */
proto.ProductContent.deserializeBinary = function(bytes) {
  var reader = new jspb.BinaryReader(bytes);
  var msg = new proto.ProductContent;
  return proto.ProductContent.deserializeBinaryFromReader(msg, reader);
};


/**
 * Deserializes binary data (in protobuf wire format) from the
 * given reader into the given message object.
 * @param {!proto.ProductContent} msg The message object to deserialize into.
 * @param {!jspb.BinaryReader} reader The BinaryReader to use.
 * @return {!proto.ProductContent}
 */
proto.ProductContent.deserializeBinaryFromReader = function(msg, reader) {
  while (reader.nextField()) {
    if (reader.isEndGroup()) {
      break;
    }
    var field = reader.getFieldNumber();
    switch (field) {
    case 1:
      var value = new content_Name_pb.Name;
      reader.readMessage(value,content_Name_pb.Name.deserializeBinaryFromReader);
      msg.setName(value);
      break;
    case 2:
      var value = new content_Content_pb.Content;
      reader.readMessage(value,content_Content_pb.Content.deserializeBinaryFromReader);
      msg.setSummary(value);
      break;
    case 3:
      var value = new content_Brand_pb.Brand;
      reader.readMessage(value,content_Brand_pb.Brand.deserializeBinaryFromReader);
      msg.setBrand(value);
      break;
    case 20:
      var value = new media_MediaItem_pb.MediaItem;
      reader.readMessage(value,media_MediaItem_pb.MediaItem.deserializeBinaryFromReader);
      msg.addMedia(value);
      break;
    case 30:
      var value = new content_Content_pb.Content;
      reader.readMessage(value,content_Content_pb.Content.deserializeBinaryFromReader);
      msg.setUsage(value);
      break;
    case 31:
      var value = new content_Content_pb.Content;
      reader.readMessage(value,content_Content_pb.Content.deserializeBinaryFromReader);
      msg.setDosage(value);
      break;
    case 32:
      var value = new content_Content_pb.Content;
      reader.readMessage(value,content_Content_pb.Content.deserializeBinaryFromReader);
      msg.setAdvice(value);
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
proto.ProductContent.prototype.serializeBinary = function() {
  var writer = new jspb.BinaryWriter();
  proto.ProductContent.serializeBinaryToWriter(this, writer);
  return writer.getResultBuffer();
};


/**
 * Serializes the given message to binary data (in protobuf wire
 * format), writing to the given BinaryWriter.
 * @param {!proto.ProductContent} message
 * @param {!jspb.BinaryWriter} writer
 * @suppress {unusedLocalVariables} f is only used for nested messages
 */
proto.ProductContent.serializeBinaryToWriter = function(message, writer) {
  var f = undefined;
  f = message.getName();
  if (f != null) {
    writer.writeMessage(
      1,
      f,
      content_Name_pb.Name.serializeBinaryToWriter
    );
  }
  f = message.getSummary();
  if (f != null) {
    writer.writeMessage(
      2,
      f,
      content_Content_pb.Content.serializeBinaryToWriter
    );
  }
  f = message.getBrand();
  if (f != null) {
    writer.writeMessage(
      3,
      f,
      content_Brand_pb.Brand.serializeBinaryToWriter
    );
  }
  f = message.getMediaList();
  if (f.length > 0) {
    writer.writeRepeatedMessage(
      20,
      f,
      media_MediaItem_pb.MediaItem.serializeBinaryToWriter
    );
  }
  f = message.getUsage();
  if (f != null) {
    writer.writeMessage(
      30,
      f,
      content_Content_pb.Content.serializeBinaryToWriter
    );
  }
  f = message.getDosage();
  if (f != null) {
    writer.writeMessage(
      31,
      f,
      content_Content_pb.Content.serializeBinaryToWriter
    );
  }
  f = message.getAdvice();
  if (f != null) {
    writer.writeMessage(
      32,
      f,
      content_Content_pb.Content.serializeBinaryToWriter
    );
  }
};


/**
 * optional Name name = 1;
 * @return {?proto.Name}
 */
proto.ProductContent.prototype.getName = function() {
  return /** @type{?proto.Name} */ (
    jspb.Message.getWrapperField(this, content_Name_pb.Name, 1));
};


/** @param {?proto.Name|undefined} value */
proto.ProductContent.prototype.setName = function(value) {
  jspb.Message.setWrapperField(this, 1, value);
};


proto.ProductContent.prototype.clearName = function() {
  this.setName(undefined);
};


/**
 * Returns whether this field is set.
 * @return {!boolean}
 */
proto.ProductContent.prototype.hasName = function() {
  return jspb.Message.getField(this, 1) != null;
};


/**
 * optional Content summary = 2;
 * @return {?proto.Content}
 */
proto.ProductContent.prototype.getSummary = function() {
  return /** @type{?proto.Content} */ (
    jspb.Message.getWrapperField(this, content_Content_pb.Content, 2));
};


/** @param {?proto.Content|undefined} value */
proto.ProductContent.prototype.setSummary = function(value) {
  jspb.Message.setWrapperField(this, 2, value);
};


proto.ProductContent.prototype.clearSummary = function() {
  this.setSummary(undefined);
};


/**
 * Returns whether this field is set.
 * @return {!boolean}
 */
proto.ProductContent.prototype.hasSummary = function() {
  return jspb.Message.getField(this, 2) != null;
};


/**
 * optional Brand brand = 3;
 * @return {?proto.Brand}
 */
proto.ProductContent.prototype.getBrand = function() {
  return /** @type{?proto.Brand} */ (
    jspb.Message.getWrapperField(this, content_Brand_pb.Brand, 3));
};


/** @param {?proto.Brand|undefined} value */
proto.ProductContent.prototype.setBrand = function(value) {
  jspb.Message.setWrapperField(this, 3, value);
};


proto.ProductContent.prototype.clearBrand = function() {
  this.setBrand(undefined);
};


/**
 * Returns whether this field is set.
 * @return {!boolean}
 */
proto.ProductContent.prototype.hasBrand = function() {
  return jspb.Message.getField(this, 3) != null;
};


/**
 * repeated MediaItem media = 20;
 * @return {!Array.<!proto.MediaItem>}
 */
proto.ProductContent.prototype.getMediaList = function() {
  return /** @type{!Array.<!proto.MediaItem>} */ (
    jspb.Message.getRepeatedWrapperField(this, media_MediaItem_pb.MediaItem, 20));
};


/** @param {!Array.<!proto.MediaItem>} value */
proto.ProductContent.prototype.setMediaList = function(value) {
  jspb.Message.setRepeatedWrapperField(this, 20, value);
};


/**
 * @param {!proto.MediaItem=} opt_value
 * @param {number=} opt_index
 * @return {!proto.MediaItem}
 */
proto.ProductContent.prototype.addMedia = function(opt_value, opt_index) {
  return jspb.Message.addToRepeatedWrapperField(this, 20, opt_value, proto.MediaItem, opt_index);
};


proto.ProductContent.prototype.clearMediaList = function() {
  this.setMediaList([]);
};


/**
 * optional Content usage = 30;
 * @return {?proto.Content}
 */
proto.ProductContent.prototype.getUsage = function() {
  return /** @type{?proto.Content} */ (
    jspb.Message.getWrapperField(this, content_Content_pb.Content, 30));
};


/** @param {?proto.Content|undefined} value */
proto.ProductContent.prototype.setUsage = function(value) {
  jspb.Message.setWrapperField(this, 30, value);
};


proto.ProductContent.prototype.clearUsage = function() {
  this.setUsage(undefined);
};


/**
 * Returns whether this field is set.
 * @return {!boolean}
 */
proto.ProductContent.prototype.hasUsage = function() {
  return jspb.Message.getField(this, 30) != null;
};


/**
 * optional Content dosage = 31;
 * @return {?proto.Content}
 */
proto.ProductContent.prototype.getDosage = function() {
  return /** @type{?proto.Content} */ (
    jspb.Message.getWrapperField(this, content_Content_pb.Content, 31));
};


/** @param {?proto.Content|undefined} value */
proto.ProductContent.prototype.setDosage = function(value) {
  jspb.Message.setWrapperField(this, 31, value);
};


proto.ProductContent.prototype.clearDosage = function() {
  this.setDosage(undefined);
};


/**
 * Returns whether this field is set.
 * @return {!boolean}
 */
proto.ProductContent.prototype.hasDosage = function() {
  return jspb.Message.getField(this, 31) != null;
};


/**
 * optional Content advice = 32;
 * @return {?proto.Content}
 */
proto.ProductContent.prototype.getAdvice = function() {
  return /** @type{?proto.Content} */ (
    jspb.Message.getWrapperField(this, content_Content_pb.Content, 32));
};


/** @param {?proto.Content|undefined} value */
proto.ProductContent.prototype.setAdvice = function(value) {
  jspb.Message.setWrapperField(this, 32, value);
};


proto.ProductContent.prototype.clearAdvice = function() {
  this.setAdvice(undefined);
};


/**
 * Returns whether this field is set.
 * @return {!boolean}
 */
proto.ProductContent.prototype.hasAdvice = function() {
  return jspb.Message.getField(this, 32) != null;
};


goog.object.extend(exports, proto);
