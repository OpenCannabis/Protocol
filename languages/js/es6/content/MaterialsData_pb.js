/**
 * @fileoverview
 * @enhanceable
 * @public
 */
// GENERATED CODE -- DO NOT EDIT!

goog.exportSymbol('proto.MaterialsData', null, global);

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
proto.MaterialsData = function(opt_data) {
  jspb.Message.initialize(this, opt_data, 0, -1, proto.MaterialsData.repeatedFields_, null);
};
goog.inherits(proto.MaterialsData, jspb.Message);
if (goog.DEBUG && !COMPILED) {
  proto.MaterialsData.displayName = 'proto.MaterialsData';
}
/**
 * List of repeated fields within this message type.
 * @private {!Array<number>}
 * @const
 */
proto.MaterialsData.repeatedFields_ = [1];



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
proto.MaterialsData.prototype.toObject = function(opt_includeInstance) {
  return proto.MaterialsData.toObject(opt_includeInstance, this);
};


/**
 * Static version of the {@see toObject} method.
 * @param {boolean|undefined} includeInstance Whether to include the JSPB
 *     instance for transitional soy proto support:
 *     http://goto/soy-param-migration
 * @param {!proto.MaterialsData} msg The msg instance to transform.
 * @return {!Object}
 */
proto.MaterialsData.toObject = function(includeInstance, msg) {
  var f, obj = {
    ingredientsList: jspb.Message.getField(msg, 1),
    grow: jspb.Message.getFieldWithDefault(msg, 2, 0),
    species: jspb.Message.getFieldWithDefault(msg, 3, 0),
    genetics: (f = msg.getGenetics()) && proto.Genetics.toObject(includeInstance, f)
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
 * @return {!proto.MaterialsData}
 */
proto.MaterialsData.deserializeBinary = function(bytes) {
  var reader = new jspb.BinaryReader(bytes);
  var msg = new proto.MaterialsData;
  return proto.MaterialsData.deserializeBinaryFromReader(msg, reader);
};


/**
 * Deserializes binary data (in protobuf wire format) from the
 * given reader into the given message object.
 * @param {!proto.MaterialsData} msg The message object to deserialize into.
 * @param {!jspb.BinaryReader} reader The BinaryReader to use.
 * @return {!proto.MaterialsData}
 */
proto.MaterialsData.deserializeBinaryFromReader = function(msg, reader) {
  while (reader.nextField()) {
    if (reader.isEndGroup()) {
      break;
    }
    var field = reader.getFieldNumber();
    switch (field) {
    case 1:
      var value = /** @type {string} */ (reader.readString());
      msg.addIngredients(value);
      break;
    case 2:
      var value = /** @type {!proto.Grow} */ (reader.readEnum());
      msg.setGrow(value);
      break;
    case 3:
      var value = /** @type {!proto.Species} */ (reader.readEnum());
      msg.setSpecies(value);
      break;
    case 4:
      var value = new proto.Genetics;
      reader.readMessage(value,proto.Genetics.deserializeBinaryFromReader);
      msg.setGenetics(value);
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
proto.MaterialsData.prototype.serializeBinary = function() {
  var writer = new jspb.BinaryWriter();
  proto.MaterialsData.serializeBinaryToWriter(this, writer);
  return writer.getResultBuffer();
};


/**
 * Serializes the given message to binary data (in protobuf wire
 * format), writing to the given BinaryWriter.
 * @param {!proto.MaterialsData} message
 * @param {!jspb.BinaryWriter} writer
 */
proto.MaterialsData.serializeBinaryToWriter = function(message, writer) {
  var f = undefined;
  f = message.getIngredientsList();
  if (f.length > 0) {
    writer.writeRepeatedString(
      1,
      f
    );
  }
  f = message.getGrow();
  if (f !== 0.0) {
    writer.writeEnum(
      2,
      f
    );
  }
  f = message.getSpecies();
  if (f !== 0.0) {
    writer.writeEnum(
      3,
      f
    );
  }
  f = message.getGenetics();
  if (f != null) {
    writer.writeMessage(
      4,
      f,
      proto.Genetics.serializeBinaryToWriter
    );
  }
};


/**
 * repeated string ingredients = 1;
 * If you change this array by adding, removing or replacing elements, or if you
 * replace the array itself, then you must call the setter to update it.
 * @return {!Array.<string>}
 */
proto.MaterialsData.prototype.getIngredientsList = function() {
  return /** @type {!Array.<string>} */ (jspb.Message.getField(this, 1));
};


/** @param {!Array.<string>} value */
proto.MaterialsData.prototype.setIngredientsList = function(value) {
  jspb.Message.setField(this, 1, value || []);
};


/**
 * @param {!string} value
 * @param {number=} opt_index
 */
proto.MaterialsData.prototype.addIngredients = function(value, opt_index) {
  jspb.Message.addToRepeatedField(this, 1, value, opt_index);
};


proto.MaterialsData.prototype.clearIngredientsList = function() {
  this.setIngredientsList([]);
};


/**
 * optional Grow grow = 2;
 * @return {!proto.Grow}
 */
proto.MaterialsData.prototype.getGrow = function() {
  return /** @type {!proto.Grow} */ (jspb.Message.getFieldWithDefault(this, 2, 0));
};


/** @param {!proto.Grow} value */
proto.MaterialsData.prototype.setGrow = function(value) {
  jspb.Message.setField(this, 2, value);
};


/**
 * optional Species species = 3;
 * @return {!proto.Species}
 */
proto.MaterialsData.prototype.getSpecies = function() {
  return /** @type {!proto.Species} */ (jspb.Message.getFieldWithDefault(this, 3, 0));
};


/** @param {!proto.Species} value */
proto.MaterialsData.prototype.setSpecies = function(value) {
  jspb.Message.setField(this, 3, value);
};


/**
 * optional Genetics genetics = 4;
 * @return {?proto.Genetics}
 */
proto.MaterialsData.prototype.getGenetics = function() {
  return /** @type{?proto.Genetics} */ (
    jspb.Message.getWrapperField(this, proto.Genetics, 4));
};


/** @param {?proto.Genetics|undefined} value */
proto.MaterialsData.prototype.setGenetics = function(value) {
  jspb.Message.setWrapperField(this, 4, value);
};


proto.MaterialsData.prototype.clearGenetics = function() {
  this.setGenetics(undefined);
};


/**
 * Returns whether this field is set.
 * @return {!boolean}
 */
proto.MaterialsData.prototype.hasGenetics = function() {
  return jspb.Message.getField(this, 4) != null;
};


