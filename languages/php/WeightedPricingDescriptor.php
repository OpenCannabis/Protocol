<?php
# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: structs/pricing/PricingDescriptor.proto

use Google\Protobuf\Internal\GPBType;
use Google\Protobuf\Internal\RepeatedField;
use Google\Protobuf\Internal\GPBUtil;

/**
 * Generated from protobuf message <code>WeightedPricingDescriptor</code>
 */
class WeightedPricingDescriptor extends \Google\Protobuf\Internal\Message
{
    /**
     * Generated from protobuf field <code>.PricingWeightTier weight = 1;</code>
     */
    private $weight = 0;
    /**
     * Generated from protobuf field <code>.UnitPricingDescriptor tier = 2;</code>
     */
    private $tier = null;
    /**
     * Generated from protobuf field <code>float weightInGrams = 3;</code>
     */
    private $weightInGrams = 0.0;

    public function __construct() {
        \GPBMetadata\Structs\Pricing\PricingDescriptor::initOnce();
        parent::__construct();
    }

    /**
     * Generated from protobuf field <code>.PricingWeightTier weight = 1;</code>
     * @return int
     */
    public function getWeight()
    {
        return $this->weight;
    }

    /**
     * Generated from protobuf field <code>.PricingWeightTier weight = 1;</code>
     * @param int $var
     * @return $this
     */
    public function setWeight($var)
    {
        GPBUtil::checkEnum($var, \PricingWeightTier::class);
        $this->weight = $var;

        return $this;
    }

    /**
     * Generated from protobuf field <code>.UnitPricingDescriptor tier = 2;</code>
     * @return \UnitPricingDescriptor
     */
    public function getTier()
    {
        return $this->tier;
    }

    /**
     * Generated from protobuf field <code>.UnitPricingDescriptor tier = 2;</code>
     * @param \UnitPricingDescriptor $var
     * @return $this
     */
    public function setTier($var)
    {
        GPBUtil::checkMessage($var, \UnitPricingDescriptor::class);
        $this->tier = $var;

        return $this;
    }

    /**
     * Generated from protobuf field <code>float weightInGrams = 3;</code>
     * @return float
     */
    public function getWeightInGrams()
    {
        return $this->weightInGrams;
    }

    /**
     * Generated from protobuf field <code>float weightInGrams = 3;</code>
     * @param float $var
     * @return $this
     */
    public function setWeightInGrams($var)
    {
        GPBUtil::checkFloat($var);
        $this->weightInGrams = $var;

        return $this;
    }

}

