// Code generated by protoc-gen-go. DO NOT EDIT.
// source: media/MediaItem.proto

package schema

import proto "github.com/golang/protobuf/proto"
import fmt "fmt"
import math "math"

// Reference imports to suppress errors if they are not otherwise used.
var _ = proto.Marshal
var _ = fmt.Errorf
var _ = math.Inf

type MediaItem struct {
	Key  *MediaKey  `protobuf:"bytes,1,opt,name=key" json:"key,omitempty"`
	Type *MediaType `protobuf:"bytes,2,opt,name=type" json:"type,omitempty"`
	Name string     `protobuf:"bytes,3,opt,name=name" json:"name,omitempty"`
}

func (m *MediaItem) Reset()                    { *m = MediaItem{} }
func (m *MediaItem) String() string            { return proto.CompactTextString(m) }
func (*MediaItem) ProtoMessage()               {}
func (*MediaItem) Descriptor() ([]byte, []int) { return fileDescriptor12, []int{0} }

func (m *MediaItem) GetKey() *MediaKey {
	if m != nil {
		return m.Key
	}
	return nil
}

func (m *MediaItem) GetType() *MediaType {
	if m != nil {
		return m.Type
	}
	return nil
}

func (m *MediaItem) GetName() string {
	if m != nil {
		return m.Name
	}
	return ""
}

func init() {
	proto.RegisterType((*MediaItem)(nil), "MediaItem")
}

func init() { proto.RegisterFile("media/MediaItem.proto", fileDescriptor12) }

var fileDescriptor12 = []byte{
	// 174 bytes of a gzipped FileDescriptorProto
	0x1f, 0x8b, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0xff, 0xe2, 0x12, 0xcd, 0x4d, 0x4d, 0xc9,
	0x4c, 0xd4, 0xf7, 0x05, 0x91, 0x9e, 0x25, 0xa9, 0xb9, 0x7a, 0x05, 0x45, 0xf9, 0x25, 0xf9, 0x52,
	0x22, 0x48, 0xc2, 0xde, 0xa9, 0x95, 0x50, 0x51, 0x64, 0xc5, 0x21, 0x95, 0x05, 0xa9, 0x10, 0x61,
	0xa5, 0x18, 0x2e, 0x4e, 0xb8, 0x7e, 0x21, 0x69, 0x2e, 0xe6, 0xec, 0xd4, 0x4a, 0x09, 0x46, 0x05,
	0x46, 0x0d, 0x6e, 0x23, 0x4e, 0x3d, 0x98, 0x09, 0x41, 0x20, 0x51, 0x21, 0x39, 0x2e, 0x96, 0x92,
	0xca, 0x82, 0x54, 0x09, 0x26, 0xb0, 0x2c, 0x97, 0x1e, 0xdc, 0xa4, 0x20, 0xb0, 0xb8, 0x90, 0x10,
	0x17, 0x4b, 0x5e, 0x62, 0x6e, 0xaa, 0x04, 0xb3, 0x02, 0xa3, 0x06, 0x67, 0x10, 0x98, 0xed, 0x64,
	0xc0, 0x25, 0x91, 0x99, 0xaf, 0x97, 0x94, 0x93, 0x9f, 0x9f, 0x9b, 0x94, 0x5f, 0xa1, 0x57, 0x9c,
	0x9c, 0x91, 0x9a, 0x9b, 0xa8, 0x07, 0x76, 0x89, 0x13, 0xaf, 0x63, 0x49, 0x49, 0x62, 0x72, 0x46,
	0x6a, 0x0a, 0xd8, 0x20, 0x0f, 0xc6, 0x00, 0xc6, 0x1f, 0x8c, 0x8c, 0x49, 0x6c, 0x60, 0x67, 0x19,
	0x03, 0x02, 0x00, 0x00, 0xff, 0xff, 0xeb, 0xf4, 0x23, 0xa2, 0xdc, 0x00, 0x00, 0x00,
}
