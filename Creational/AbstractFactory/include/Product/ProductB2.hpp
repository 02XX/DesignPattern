#pragma once
#include "Product/IProductB.hpp"
#include <iostream>
class ProductB2 final: public IProductB
{
  public:
    ProductB2() = default;
    void ToString() const override;
};