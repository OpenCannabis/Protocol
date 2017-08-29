/**
 * @fileoverview
 * @enhanceable
 * @suppress {messageConventions} JS Compiler reports an error if a variable or
 *     field starts with 'MSG_' and isn't a translatable message.
 * @public
 */
// GENERATED CODE -- DO NOT EDIT!

goog.provide('proto.SaleDescriptor');

goog.require('jspb.BinaryReader');
goog.require('jspb.BinaryWriter');
goog.require('jspb.Message');

goog.forwardDeclare('proto.SaleType');

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
proto.SaleDescriptor = function(opt_data) {
  jspb.Message.initialize(this, opt_data, 0, -1, null, null);
};
goog.inherits(proto.SaleDescriptor, jspb.Message);
if (goog.DEBUG && !COMPILED) {
  proto.SaleDescriptor.displayName = 'proto.SaleDescriptor';
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
proto.SaleDescriptor.prototype.toObject = function(opt_includeInstance) {
  return proto.SaleDescriptor.toObject(opt_includeInstance, this);
};


/**
 * Static version of the {@see toObject} method.
 * @param {boolean|undefined} includeInstance Whether to include the JSPB
 *     instance for transitional soy proto support:
 *     http://goto/soy-param-migration
 * @param {!proto.SaleDescriptor} msg The msg instance to transform.
 * @return {!Object}
 * @suppress {unusedLocalVariables} f is only used for nested messages
 */
proto.SaleDescriptor.toObject = function(includeInstance, msg) {
  var f, obj = {
    type: jspb.Message.getFieldWithDefault(msg, 1, 0),
    effective: jspb.Message.getFieldWithDefault(msg, 2, 0),
    expiration: jspb.Message.getFieldWithDefault(msg, 3, 0),
    percentageAmount: jspb.Message.getFieldWithDefault(msg, 20, 0),
    bogoTrigger: jspb.Message.getFieldWithDefault(msg, 21, 0),
    bogoReward: jspb.Message.getFieldWithDefault(msg, 22, 0),
    loyaltyTrigger: jspb.Message.getFieldWithDefault(msg, 23, 0),
    loyaltyReward: jspb.Message.getFieldWithDefault(msg, 24, 0)
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
 * @return {!proto.SaleDescriptor}
 */
proto.SaleDescriptor.deserializeBinary = function(bytes) {
  var reader = new jspb.BinaryReader(bytes);
  var msg = new proto.SaleDescriptor;
  return proto.SaleDescriptor.deserializeBinaryFromReader(msg, reader);
};


/**
 * Deserializes binary data (in protobuf wire format) from the
 * given reader into the given message object.
 * @param {!proto.SaleDescriptor} msg The message object to deserialize into.
 * @param {!jspb.BinaryReader} reader The BinaryReader to use.
 * @return {!proto.SaleDescriptor}
 */
proto.SaleDescriptor.deserializeBinaryFromReader = function(msg, reader) {
  while (reader.nextField()) {
    if (reader.isEndGroup()) {
      break;
    }
    var field = reader.getFieldNumber();
    switch (field) {
    case 1:
      var value = /** @type {!proto.SaleType} */ (reader.readEnum());
      msg.setType(value);
      break;
    case 2:
      var value = /** @type {number} */ (reader.readUint64());
      msg.setEffective(value);
      break;
    case 3:
      var value = /** @type {number} */ (reader.readUint64());
      msg.setExpiration(value);
      break;
    case 20:
      var value = /** @type {number} */ (reader.readUint32());
      msg.setPercentageAmount(value);
      break;
    case 21:
      var value = /** @type {number} */ (reader.readUint32());
      msg.setBogoTrigger(value);
      break;
    case 22:
      var value = /** @type {number} */ (reader.readUint32());
      msg.setBogoReward(value);
      break;
    case 23:
      var value = /** @type {number} */ (reader.readUint32());
      msg.setLoyaltyTrigger(value);
      break;
    case 24:
      var value = /** @type {number} */ (reader.readUint32());
      msg.setLoyaltyReward(value);
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
proto.SaleDescriptor.prototype.serializeBinary = function() {
  var writer = new jspb.BinaryWriter();
  proto.SaleDescriptor.serializeBinaryToWriter(this, writer);
  return writer.getResultBuffer();
};


/**
 * Serializes the given message to binary data (in protobuf wire
 * format), writing to the given BinaryWriter.
 * @param {!proto.SaleDescriptor} message
 * @param {!jspb.BinaryWriter} writer
 * @suppress {unusedLocalVariables} f is only used for nested messages
 */
proto.SaleDescriptor.serializeBinaryToWriter = function(message, writer) {
  var f = undefined;
  f = message.getType();
  if (f !== 0.0) {
    writer.writeEnum(
      1,
      f
    );
  }
  f = message.getEffective();
  if (f !== 0) {
    writer.writeUint64(
      2,
      f
    );
  }
  f = message.getExpiration();
  if (f !== 0) {
    writer.writeUint64(
      3,
      f
    );
  }
  f = message.getPercentageAmount();
  if (f !== 0) {
    writer.writeUint32(
      20,
      f
    );
  }
  f = message.getBogoTrigger();
  if (f !== 0) {
    writer.writeUint32(
      21,
      f
    );
  }
  f = message.getBogoReward();
  if (f !== 0) {
    writer.writeUint32(
      22,
      f
    );
  }
  f = message.getLoyaltyTrigger();
  if (f !== 0) {
    writer.writeUint32(
      23,
      f
    );
  }
  f = message.getLoyaltyReward();
  if (f !== 0) {
    writer.writeUint32(
      24,
      f
    );
  }
};


/**
 * optional SaleType type = 1;
 * @return {!proto.SaleType}
 */
proto.SaleDescriptor.prototype.getType = function() {
  return /** @type {!proto.SaleType} */ (jspb.Message.getFieldWithDefault(this, 1, 0));
};


/** @param {!proto.SaleType} value */
proto.SaleDescriptor.prototype.setType = function(value) {
  jspb.Message.setField(this, 1, value);
};


/**
 * optional uint64 effective = 2;
 * @return {number}
 */
proto.SaleDescriptor.prototype.getEffective = function() {
  return /** @type {number} */ (jspb.Message.getFieldWithDefault(this, 2, 0));
};


/** @param {number} value */
proto.SaleDescriptor.prototype.setEffective = function(value) {
  jspb.Message.setField(this, 2, value);
};


/**
 * optional uint64 expiration = 3;
 * @return {number}
 */
proto.SaleDescriptor.prototype.getExpiration = function() {
  return /** @type {number} */ (jspb.Message.getFieldWithDefault(this, 3, 0));
};


/** @param {number} value */
proto.SaleDescriptor.prototype.setExpiration = function(value) {
  jspb.Message.setField(this, 3, value);
};


/**
 * optional uint32 percentage_amount = 20;
 * @return {number}
 */
proto.SaleDescriptor.prototype.getPercentageAmount = function() {
  return /** @type {number} */ (jspb.Message.getFieldWithDefault(this, 20, 0));
};


/** @param {number} value */
proto.SaleDescriptor.prototype.setPercentageAmount = function(value) {
  jspb.Message.setField(this, 20, value);
};


/**
 * optional uint32 bogo_trigger = 21;
 * @return {number}
 */
proto.SaleDescriptor.prototype.getBogoTrigger = function() {
  return /** @type {number} */ (jspb.Message.getFieldWithDefault(this, 21, 0));
};


/** @param {number} value */
proto.SaleDescriptor.prototype.setBogoTrigger = function(value) {
  jspb.Message.setField(this, 21, value);
};


/**
 * optional uint32 bogo_reward = 22;
 * @return {number}
 */
proto.SaleDescriptor.prototype.getBogoReward = function() {
  return /** @type {number} */ (jspb.Message.getFieldWithDefault(this, 22, 0));
};


/** @param {number} value */
proto.SaleDescriptor.prototype.setBogoReward = function(value) {
  jspb.Message.setField(this, 22, value);
};


/**
 * optional uint32 loyalty_trigger = 23;
 * @return {number}
 */
proto.SaleDescriptor.prototype.getLoyaltyTrigger = function() {
  return /** @type {number} */ (jspb.Message.getFieldWithDefault(this, 23, 0));
};


/** @param {number} value */
proto.SaleDescriptor.prototype.setLoyaltyTrigger = function(value) {
  jspb.Message.setField(this, 23, value);
};


/**
 * optional uint32 loyalty_reward = 24;
 * @return {number}
 */
proto.SaleDescriptor.prototype.getLoyaltyReward = function() {
  return /** @type {number} */ (jspb.Message.getFieldWithDefault(this, 24, 0));
};


/** @param {number} value */
proto.SaleDescriptor.prototype.setLoyaltyReward = function(value) {
  jspb.Message.setField(this, 24, value);
};


