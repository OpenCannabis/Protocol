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

goog.exportSymbol('proto.FlagsDescriptor', null, global);
goog.exportSymbol('proto.ProductFlag', null, global);
goog.exportSymbol('proto.ProductFlagValue', null, global);
goog.exportSymbol('proto.ProductFlagset', null, global);

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
proto.ProductFlagValue = function(opt_data) {
  jspb.Message.initialize(this, opt_data, 0, -1, null, null);
};
goog.inherits(proto.ProductFlagValue, jspb.Message);
if (goog.DEBUG && !COMPILED) {
  proto.ProductFlagValue.displayName = 'proto.ProductFlagValue';
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
proto.ProductFlagValue.prototype.toObject = function(opt_includeInstance) {
  return proto.ProductFlagValue.toObject(opt_includeInstance, this);
};


/**
 * Static version of the {@see toObject} method.
 * @param {boolean|undefined} includeInstance Whether to include the JSPB
 *     instance for transitional soy proto support:
 *     http://goto/soy-param-migration
 * @param {!proto.ProductFlagValue} msg The msg instance to transform.
 * @return {!Object}
 * @suppress {unusedLocalVariables} f is only used for nested messages
 */
proto.ProductFlagValue.toObject = function(includeInstance, msg) {
  var f, obj = {
    type: jspb.Message.getFieldWithDefault(msg, 1, 0),
    value: jspb.Message.getFieldWithDefault(msg, 2, false)
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
 * @return {!proto.ProductFlagValue}
 */
proto.ProductFlagValue.deserializeBinary = function(bytes) {
  var reader = new jspb.BinaryReader(bytes);
  var msg = new proto.ProductFlagValue;
  return proto.ProductFlagValue.deserializeBinaryFromReader(msg, reader);
};


/**
 * Deserializes binary data (in protobuf wire format) from the
 * given reader into the given message object.
 * @param {!proto.ProductFlagValue} msg The message object to deserialize into.
 * @param {!jspb.BinaryReader} reader The BinaryReader to use.
 * @return {!proto.ProductFlagValue}
 */
proto.ProductFlagValue.deserializeBinaryFromReader = function(msg, reader) {
  while (reader.nextField()) {
    if (reader.isEndGroup()) {
      break;
    }
    var field = reader.getFieldNumber();
    switch (field) {
    case 1:
      var value = /** @type {!proto.ProductFlag} */ (reader.readEnum());
      msg.setType(value);
      break;
    case 2:
      var value = /** @type {boolean} */ (reader.readBool());
      msg.setValue(value);
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
proto.ProductFlagValue.prototype.serializeBinary = function() {
  var writer = new jspb.BinaryWriter();
  proto.ProductFlagValue.serializeBinaryToWriter(this, writer);
  return writer.getResultBuffer();
};


/**
 * Serializes the given message to binary data (in protobuf wire
 * format), writing to the given BinaryWriter.
 * @param {!proto.ProductFlagValue} message
 * @param {!jspb.BinaryWriter} writer
 * @suppress {unusedLocalVariables} f is only used for nested messages
 */
proto.ProductFlagValue.serializeBinaryToWriter = function(message, writer) {
  var f = undefined;
  f = message.getType();
  if (f !== 0.0) {
    writer.writeEnum(
      1,
      f
    );
  }
  f = message.getValue();
  if (f) {
    writer.writeBool(
      2,
      f
    );
  }
};


/**
 * optional ProductFlag type = 1;
 * @return {!proto.ProductFlag}
 */
proto.ProductFlagValue.prototype.getType = function() {
  return /** @type {!proto.ProductFlag} */ (jspb.Message.getFieldWithDefault(this, 1, 0));
};


/** @param {!proto.ProductFlag} value */
proto.ProductFlagValue.prototype.setType = function(value) {
  jspb.Message.setField(this, 1, value);
};


/**
 * optional bool value = 2;
 * Note that Boolean fields may be set to 0/1 when serialized from a Java server.
 * You should avoid comparisons like {@code val === true/false} in those cases.
 * @return {boolean}
 */
proto.ProductFlagValue.prototype.getValue = function() {
  return /** @type {boolean} */ (jspb.Message.getFieldWithDefault(this, 2, false));
};


/** @param {boolean} value */
proto.ProductFlagValue.prototype.setValue = function(value) {
  jspb.Message.setField(this, 2, value);
};



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
proto.ProductFlagset = function(opt_data) {
  jspb.Message.initialize(this, opt_data, 0, -1, proto.ProductFlagset.repeatedFields_, null);
};
goog.inherits(proto.ProductFlagset, jspb.Message);
if (goog.DEBUG && !COMPILED) {
  proto.ProductFlagset.displayName = 'proto.ProductFlagset';
}
/**
 * List of repeated fields within this message type.
 * @private {!Array<number>}
 * @const
 */
proto.ProductFlagset.repeatedFields_ = [1];



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
proto.ProductFlagset.prototype.toObject = function(opt_includeInstance) {
  return proto.ProductFlagset.toObject(opt_includeInstance, this);
};


/**
 * Static version of the {@see toObject} method.
 * @param {boolean|undefined} includeInstance Whether to include the JSPB
 *     instance for transitional soy proto support:
 *     http://goto/soy-param-migration
 * @param {!proto.ProductFlagset} msg The msg instance to transform.
 * @return {!Object}
 * @suppress {unusedLocalVariables} f is only used for nested messages
 */
proto.ProductFlagset.toObject = function(includeInstance, msg) {
  var f, obj = {
    flagsList: jspb.Message.toObjectList(msg.getFlagsList(),
    proto.ProductFlagValue.toObject, includeInstance)
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
 * @return {!proto.ProductFlagset}
 */
proto.ProductFlagset.deserializeBinary = function(bytes) {
  var reader = new jspb.BinaryReader(bytes);
  var msg = new proto.ProductFlagset;
  return proto.ProductFlagset.deserializeBinaryFromReader(msg, reader);
};


/**
 * Deserializes binary data (in protobuf wire format) from the
 * given reader into the given message object.
 * @param {!proto.ProductFlagset} msg The message object to deserialize into.
 * @param {!jspb.BinaryReader} reader The BinaryReader to use.
 * @return {!proto.ProductFlagset}
 */
proto.ProductFlagset.deserializeBinaryFromReader = function(msg, reader) {
  while (reader.nextField()) {
    if (reader.isEndGroup()) {
      break;
    }
    var field = reader.getFieldNumber();
    switch (field) {
    case 1:
      var value = new proto.ProductFlagValue;
      reader.readMessage(value,proto.ProductFlagValue.deserializeBinaryFromReader);
      msg.addFlags(value);
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
proto.ProductFlagset.prototype.serializeBinary = function() {
  var writer = new jspb.BinaryWriter();
  proto.ProductFlagset.serializeBinaryToWriter(this, writer);
  return writer.getResultBuffer();
};


/**
 * Serializes the given message to binary data (in protobuf wire
 * format), writing to the given BinaryWriter.
 * @param {!proto.ProductFlagset} message
 * @param {!jspb.BinaryWriter} writer
 * @suppress {unusedLocalVariables} f is only used for nested messages
 */
proto.ProductFlagset.serializeBinaryToWriter = function(message, writer) {
  var f = undefined;
  f = message.getFlagsList();
  if (f.length > 0) {
    writer.writeRepeatedMessage(
      1,
      f,
      proto.ProductFlagValue.serializeBinaryToWriter
    );
  }
};


/**
 * repeated ProductFlagValue flags = 1;
 * @return {!Array.<!proto.ProductFlagValue>}
 */
proto.ProductFlagset.prototype.getFlagsList = function() {
  return /** @type{!Array.<!proto.ProductFlagValue>} */ (
    jspb.Message.getRepeatedWrapperField(this, proto.ProductFlagValue, 1));
};


/** @param {!Array.<!proto.ProductFlagValue>} value */
proto.ProductFlagset.prototype.setFlagsList = function(value) {
  jspb.Message.setRepeatedWrapperField(this, 1, value);
};


/**
 * @param {!proto.ProductFlagValue=} opt_value
 * @param {number=} opt_index
 * @return {!proto.ProductFlagValue}
 */
proto.ProductFlagset.prototype.addFlags = function(opt_value, opt_index) {
  return jspb.Message.addToRepeatedWrapperField(this, 1, opt_value, proto.ProductFlagValue, opt_index);
};


proto.ProductFlagset.prototype.clearFlagsList = function() {
  this.setFlagsList([]);
};



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
proto.FlagsDescriptor = function(opt_data) {
  jspb.Message.initialize(this, opt_data, 0, -1, null, null);
};
goog.inherits(proto.FlagsDescriptor, jspb.Message);
if (goog.DEBUG && !COMPILED) {
  proto.FlagsDescriptor.displayName = 'proto.FlagsDescriptor';
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
proto.FlagsDescriptor.prototype.toObject = function(opt_includeInstance) {
  return proto.FlagsDescriptor.toObject(opt_includeInstance, this);
};


/**
 * Static version of the {@see toObject} method.
 * @param {boolean|undefined} includeInstance Whether to include the JSPB
 *     instance for transitional soy proto support:
 *     http://goto/soy-param-migration
 * @param {!proto.FlagsDescriptor} msg The msg instance to transform.
 * @return {!Object}
 * @suppress {unusedLocalVariables} f is only used for nested messages
 */
proto.FlagsDescriptor.toObject = function(includeInstance, msg) {
  var f, obj = {
    visible: jspb.Message.getFieldWithDefault(msg, 1, false),
    premium: jspb.Message.getFieldWithDefault(msg, 2, false),
    featured: jspb.Message.getFieldWithDefault(msg, 3, false),
    lastchance: jspb.Message.getFieldWithDefault(msg, 4, false),
    inhouse: jspb.Message.getFieldWithDefault(msg, 5, false)
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
 * @return {!proto.FlagsDescriptor}
 */
proto.FlagsDescriptor.deserializeBinary = function(bytes) {
  var reader = new jspb.BinaryReader(bytes);
  var msg = new proto.FlagsDescriptor;
  return proto.FlagsDescriptor.deserializeBinaryFromReader(msg, reader);
};


/**
 * Deserializes binary data (in protobuf wire format) from the
 * given reader into the given message object.
 * @param {!proto.FlagsDescriptor} msg The message object to deserialize into.
 * @param {!jspb.BinaryReader} reader The BinaryReader to use.
 * @return {!proto.FlagsDescriptor}
 */
proto.FlagsDescriptor.deserializeBinaryFromReader = function(msg, reader) {
  while (reader.nextField()) {
    if (reader.isEndGroup()) {
      break;
    }
    var field = reader.getFieldNumber();
    switch (field) {
    case 1:
      var value = /** @type {boolean} */ (reader.readBool());
      msg.setVisible(value);
      break;
    case 2:
      var value = /** @type {boolean} */ (reader.readBool());
      msg.setPremium(value);
      break;
    case 3:
      var value = /** @type {boolean} */ (reader.readBool());
      msg.setFeatured(value);
      break;
    case 4:
      var value = /** @type {boolean} */ (reader.readBool());
      msg.setLastchance(value);
      break;
    case 5:
      var value = /** @type {boolean} */ (reader.readBool());
      msg.setInhouse(value);
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
proto.FlagsDescriptor.prototype.serializeBinary = function() {
  var writer = new jspb.BinaryWriter();
  proto.FlagsDescriptor.serializeBinaryToWriter(this, writer);
  return writer.getResultBuffer();
};


/**
 * Serializes the given message to binary data (in protobuf wire
 * format), writing to the given BinaryWriter.
 * @param {!proto.FlagsDescriptor} message
 * @param {!jspb.BinaryWriter} writer
 * @suppress {unusedLocalVariables} f is only used for nested messages
 */
proto.FlagsDescriptor.serializeBinaryToWriter = function(message, writer) {
  var f = undefined;
  f = message.getVisible();
  if (f) {
    writer.writeBool(
      1,
      f
    );
  }
  f = message.getPremium();
  if (f) {
    writer.writeBool(
      2,
      f
    );
  }
  f = message.getFeatured();
  if (f) {
    writer.writeBool(
      3,
      f
    );
  }
  f = message.getLastchance();
  if (f) {
    writer.writeBool(
      4,
      f
    );
  }
  f = message.getInhouse();
  if (f) {
    writer.writeBool(
      5,
      f
    );
  }
};


/**
 * optional bool visible = 1;
 * Note that Boolean fields may be set to 0/1 when serialized from a Java server.
 * You should avoid comparisons like {@code val === true/false} in those cases.
 * @return {boolean}
 */
proto.FlagsDescriptor.prototype.getVisible = function() {
  return /** @type {boolean} */ (jspb.Message.getFieldWithDefault(this, 1, false));
};


/** @param {boolean} value */
proto.FlagsDescriptor.prototype.setVisible = function(value) {
  jspb.Message.setField(this, 1, value);
};


/**
 * optional bool premium = 2;
 * Note that Boolean fields may be set to 0/1 when serialized from a Java server.
 * You should avoid comparisons like {@code val === true/false} in those cases.
 * @return {boolean}
 */
proto.FlagsDescriptor.prototype.getPremium = function() {
  return /** @type {boolean} */ (jspb.Message.getFieldWithDefault(this, 2, false));
};


/** @param {boolean} value */
proto.FlagsDescriptor.prototype.setPremium = function(value) {
  jspb.Message.setField(this, 2, value);
};


/**
 * optional bool featured = 3;
 * Note that Boolean fields may be set to 0/1 when serialized from a Java server.
 * You should avoid comparisons like {@code val === true/false} in those cases.
 * @return {boolean}
 */
proto.FlagsDescriptor.prototype.getFeatured = function() {
  return /** @type {boolean} */ (jspb.Message.getFieldWithDefault(this, 3, false));
};


/** @param {boolean} value */
proto.FlagsDescriptor.prototype.setFeatured = function(value) {
  jspb.Message.setField(this, 3, value);
};


/**
 * optional bool lastchance = 4;
 * Note that Boolean fields may be set to 0/1 when serialized from a Java server.
 * You should avoid comparisons like {@code val === true/false} in those cases.
 * @return {boolean}
 */
proto.FlagsDescriptor.prototype.getLastchance = function() {
  return /** @type {boolean} */ (jspb.Message.getFieldWithDefault(this, 4, false));
};


/** @param {boolean} value */
proto.FlagsDescriptor.prototype.setLastchance = function(value) {
  jspb.Message.setField(this, 4, value);
};


/**
 * optional bool inhouse = 5;
 * Note that Boolean fields may be set to 0/1 when serialized from a Java server.
 * You should avoid comparisons like {@code val === true/false} in those cases.
 * @return {boolean}
 */
proto.FlagsDescriptor.prototype.getInhouse = function() {
  return /** @type {boolean} */ (jspb.Message.getFieldWithDefault(this, 5, false));
};


/** @param {boolean} value */
proto.FlagsDescriptor.prototype.setInhouse = function(value) {
  jspb.Message.setField(this, 5, value);
};


/**
 * @enum {number}
 */
proto.ProductFlag = {
  VISIBLE: 0,
  PREMIUM: 1,
  FEATURED: 2,
  LASTCHANCE: 3,
  INHOUSE: 4
};

goog.object.extend(exports, proto);
