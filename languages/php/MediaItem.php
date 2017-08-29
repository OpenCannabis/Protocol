<?php
# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: media/MediaItem.proto

use Google\Protobuf\Internal\GPBType;
use Google\Protobuf\Internal\RepeatedField;
use Google\Protobuf\Internal\GPBUtil;

/**
 * Generated from protobuf message <code>MediaItem</code>
 */
class MediaItem extends \Google\Protobuf\Internal\Message
{
    /**
     * Generated from protobuf field <code>.MediaKey key = 1;</code>
     */
    private $key = null;
    /**
     * Generated from protobuf field <code>.MediaType type = 2;</code>
     */
    private $type = null;
    /**
     * Generated from protobuf field <code>string name = 3;</code>
     */
    private $name = '';

    public function __construct() {
        \GPBMetadata\Media\MediaItem::initOnce();
        parent::__construct();
    }

    /**
     * Generated from protobuf field <code>.MediaKey key = 1;</code>
     * @return \MediaKey
     */
    public function getKey()
    {
        return $this->key;
    }

    /**
     * Generated from protobuf field <code>.MediaKey key = 1;</code>
     * @param \MediaKey $var
     * @return $this
     */
    public function setKey($var)
    {
        GPBUtil::checkMessage($var, \MediaKey::class);
        $this->key = $var;

        return $this;
    }

    /**
     * Generated from protobuf field <code>.MediaType type = 2;</code>
     * @return \MediaType
     */
    public function getType()
    {
        return $this->type;
    }

    /**
     * Generated from protobuf field <code>.MediaType type = 2;</code>
     * @param \MediaType $var
     * @return $this
     */
    public function setType($var)
    {
        GPBUtil::checkMessage($var, \MediaType::class);
        $this->type = $var;

        return $this;
    }

    /**
     * Generated from protobuf field <code>string name = 3;</code>
     * @return string
     */
    public function getName()
    {
        return $this->name;
    }

    /**
     * Generated from protobuf field <code>string name = 3;</code>
     * @param string $var
     * @return $this
     */
    public function setName($var)
    {
        GPBUtil::checkString($var, True);
        $this->name = $var;

        return $this;
    }

}

