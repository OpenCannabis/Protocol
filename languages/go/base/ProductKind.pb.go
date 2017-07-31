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
	// 206 bytes of a gzipped FileDescriptorProto
	0x1f, 0x8b, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0xff, 0x4c, 0xce, 0xcf, 0x4a, 0x03, 0x31,
	0x10, 0x80, 0x71, 0xe3, 0x9f, 0xad, 0xcc, 0x8a, 0x1d, 0x72, 0xd0, 0x77, 0xf0, 0x10, 0x11, 0x9f,
	0x20, 0xc9, 0x8e, 0xee, 0x62, 0xec, 0x86, 0x49, 0x40, 0x3d, 0x6e, 0xda, 0x05, 0x0b, 0xd6, 0x48,
	0xb7, 0x82, 0x47, 0x1f, 0xdb, 0xa3, 0xa4, 0xa7, 0x1e, 0xbf, 0xef, 0xf4, 0x83, 0xab, 0x34, 0x4c,
	0xe3, 0xad, 0xdf, 0xe6, 0xd5, 0xf7, 0x72, 0xf7, 0xb4, 0xfe, 0x5c, 0xa9, 0xaf, 0x6d, 0xde, 0xe5,
	0x9b, 0x5f, 0x01, 0xf5, 0xc1, 0x95, 0x35, 0xcc, 0x1e, 0x5c, 0xff, 0x42, 0x1c, 0xf0, 0xa8, 0x04,
	0x35, 0x9d, 0x71, 0x14, 0x50, 0xc8, 0x0b, 0x38, 0xa7, 0xd7, 0xc8, 0xda, 0xc6, 0x80, 0xc7, 0xa5,
	0x3c, 0x13, 0xf7, 0xce, 0x05, 0x3c, 0x91, 0x97, 0x00, 0xda, 0xf7, 0xb1, 0x25, 0xab, 0xf9, 0x0d,
	0x4f, 0x4b, 0x5b, 0xcd, 0x91, 0xbb, 0xe6, 0x91, 0x02, 0x9e, 0x49, 0x80, 0xca, 0x3b, 0xbd, 0x88,
	0x01, 0x2b, 0x39, 0x87, 0xfa, 0x99, 0xd8, 0xb6, 0x7a, 0xd1, 0x74, 0x81, 0x70, 0x66, 0xee, 0xe0,
	0x7a, 0x9d, 0x55, 0xfa, 0xc8, 0x79, 0x93, 0xf2, 0x8f, 0x9a, 0x96, 0xef, 0xe3, 0x66, 0x50, 0xc5,
	0x6b, 0xe6, 0x66, 0x98, 0xc6, 0x03, 0x5e, 0x2b, 0xbc, 0xf8, 0x13, 0x22, 0x55, 0x7b, 0xfc, 0xfd,
	0x7f, 0x00, 0x00, 0x00, 0xff, 0xff, 0x25, 0x68, 0xb0, 0xbc, 0xd6, 0x00, 0x00, 0x00,
}
