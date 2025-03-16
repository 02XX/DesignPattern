#pragma once
#include "Creator/ICreator.hpp"
#include "Product/IProductA.hpp"
#include "Product/IProductB.hpp"
#include "Product/ProductA1.hpp"
#include "Product/ProductB1.hpp"
class Creator1 final : public ICreator
{
  public:
    Creator1() = default;
    std::shared_ptr<IProductA> CreateProductA() const override;
    std::shared_ptr<IProductB> CreateProductB() const override;
};