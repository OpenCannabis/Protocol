// Code generated by protoc-gen-go. DO NOT EDIT.
// source: content/Name.proto

package schema

import proto "github.com/golang/protobuf/proto"
import fmt "fmt"
import math "math"

// Reference imports to suppress errors if they are not otherwise used.
var _ = proto.Marshal
var _ = fmt.Errorf
var _ = math.Inf

type Name struct {
	Primary string `protobuf:"bytes,1,opt,name=primary" json:"primary,omitempty"`
	Display string `protobuf:"bytes,2,opt,name=display" json:"display,omitempty"`
}

func (m *Name) Reset()                    { *m = Name{} }
func (m *Name) String() string            { return proto.CompactTextString(m) }
func (*Name) ProtoMessage()               {}
func (*Name) Descriptor() ([]byte, []int) { return fileDescriptor9, []int{0} }

func (m *Name) GetPrimary() string {
	if m != nil {
		return m.Primary
	}
	return ""
}

func (m *Name) GetDisplay() string {
	if m != nil {
		return m.Display
	}
	return ""
}

func init() {
	proto.RegisterType((*Name)(nil), "Name")
}

func init() { proto.RegisterFile("content/Name.proto", fileDescriptor9) }

var fileDescriptor9 = []byte{
	// 123 bytes of a gzipped FileDescriptorProto
	0x1f, 0x8b, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0xff, 0xe2, 0x12, 0x4a, 0xce, 0xcf, 0x2b,
	0x49, 0xcd, 0x2b, 0xd1, 0xf7, 0x4b, 0xcc, 0x4d, 0xd5, 0x2b, 0x28, 0xca, 0x2f, 0xc9, 0x57, 0xb2,
	0xe2, 0x62, 0x01, 0xf1, 0x84, 0x24, 0xb8, 0xd8, 0x0b, 0x8a, 0x32, 0x73, 0x13, 0x8b, 0x2a, 0x25,
	0x18, 0x15, 0x18, 0x35, 0x38, 0x83, 0x60, 0x5c, 0x90, 0x4c, 0x4a, 0x66, 0x71, 0x41, 0x4e, 0x62,
	0xa5, 0x04, 0x13, 0x44, 0x06, 0xca, 0x75, 0xd2, 0xe6, 0x92, 0xca, 0xcc, 0xd7, 0x4b, 0xca, 0xc9,
	0xcf, 0xcf, 0x4d, 0xca, 0xaf, 0xd0, 0x2b, 0x4e, 0xce, 0x48, 0xcd, 0x4d, 0xd4, 0x83, 0x5a, 0xe2,
	0xc4, 0x0d, 0x32, 0xd7, 0x19, 0xc2, 0x09, 0x60, 0x4c, 0x62, 0x03, 0xdb, 0x67, 0x0c, 0x08, 0x00,
	0x00, 0xff, 0xff, 0xae, 0x1c, 0xf1, 0x97, 0x85, 0x00, 0x00, 0x00,
}
