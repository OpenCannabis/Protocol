<?php
# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: media/MediaItem.proto

namespace GPBMetadata\Media;

class MediaItem
{
    public static $is_initialized = false;

    public static function initOnce() {
        $pool = \Google\Protobuf\Internal\DescriptorPool::getGeneratedPool();

        if (static::$is_initialized == true) {
          return;
        }
        \GPBMetadata\Media\MediaKey::initOnce();
        \GPBMetadata\Media\MediaType::initOnce();
        $pool->internalAddGeneratedFile(hex2bin(
            "0ab5010a156d656469612f4d656469614974656d2e70726f746f1a156d65" .
            "6469612f4d65646961547970652e70726f746f224b0a094d656469614974" .
            "656d12160a036b657918012001280b32092e4d656469614b657912180a04" .
            "7479706518022001280b320a2e4d6564696154797065120c0a046e616d65" .
            "18032001280942300a18696f2e626c6f6f6d626f782e736368656d612e6d" .
            "65646961420d41747461636865644d6564696148015001f8010162067072" .
            "6f746f33"
        ));

        static::$is_initialized = true;
    }
}

