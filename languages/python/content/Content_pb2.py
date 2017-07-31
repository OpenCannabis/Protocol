# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: content/Content.proto

import sys
_b=sys.version_info[0]<3 and (lambda x:x) or (lambda x:x.encode('latin1'))
from google.protobuf import descriptor as _descriptor
from google.protobuf import message as _message
from google.protobuf import reflection as _reflection
from google.protobuf import symbol_database as _symbol_database
from google.protobuf import descriptor_pb2
# @@protoc_insertion_point(imports)

_sym_db = _symbol_database.Default()


from base import Language_pb2 as base_dot_Language__pb2
from base import Compression_pb2 as base_dot_Compression__pb2


DESCRIPTOR = _descriptor.FileDescriptor(
  name='content/Content.proto',
  package='',
  syntax='proto3',
  serialized_pb=_b('\n\x15\x63ontent/Content.proto\x1a\x13\x62\x61se/Language.proto\x1a\x16\x62\x61se/Compression.proto\"\xdc\x01\n\x07\x43ontent\x12\x1b\n\x04type\x18\x01 \x01(\x0e\x32\r.Content.Type\x12#\n\x08\x65ncoding\x18\x02 \x01(\x0e\x32\x11.Content.Encoding\x12\x0f\n\x07\x63ontent\x18\x03 \x01(\x0c\x12\x1b\n\x08language\x18\x04 \x01(\x0e\x32\t.Language\x12!\n\x0b\x63ompression\x18\x05 \x01(\x0b\x32\x0c.Compression\"(\n\x04Type\x12\x08\n\x04TEXT\x10\x00\x12\x0c\n\x08MARKDOWN\x10\x01\x12\x08\n\x04HTML\x10\x02\"\x14\n\x08\x45ncoding\x12\x08\n\x04UTF8\x10\x00\x42.\n\x1aio.bloombox.schema.contentB\x0eGenericContentP\x01\x62\x06proto3')
  ,
  dependencies=[base_dot_Language__pb2.DESCRIPTOR,base_dot_Compression__pb2.DESCRIPTOR,])



_CONTENT_TYPE = _descriptor.EnumDescriptor(
  name='Type',
  full_name='Content.Type',
  filename=None,
  file=DESCRIPTOR,
  values=[
    _descriptor.EnumValueDescriptor(
      name='TEXT', index=0, number=0,
      options=None,
      type=None),
    _descriptor.EnumValueDescriptor(
      name='MARKDOWN', index=1, number=1,
      options=None,
      type=None),
    _descriptor.EnumValueDescriptor(
      name='HTML', index=2, number=2,
      options=None,
      type=None),
  ],
  containing_type=None,
  options=None,
  serialized_start=229,
  serialized_end=269,
)
_sym_db.RegisterEnumDescriptor(_CONTENT_TYPE)

_CONTENT_ENCODING = _descriptor.EnumDescriptor(
  name='Encoding',
  full_name='Content.Encoding',
  filename=None,
  file=DESCRIPTOR,
  values=[
    _descriptor.EnumValueDescriptor(
      name='UTF8', index=0, number=0,
      options=None,
      type=None),
  ],
  containing_type=None,
  options=None,
  serialized_start=271,
  serialized_end=291,
)
_sym_db.RegisterEnumDescriptor(_CONTENT_ENCODING)


_CONTENT = _descriptor.Descriptor(
  name='Content',
  full_name='Content',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='type', full_name='Content.type', index=0,
      number=1, type=14, cpp_type=8, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='encoding', full_name='Content.encoding', index=1,
      number=2, type=14, cpp_type=8, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='content', full_name='Content.content', index=2,
      number=3, type=12, cpp_type=9, label=1,
      has_default_value=False, default_value=_b(""),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='language', full_name='Content.language', index=3,
      number=4, type=14, cpp_type=8, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='compression', full_name='Content.compression', index=4,
      number=5, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
  ],
  extensions=[
  ],
  nested_types=[],
  enum_types=[
    _CONTENT_TYPE,
    _CONTENT_ENCODING,
  ],
  options=None,
  is_extendable=False,
  syntax='proto3',
  extension_ranges=[],
  oneofs=[
  ],
  serialized_start=71,
  serialized_end=291,
)

_CONTENT.fields_by_name['type'].enum_type = _CONTENT_TYPE
_CONTENT.fields_by_name['encoding'].enum_type = _CONTENT_ENCODING
_CONTENT.fields_by_name['language'].enum_type = base_dot_Language__pb2._LANGUAGE
_CONTENT.fields_by_name['compression'].message_type = base_dot_Compression__pb2._COMPRESSION
_CONTENT_TYPE.containing_type = _CONTENT
_CONTENT_ENCODING.containing_type = _CONTENT
DESCRIPTOR.message_types_by_name['Content'] = _CONTENT
_sym_db.RegisterFileDescriptor(DESCRIPTOR)

Content = _reflection.GeneratedProtocolMessageType('Content', (_message.Message,), dict(
  DESCRIPTOR = _CONTENT,
  __module__ = 'content.Content_pb2'
  # @@protoc_insertion_point(class_scope:Content)
  ))
_sym_db.RegisterMessage(Content)


DESCRIPTOR.has_options = True
DESCRIPTOR._options = _descriptor._ParseOptions(descriptor_pb2.FileOptions(), _b('\n\032io.bloombox.schema.contentB\016GenericContentP\001'))
# @@protoc_insertion_point(module_scope)
