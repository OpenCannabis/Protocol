<?php
# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: base/ProductType.proto

namespace GPBMetadata\Base;

class ProductType
{
    public static $is_initialized = false;

    public static function initOnce() {
        $pool = \Google\Protobuf\Internal\DescriptorPool::getGeneratedPool();

        if (static::$is_initialized == true) {
          return;
        }
        \GPBMetadata\Base\ProductKind::initOnce();
        $pool->internalAddGeneratedFile(hex2bin(
            "0a7e0a16626173652f50726f64756374547970652e70726f746f22290a0b" .
            "50726f6475637454797065121a0a046b696e6418012001280e320c2e5072" .
            "6f647563744b696e6442310a17696f2e626c6f6f6d626f782e736368656d" .
            "612e62617365420f4261736550726f647563745479706548015001f80101" .
            "620670726f746f33"
        ));

        static::$is_initialized = true;
    }
}

