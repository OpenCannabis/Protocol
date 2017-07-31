// Code generated by protoc-gen-go. DO NOT EDIT.
// source: content/ProductContent.proto

package schema

import proto "github.com/golang/protobuf/proto"
import fmt "fmt"
import math "math"

// Reference imports to suppress errors if they are not otherwise used.
var _ = proto.Marshal
var _ = fmt.Errorf
var _ = math.Inf

type ProductContent struct {
	// -- Basic Properties
	Name    *Name    `protobuf:"bytes,1,opt,name=name" json:"name,omitempty"`
	Summary *Content `protobuf:"bytes,2,opt,name=summary" json:"summary,omitempty"`
	Brand   *Brand   `protobuf:"bytes,3,opt,name=brand" json:"brand,omitempty"`
	// -- Media
	Media []*MediaItem `protobuf:"bytes,20,rep,name=media" json:"media,omitempty"`
	// -- Extended Attributes
	Usage  *Content `protobuf:"bytes,30,opt,name=usage" json:"usage,omitempty"`
	Dosage *Content `protobuf:"bytes,31,opt,name=dosage" json:"dosage,omitempty"`
	Advice *Content `protobuf:"bytes,32,opt,name=advice" json:"advice,omitempty"`
}

func (m *ProductContent) Reset()                    { *m = ProductContent{} }
func (m *ProductContent) String() string            { return proto.CompactTextString(m) }
func (*ProductContent) ProtoMessage()               {}
func (*ProductContent) Descriptor() ([]byte, []int) { return fileDescriptor10, []int{0} }

func (m *ProductContent) GetName() *Name {
	if m != nil {
		return m.Name
	}
	return nil
}

func (m *ProductContent) GetSummary() *Content {
	if m != nil {
		return m.Summary
	}
	return nil
}

func (m *ProductContent) GetBrand() *Brand {
	if m != nil {
		return m.Brand
	}
	return nil
}

func (m *ProductContent) GetMedia() []*MediaItem {
	if m != nil {
		return m.Media
	}
	return nil
}

func (m *ProductContent) GetUsage() *Content {
	if m != nil {
		return m.Usage
	}
	return nil
}

func (m *ProductContent) GetDosage() *Content {
	if m != nil {
		return m.Dosage
	}
	return nil
}

func (m *ProductContent) GetAdvice() *Content {
	if m != nil {
		return m.Advice
	}
	return nil
}

func init() {
	proto.RegisterType((*ProductContent)(nil), "ProductContent")
}

func init() { proto.RegisterFile("content/ProductContent.proto", fileDescriptor10) }

var fileDescriptor10 = []byte{
	// 260 bytes of a gzipped FileDescriptorProto
	0x1f, 0x8b, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0xff, 0x5c, 0x90, 0xdf, 0x4a, 0xc3, 0x30,
	0x14, 0xc6, 0x89, 0xb3, 0x55, 0xce, 0x40, 0x21, 0x2a, 0xc4, 0x31, 0x66, 0xd8, 0xd5, 0xae, 0x32,
	0x98, 0xbe, 0x80, 0xf5, 0x46, 0x2f, 0x94, 0xd1, 0x37, 0x48, 0x93, 0xe0, 0x0a, 0xa6, 0x47, 0xda,
	0x54, 0xf4, 0xb9, 0xbd, 0xf1, 0x52, 0x9a, 0x3f, 0x83, 0xf6, 0x26, 0x90, 0xdf, 0xf7, 0x3b, 0x7c,
	0x87, 0x03, 0x4b, 0x85, 0x8d, 0x33, 0x8d, 0xdb, 0xee, 0x5b, 0xd4, 0xbd, 0x72, 0x4f, 0xe1, 0x2b,
	0x3e, 0x5b, 0x74, 0xb8, 0xa0, 0x29, 0x7d, 0x93, 0xd6, 0x44, 0x76, 0x93, 0xd8, 0x58, 0xbd, 0x4a,
	0xb8, 0x68, 0x65, 0xa3, 0x93, 0x6b, 0x8d, 0xae, 0xe5, 0xf6, 0x75, 0x78, 0x5f, 0x9c, 0xb1, 0x01,
	0xaf, 0x7f, 0x09, 0x5c, 0x8c, 0xfb, 0xe8, 0x2d, 0x9c, 0x36, 0xd2, 0x1a, 0x46, 0x38, 0xd9, 0xcc,
	0x77, 0x99, 0x18, 0x0a, 0x4b, 0x8f, 0xe8, 0x1a, 0xce, 0xba, 0xde, 0x5a, 0xd9, 0xfe, 0xb0, 0x13,
	0x9f, 0x9e, 0x8b, 0x38, 0x55, 0xa6, 0x80, 0x2e, 0x21, 0xab, 0x86, 0x5e, 0x36, 0xf3, 0x46, 0x2e,
	0xfc, 0x16, 0x65, 0x80, 0x94, 0x43, 0xe6, 0x17, 0x61, 0xd7, 0x7c, 0xb6, 0x99, 0xef, 0x40, 0x1c,
	0x17, 0x2a, 0x43, 0x40, 0x57, 0x90, 0xf5, 0x9d, 0x7c, 0x37, 0x6c, 0x35, 0x69, 0x08, 0x98, 0x72,
	0xc8, 0x35, 0x7a, 0xe1, 0x6e, 0x22, 0x44, 0x3e, 0x18, 0x52, 0x7f, 0xd5, 0xca, 0x30, 0x3e, 0x35,
	0x02, 0x2f, 0x1e, 0x60, 0x51, 0xa3, 0xa8, 0x3e, 0x10, 0x6d, 0x85, 0xdf, 0xa2, 0x53, 0x07, 0x63,
	0xa5, 0x88, 0x67, 0x2b, 0x2e, 0x1f, 0x9d, 0x93, 0xea, 0x60, 0x74, 0x1c, 0x7b, 0x26, 0x7b, 0xf2,
	0x47, 0x48, 0x95, 0xfb, 0x93, 0xdd, 0xff, 0x07, 0x00, 0x00, 0xff, 0xff, 0x2b, 0xf8, 0xa8, 0x82,
	0xa9, 0x01, 0x00, 0x00,
}
