#pragma once
#include "Product/IProductA.hpp"
#include <iostream>
class ProductA1 final: public IProductA
{
  public:
    ProductA1() = default;
    void ToString() const override;
};