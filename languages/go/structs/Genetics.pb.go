// Code generated by protoc-gen-go. DO NOT EDIT.
// source: structs/Genetics.proto

package schema

import proto "github.com/golang/protobuf/proto"
import fmt "fmt"
import math "math"

// Reference imports to suppress errors if they are not otherwise used.
var _ = proto.Marshal
var _ = fmt.Errorf
var _ = math.Inf

type Genetics struct {
	Male   *Name `protobuf:"bytes,1,opt,name=male" json:"male,omitempty"`
	Female *Name `protobuf:"bytes,2,opt,name=female" json:"female,omitempty"`
}

func (m *Genetics) Reset()                    { *m = Genetics{} }
func (m *Genetics) String() string            { return proto.CompactTextString(m) }
func (*Genetics) ProtoMessage()               {}
func (*Genetics) Descriptor() ([]byte, []int) { return fileDescriptor16, []int{0} }

func (m *Genetics) GetMale() *Name {
	if m != nil {
		return m.Male
	}
	return nil
}

func (m *Genetics) GetFemale() *Name {
	if m != nil {
		return m.Female
	}
	return nil
}

func init() {
	proto.RegisterType((*Genetics)(nil), "Genetics")
}

func init() { proto.RegisterFile("structs/Genetics.proto", fileDescriptor16) }

var fileDescriptor16 = []byte{
	// 151 bytes of a gzipped FileDescriptorProto
	0x1f, 0x8b, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0xff, 0xe2, 0x12, 0x2b, 0x2e, 0x29, 0x2a,
	0x4d, 0x2e, 0x29, 0xd6, 0x77, 0x4f, 0xcd, 0x4b, 0x2d, 0xc9, 0x4c, 0x2e, 0xd6, 0x2b, 0x28, 0xca,
	0x2f, 0xc9, 0x97, 0x12, 0x4a, 0xce, 0xcf, 0x2b, 0x49, 0xcd, 0x2b, 0xd1, 0xf7, 0x4b, 0xcc, 0x4d,
	0x85, 0x88, 0x29, 0xb9, 0x70, 0x71, 0xc0, 0x54, 0x09, 0x49, 0x72, 0xb1, 0xe4, 0x26, 0xe6, 0xa4,
	0x4a, 0x30, 0x2a, 0x30, 0x6a, 0x70, 0x1b, 0xb1, 0xea, 0x81, 0x94, 0x05, 0x81, 0x85, 0x84, 0x64,
	0xb9, 0xd8, 0xd2, 0x52, 0xc1, 0x92, 0x4c, 0xc8, 0x92, 0x50, 0x41, 0x27, 0x33, 0x2e, 0xc5, 0xcc,
	0x7c, 0xbd, 0xa4, 0x9c, 0xfc, 0xfc, 0xdc, 0xa4, 0xfc, 0x0a, 0xbd, 0xe2, 0xe4, 0x8c, 0xd4, 0xdc,
	0x44, 0x90, 0x0d, 0x29, 0xa5, 0xc9, 0x25, 0x7a, 0x10, 0xe7, 0x38, 0xf1, 0xc3, 0x2c, 0x0a, 0x86,
	0x38, 0x2f, 0x80, 0x31, 0x89, 0x0d, 0xec, 0x08, 0x63, 0x40, 0x00, 0x00, 0x00, 0xff, 0xff, 0x31,
	0x22, 0x1a, 0x7c, 0xb2, 0x00, 0x00, 0x00,
}
