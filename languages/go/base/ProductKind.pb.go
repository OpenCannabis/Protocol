// Code generated by protoc-gen-go. DO NOT EDIT.
// source: base/ProductKind.proto

package schema

import proto "github.com/golang/protobuf/proto"
import fmt "fmt"
import math "math"

// Reference imports to suppress errors if they are not otherwise used.
var _ = proto.Marshal
var _ = fmt.Errorf
var _ = math.Inf

type ProductKind int32

const (
	ProductKind_FLOWERS     ProductKind = 0
	ProductKind_EDIBLES     ProductKind = 1
	ProductKind_EXTRACTS    ProductKind = 2
	ProductKind_PREROLLS    ProductKind = 3
	ProductKind_APOTHECARY  ProductKind = 4
	ProductKind_CARTRIDGES  ProductKind = 5
	ProductKind_PLANTS      ProductKind = 6
	ProductKind_MERCHANDISE ProductKind = 7
)

var ProductKind_name = map[int32]string{
	0: "FLOWERS",
	1: "EDIBLES",
	2: "EXTRACTS",
	3: "PREROLLS",
	4: "APOTHECARY",
	5: "CARTRIDGES",
	6: "PLANTS",
	7: "MERCHANDISE",
}
var ProductKind_value = map[string]int32{
	"FLOWERS":     0,
	"EDIBLES":     1,
	"EXTRACTS":    2,
	"PREROLLS":    3,
	"APOTHECARY":  4,
	"CARTRIDGES":  5,
	"PLANTS":      6,
	"MERCHANDISE": 7,
}

func (x ProductKind) String() string {
	return proto.EnumName(ProductKind_name, int32(x))
}
func (ProductKind) EnumDescriptor() ([]byte, []int) { return fileDescriptor4, []int{0} }

func init() {
	proto.RegisterEnum("ProductKind", ProductKind_name, ProductKind_value)
}

func init() { proto.RegisterFile("base/ProductKind.proto", fileDescriptor4) }

var fileDescriptor4 = []byte{
	// 200 bytes of a gzipped FileDescriptorProto
	0x1f, 0x8b, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0xff, 0x4c, 0xce, 0xcf, 0x4a, 0xc4, 0x30,
	0x10, 0x80, 0x71, 0xeb, 0x9f, 0xae, 0x4c, 0xc5, 0x1d, 0x72, 0xd0, 0x77, 0x10, 0x89, 0x07, 0x9f,
	0x20, 0x49, 0x47, 0xb7, 0x18, 0xb7, 0x61, 0x12, 0x50, 0x8f, 0xcd, 0x6e, 0xc1, 0x05, 0x6b, 0xa4,
	0xad, 0xe0, 0xd1, 0x47, 0x97, 0x78, 0xea, 0xf1, 0xfb, 0x4e, 0x3f, 0xb8, 0x8a, 0xdd, 0xd4, 0xdf,
	0xb9, 0x31, 0xed, 0xbf, 0x77, 0xf3, 0xd3, 0xe1, 0x73, 0x2f, 0xbf, 0xc6, 0x34, 0xa7, 0x9b, 0xdf,
	0x02, 0xaa, 0xc5, 0x15, 0x15, 0xac, 0x1e, 0x6c, 0xfb, 0x42, 0xec, 0xf1, 0x28, 0x07, 0xd5, 0x8d,
	0xb6, 0xe4, 0xb1, 0x10, 0x17, 0x70, 0x4e, 0xaf, 0x81, 0x95, 0x09, 0x1e, 0x8f, 0x73, 0x39, 0x26,
	0x6e, 0xad, 0xf5, 0x78, 0x22, 0x2e, 0x01, 0x94, 0x6b, 0xc3, 0x86, 0x8c, 0xe2, 0x37, 0x3c, 0xcd,
	0x6d, 0x14, 0x07, 0x6e, 0xea, 0x47, 0xf2, 0x78, 0x26, 0x00, 0x4a, 0x67, 0xd5, 0x36, 0x78, 0x2c,
	0xc5, 0x1a, 0xaa, 0x67, 0x62, 0xb3, 0x51, 0xdb, 0xba, 0xf1, 0x84, 0x2b, 0x7d, 0x0b, 0xd7, 0x87,
	0x24, 0xe3, 0x47, 0x4a, 0x43, 0x4c, 0x3f, 0x72, 0xda, 0xbd, 0xf7, 0x43, 0x27, 0xb3, 0x57, 0xaf,
	0x75, 0x37, 0xf5, 0x0b, 0x9e, 0x2b, 0x62, 0xf9, 0xef, 0xbe, 0xff, 0x0b, 0x00, 0x00, 0xff, 0xff,
	0x8a, 0xbc, 0x16, 0x96, 0xd1, 0x00, 0x00, 0x00,
}
