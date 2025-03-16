#pragma once
#include "Product/IProduct.hpp"
#include <memory>

class ICreator
{
  public:
    ICreator() = default;
    virtual ~ICreator() = default;
    virtual std::shared_ptr<IProduct> CreateProduct() const = 0;
};