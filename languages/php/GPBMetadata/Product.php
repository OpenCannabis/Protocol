<?php
# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: Product.proto

namespace GPBMetadata;

class Product
{
    public static $is_initialized = false;

    public static function initOnce() {
        $pool = \Google\Protobuf\Internal\DescriptorPool::getGeneratedPool();

        if (static::$is_initialized == true) {
          return;
        }
        \GPBMetadata\Base\ProductKey::initOnce();
        \GPBMetadata\Base\ProductType::initOnce();
        \GPBMetadata\Google\Protobuf\Any::initOnce();
        $pool->internalAddGeneratedFile(hex2bin(
            "0ad9010a0d50726f647563742e70726f746f1a16626173652f50726f6475" .
            "6374547970652e70726f746f1a19676f6f676c652f70726f746f6275662f" .
            "616e792e70726f746f22630a0750726f6475637412180a036b6579180120" .
            "01280b320b2e50726f647563744b6579121a0a047479706518022001280b" .
            "320c2e50726f647563745479706512220a046461746118032001280b3214" .
            "2e676f6f676c652e70726f746f6275662e416e7942280a17696f2e626c6f" .
            "6f6d626f782e736368656d612e62617365420b4261736550726f64756374" .
            "5001620670726f746f33"
        ));

        static::$is_initialized = true;
    }
}

