
# OpenCannabis
## Release __1.9.0-alpha3__

_An Open Model for the Legal Cannabis Industry_


### Intro

This repository presents a standard datamodel for the cannabis industry, with support for various product types, pricing, discounts, test result data, and more. As our product line at [Bloombox](https://bloombox.io) has grown and matured, we've found it increasingly difficult to integrate as more software providers and solutions pop up.

With an eye toward the future, this model is designed to support `proto3`, gRPC, and nearly every language a cannabis industry developer could want to use.


### Why this model?

We have tried our best to address some of the most frequent concerns we come across when
working with cultivators, manufacturers/distillers, distributors, and retail operators.

- Open adoption and contribution allows us all to skip reinventing the wheel
- Consistently expressing data could be a huge win for our nascent industry
- Adapters or direct implementation eases integration between providers - meaning happier
  customers and stakeholders!
- Adopting tech like [Google Protobuf]() allows universal specification and language
  agnostic operation


### Source code layout

In the `schema` folder, you'll find source protobuf files for the OpenCannabis schema. Major
schema categories include:

- `base`: Basic models or enumerations shared commonly amongst higher-level categories.
- `contact`: Models for contact info, used across the schema.
- `content`: Models for holding and specifying forms of displayable content.
- `geo`: Addresses, geopoints, and so on.
- `media`: Images, videos, and other rich media objects.
- `products`: Concrete, high-level product models, such as `Flower` and `Extract`.
- `structs`: Commonly-referenced structures and enumerations such as `Grow` and `Species`. Pricing, testing, and other extensions are stored under `structs`.

After executing `make`, in the `languages` folder, you'll find a language implementation
for the full set of schemas in each of the following languages.

Additionally, each of the compiled langauge packages for schemas is available in its own repository, and via dependency management tools for that language. See the repo for your platform for more info:
- [ActionScript 3](https://github.com/OpenCannabis/schema-as3)
- [C++](https://github.com/OpenCannabis/schema-cpp)
- [C#](https://github.com/OpenCannabis/schema-csharp)
- [Java](https://github.com/OpenCannabis/schema-java)
- [JavaScript](https://github.com/OpenCannabis/schema-js)
- [PHP](https://github.com/OpenCannabis/schema-php)
- [Python](https://github.com/OpenCannabis/schema-python)
- [Ruby](https://github.com/OpenCannabis/schema-ruby)
- [Swift](https://github.com/OpenCannabis/schema-swift)
- [Objective-C](https://github.com/OpenCannabis/schema-objc)
- [Go](https://github.com/OpenCannabis/schema-go)


### Usage

Coming soon.


### Contributing

Coming soon.

