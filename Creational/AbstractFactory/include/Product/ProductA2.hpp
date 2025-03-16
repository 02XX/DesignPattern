#pragma once
#include "Product/IProductA.hpp"
#include <iostream>
class ProductA2 final: public IProductA
{
  public:
    ProductA2() = default;
    void ToString() const override;
};