#pragma once
#include "Product/IProductB.hpp"
#include <iostream>
class ProductB1 final: public IProductB
{
  public:
    ProductB1() = default;
    void ToString() const override;
};