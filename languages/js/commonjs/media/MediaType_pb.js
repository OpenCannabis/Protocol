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

goog.exportSymbol('proto.DocumentType', null, global);
goog.exportSymbol('proto.DocumentType.DocumentKind', null, global);
goog.exportSymbol('proto.ImageType', null, global);
goog.exportSymbol('proto.ImageType.ImageKind', null, global);
goog.exportSymbol('proto.MediaType', null, global);
goog.exportSymbol('proto.MediaType.Kind', null, global);
goog.exportSymbol('proto.VideoType', null, global);
goog.exportSymbol('proto.VideoType.VideoKind', null, global);

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
proto.MediaType = function(opt_data) {
  jspb.Message.initialize(this, opt_data, 0, -1, null, null);
};
goog.inherits(proto.MediaType, jspb.Message);
if (goog.DEBUG && !COMPILED) {
  proto.MediaType.displayName = 'proto.MediaType';
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
proto.MediaType.prototype.toObject = function(opt_includeInstance) {
  return proto.MediaType.toObject(opt_includeInstance, this);
};


/**
 * Static version of the {@see toObject} method.
 * @param {boolean|undefined} includeInstance Whether to include the JSPB
 *     instance for transitional soy proto support:
 *     http://goto/soy-param-migration
 * @param {!proto.MediaType} msg The msg instance to transform.
 * @return {!Object}
 * @suppress {unusedLocalVariables} f is only used for nested messages
 */
proto.MediaType.toObject = function(includeInstance, msg) {
  var f, obj = {
    kind: jspb.Message.getFieldWithDefault(msg, 1, 0),
    imageType: (f = msg.getImageType()) && proto.ImageType.toObject(includeInstance, f),
    documentType: (f = msg.getDocumentType()) && proto.DocumentType.toObject(includeInstance, f),
    videoType: (f = msg.getVideoType()) && proto.VideoType.toObject(includeInstance, f)
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
 * @return {!proto.MediaType}
 */
proto.MediaType.deserializeBinary = function(bytes) {
  var reader = new jspb.BinaryReader(bytes);
  var msg = new proto.MediaType;
  return proto.MediaType.deserializeBinaryFromReader(msg, reader);
};


/**
 * Deserializes binary data (in protobuf wire format) from the
 * given reader into the given message object.
 * @param {!proto.MediaType} msg The message object to deserialize into.
 * @param {!jspb.BinaryReader} reader The BinaryReader to use.
 * @return {!proto.MediaType}
 */
proto.MediaType.deserializeBinaryFromReader = function(msg, reader) {
  while (reader.nextField()) {
    if (reader.isEndGroup()) {
      break;
    }
    var field = reader.getFieldNumber();
    switch (field) {
    case 1:
      var value = /** @type {!proto.MediaType.Kind} */ (reader.readEnum());
      msg.setKind(value);
      break;
    case 101:
      var value = new proto.ImageType;
      reader.readMessage(value,proto.ImageType.deserializeBinaryFromReader);
      msg.setImageType(value);
      break;
    case 201:
      var value = new proto.DocumentType;
      reader.readMessage(value,proto.DocumentType.deserializeBinaryFromReader);
      msg.setDocumentType(value);
      break;
    case 301:
      var value = new proto.VideoType;
      reader.readMessage(value,proto.VideoType.deserializeBinaryFromReader);
      msg.setVideoType(value);
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
proto.MediaType.prototype.serializeBinary = function() {
  var writer = new jspb.BinaryWriter();
  proto.MediaType.serializeBinaryToWriter(this, writer);
  return writer.getResultBuffer();
};


/**
 * Serializes the given message to binary data (in protobuf wire
 * format), writing to the given BinaryWriter.
 * @param {!proto.MediaType} message
 * @param {!jspb.BinaryWriter} writer
 * @suppress {unusedLocalVariables} f is only used for nested messages
 */
proto.MediaType.serializeBinaryToWriter = function(message, writer) {
  var f = undefined;
  f = message.getKind();
  if (f !== 0.0) {
    writer.writeEnum(
      1,
      f
    );
  }
  f = message.getImageType();
  if (f != null) {
    writer.writeMessage(
      101,
      f,
      proto.ImageType.serializeBinaryToWriter
    );
  }
  f = message.getDocumentType();
  if (f != null) {
    writer.writeMessage(
      201,
      f,
      proto.DocumentType.serializeBinaryToWriter
    );
  }
  f = message.getVideoType();
  if (f != null) {
    writer.writeMessage(
      301,
      f,
      proto.VideoType.serializeBinaryToWriter
    );
  }
};


/**
 * @enum {number}
 */
proto.MediaType.Kind = {
  LINK: 0,
  IMAGE: 1,
  DOCUMENT: 2,
  VIDEO: 3
};

/**
 * optional Kind kind = 1;
 * @return {!proto.MediaType.Kind}
 */
proto.MediaType.prototype.getKind = function() {
  return /** @type {!proto.MediaType.Kind} */ (jspb.Message.getFieldWithDefault(this, 1, 0));
};


/** @param {!proto.MediaType.Kind} value */
proto.MediaType.prototype.setKind = function(value) {
  jspb.Message.setField(this, 1, value);
};


/**
 * optional ImageType image_type = 101;
 * @return {?proto.ImageType}
 */
proto.MediaType.prototype.getImageType = function() {
  return /** @type{?proto.ImageType} */ (
    jspb.Message.getWrapperField(this, proto.ImageType, 101));
};


/** @param {?proto.ImageType|undefined} value */
proto.MediaType.prototype.setImageType = function(value) {
  jspb.Message.setWrapperField(this, 101, value);
};


proto.MediaType.prototype.clearImageType = function() {
  this.setImageType(undefined);
};


/**
 * Returns whether this field is set.
 * @return {!boolean}
 */
proto.MediaType.prototype.hasImageType = function() {
  return jspb.Message.getField(this, 101) != null;
};


/**
 * optional DocumentType document_type = 201;
 * @return {?proto.DocumentType}
 */
proto.MediaType.prototype.getDocumentType = function() {
  return /** @type{?proto.DocumentType} */ (
    jspb.Message.getWrapperField(this, proto.DocumentType, 201));
};


/** @param {?proto.DocumentType|undefined} value */
proto.MediaType.prototype.setDocumentType = function(value) {
  jspb.Message.setWrapperField(this, 201, value);
};


proto.MediaType.prototype.clearDocumentType = function() {
  this.setDocumentType(undefined);
};


/**
 * Returns whether this field is set.
 * @return {!boolean}
 */
proto.MediaType.prototype.hasDocumentType = function() {
  return jspb.Message.getField(this, 201) != null;
};


/**
 * optional VideoType video_type = 301;
 * @return {?proto.VideoType}
 */
proto.MediaType.prototype.getVideoType = function() {
  return /** @type{?proto.VideoType} */ (
    jspb.Message.getWrapperField(this, proto.VideoType, 301));
};


/** @param {?proto.VideoType|undefined} value */
proto.MediaType.prototype.setVideoType = function(value) {
  jspb.Message.setWrapperField(this, 301, value);
};


proto.MediaType.prototype.clearVideoType = function() {
  this.setVideoType(undefined);
};


/**
 * Returns whether this field is set.
 * @return {!boolean}
 */
proto.MediaType.prototype.hasVideoType = function() {
  return jspb.Message.getField(this, 301) != null;
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
proto.ImageType = function(opt_data) {
  jspb.Message.initialize(this, opt_data, 0, -1, null, null);
};
goog.inherits(proto.ImageType, jspb.Message);
if (goog.DEBUG && !COMPILED) {
  proto.ImageType.displayName = 'proto.ImageType';
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
proto.ImageType.prototype.toObject = function(opt_includeInstance) {
  return proto.ImageType.toObject(opt_includeInstance, this);
};


/**
 * Static version of the {@see toObject} method.
 * @param {boolean|undefined} includeInstance Whether to include the JSPB
 *     instance for transitional soy proto support:
 *     http://goto/soy-param-migration
 * @param {!proto.ImageType} msg The msg instance to transform.
 * @return {!Object}
 * @suppress {unusedLocalVariables} f is only used for nested messages
 */
proto.ImageType.toObject = function(includeInstance, msg) {
  var f, obj = {
    kind: jspb.Message.getFieldWithDefault(msg, 1, 0)
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
 * @return {!proto.ImageType}
 */
proto.ImageType.deserializeBinary = function(bytes) {
  var reader = new jspb.BinaryReader(bytes);
  var msg = new proto.ImageType;
  return proto.ImageType.deserializeBinaryFromReader(msg, reader);
};


/**
 * Deserializes binary data (in protobuf wire format) from the
 * given reader into the given message object.
 * @param {!proto.ImageType} msg The message object to deserialize into.
 * @param {!jspb.BinaryReader} reader The BinaryReader to use.
 * @return {!proto.ImageType}
 */
proto.ImageType.deserializeBinaryFromReader = function(msg, reader) {
  while (reader.nextField()) {
    if (reader.isEndGroup()) {
      break;
    }
    var field = reader.getFieldNumber();
    switch (field) {
    case 1:
      var value = /** @type {!proto.ImageType.ImageKind} */ (reader.readEnum());
      msg.setKind(value);
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
proto.ImageType.prototype.serializeBinary = function() {
  var writer = new jspb.BinaryWriter();
  proto.ImageType.serializeBinaryToWriter(this, writer);
  return writer.getResultBuffer();
};


/**
 * Serializes the given message to binary data (in protobuf wire
 * format), writing to the given BinaryWriter.
 * @param {!proto.ImageType} message
 * @param {!jspb.BinaryWriter} writer
 * @suppress {unusedLocalVariables} f is only used for nested messages
 */
proto.ImageType.serializeBinaryToWriter = function(message, writer) {
  var f = undefined;
  f = message.getKind();
  if (f !== 0.0) {
    writer.writeEnum(
      1,
      f
    );
  }
};


/**
 * @enum {number}
 */
proto.ImageType.ImageKind = {
  PNG: 0,
  JPG: 1,
  GIF: 2,
  SVG: 3,
  WEBP: 4
};

/**
 * optional ImageKind kind = 1;
 * @return {!proto.ImageType.ImageKind}
 */
proto.ImageType.prototype.getKind = function() {
  return /** @type {!proto.ImageType.ImageKind} */ (jspb.Message.getFieldWithDefault(this, 1, 0));
};


/** @param {!proto.ImageType.ImageKind} value */
proto.ImageType.prototype.setKind = function(value) {
  jspb.Message.setField(this, 1, value);
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
proto.DocumentType = function(opt_data) {
  jspb.Message.initialize(this, opt_data, 0, -1, null, null);
};
goog.inherits(proto.DocumentType, jspb.Message);
if (goog.DEBUG && !COMPILED) {
  proto.DocumentType.displayName = 'proto.DocumentType';
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
proto.DocumentType.prototype.toObject = function(opt_includeInstance) {
  return proto.DocumentType.toObject(opt_includeInstance, this);
};


/**
 * Static version of the {@see toObject} method.
 * @param {boolean|undefined} includeInstance Whether to include the JSPB
 *     instance for transitional soy proto support:
 *     http://goto/soy-param-migration
 * @param {!proto.DocumentType} msg The msg instance to transform.
 * @return {!Object}
 * @suppress {unusedLocalVariables} f is only used for nested messages
 */
proto.DocumentType.toObject = function(includeInstance, msg) {
  var f, obj = {
    kind: jspb.Message.getFieldWithDefault(msg, 1, 0),
    compressed: jspb.Message.getFieldWithDefault(msg, 2, false)
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
 * @return {!proto.DocumentType}
 */
proto.DocumentType.deserializeBinary = function(bytes) {
  var reader = new jspb.BinaryReader(bytes);
  var msg = new proto.DocumentType;
  return proto.DocumentType.deserializeBinaryFromReader(msg, reader);
};


/**
 * Deserializes binary data (in protobuf wire format) from the
 * given reader into the given message object.
 * @param {!proto.DocumentType} msg The message object to deserialize into.
 * @param {!jspb.BinaryReader} reader The BinaryReader to use.
 * @return {!proto.DocumentType}
 */
proto.DocumentType.deserializeBinaryFromReader = function(msg, reader) {
  while (reader.nextField()) {
    if (reader.isEndGroup()) {
      break;
    }
    var field = reader.getFieldNumber();
    switch (field) {
    case 1:
      var value = /** @type {!proto.DocumentType.DocumentKind} */ (reader.readEnum());
      msg.setKind(value);
      break;
    case 2:
      var value = /** @type {boolean} */ (reader.readBool());
      msg.setCompressed(value);
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
proto.DocumentType.prototype.serializeBinary = function() {
  var writer = new jspb.BinaryWriter();
  proto.DocumentType.serializeBinaryToWriter(this, writer);
  return writer.getResultBuffer();
};


/**
 * Serializes the given message to binary data (in protobuf wire
 * format), writing to the given BinaryWriter.
 * @param {!proto.DocumentType} message
 * @param {!jspb.BinaryWriter} writer
 * @suppress {unusedLocalVariables} f is only used for nested messages
 */
proto.DocumentType.serializeBinaryToWriter = function(message, writer) {
  var f = undefined;
  f = message.getKind();
  if (f !== 0.0) {
    writer.writeEnum(
      1,
      f
    );
  }
  f = message.getCompressed();
  if (f) {
    writer.writeBool(
      2,
      f
    );
  }
};


/**
 * @enum {number}
 */
proto.DocumentType.DocumentKind = {
  TXT: 0,
  HTML: 1,
  PDF: 2,
  MARKDOWN: 3
};

/**
 * optional DocumentKind kind = 1;
 * @return {!proto.DocumentType.DocumentKind}
 */
proto.DocumentType.prototype.getKind = function() {
  return /** @type {!proto.DocumentType.DocumentKind} */ (jspb.Message.getFieldWithDefault(this, 1, 0));
};


/** @param {!proto.DocumentType.DocumentKind} value */
proto.DocumentType.prototype.setKind = function(value) {
  jspb.Message.setField(this, 1, value);
};


/**
 * optional bool compressed = 2;
 * Note that Boolean fields may be set to 0/1 when serialized from a Java server.
 * You should avoid comparisons like {@code val === true/false} in those cases.
 * @return {boolean}
 */
proto.DocumentType.prototype.getCompressed = function() {
  return /** @type {boolean} */ (jspb.Message.getFieldWithDefault(this, 2, false));
};


/** @param {boolean} value */
proto.DocumentType.prototype.setCompressed = function(value) {
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
proto.VideoType = function(opt_data) {
  jspb.Message.initialize(this, opt_data, 0, -1, null, null);
};
goog.inherits(proto.VideoType, jspb.Message);
if (goog.DEBUG && !COMPILED) {
  proto.VideoType.displayName = 'proto.VideoType';
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
proto.VideoType.prototype.toObject = function(opt_includeInstance) {
  return proto.VideoType.toObject(opt_includeInstance, this);
};


/**
 * Static version of the {@see toObject} method.
 * @param {boolean|undefined} includeInstance Whether to include the JSPB
 *     instance for transitional soy proto support:
 *     http://goto/soy-param-migration
 * @param {!proto.VideoType} msg The msg instance to transform.
 * @return {!Object}
 * @suppress {unusedLocalVariables} f is only used for nested messages
 */
proto.VideoType.toObject = function(includeInstance, msg) {
  var f, obj = {
    kind: jspb.Message.getFieldWithDefault(msg, 1, 0)
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
 * @return {!proto.VideoType}
 */
proto.VideoType.deserializeBinary = function(bytes) {
  var reader = new jspb.BinaryReader(bytes);
  var msg = new proto.VideoType;
  return proto.VideoType.deserializeBinaryFromReader(msg, reader);
};


/**
 * Deserializes binary data (in protobuf wire format) from the
 * given reader into the given message object.
 * @param {!proto.VideoType} msg The message object to deserialize into.
 * @param {!jspb.BinaryReader} reader The BinaryReader to use.
 * @return {!proto.VideoType}
 */
proto.VideoType.deserializeBinaryFromReader = function(msg, reader) {
  while (reader.nextField()) {
    if (reader.isEndGroup()) {
      break;
    }
    var field = reader.getFieldNumber();
    switch (field) {
    case 1:
      var value = /** @type {!proto.VideoType.VideoKind} */ (reader.readEnum());
      msg.setKind(value);
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
proto.VideoType.prototype.serializeBinary = function() {
  var writer = new jspb.BinaryWriter();
  proto.VideoType.serializeBinaryToWriter(this, writer);
  return writer.getResultBuffer();
};


/**
 * Serializes the given message to binary data (in protobuf wire
 * format), writing to the given BinaryWriter.
 * @param {!proto.VideoType} message
 * @param {!jspb.BinaryWriter} writer
 * @suppress {unusedLocalVariables} f is only used for nested messages
 */
proto.VideoType.serializeBinaryToWriter = function(message, writer) {
  var f = undefined;
  f = message.getKind();
  if (f !== 0.0) {
    writer.writeEnum(
      1,
      f
    );
  }
};


/**
 * @enum {number}
 */
proto.VideoType.VideoKind = {
  MP4: 0,
  FLV: 1,
  HLS: 2
};

/**
 * optional VideoKind kind = 1;
 * @return {!proto.VideoType.VideoKind}
 */
proto.VideoType.prototype.getKind = function() {
  return /** @type {!proto.VideoType.VideoKind} */ (jspb.Message.getFieldWithDefault(this, 1, 0));
};


/** @param {!proto.VideoType.VideoKind} value */
proto.VideoType.prototype.setKind = function(value) {
  jspb.Message.setField(this, 1, value);
};


goog.object.extend(exports, proto);
