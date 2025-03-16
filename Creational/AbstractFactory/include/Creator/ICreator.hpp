#pragma once
#include "Product/IProductA.hpp"
#include "Product/IProductB.hpp"
#include <memory>
class ICreator
{
  public:
    ICreator() = default;
    virtual ~ICreator() = default;
    virtual std::shared_ptr<IProductA> CreateProductA() const = 0;
    virtual std::shared_ptr<IProductB> CreateProductB() const = 0;
};