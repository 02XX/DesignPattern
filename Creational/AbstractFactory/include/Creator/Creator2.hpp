#pragma once
#include "Creator/ICreator.hpp"
#include "Product/IProductA.hpp"
#include "Product/IProductB.hpp"
#include "Product/ProductA2.hpp"
#include "Product/ProductB2.hpp"

class Creator2 final : public ICreator
{
  public:
    Creator2() = default;
    std::shared_ptr<IProductA> CreateProductA() const override;
    std::shared_ptr<IProductB> CreateProductB() const override;
};