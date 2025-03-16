#pragma once
#include "Product/IProduct.hpp"
#include <iostream>
class ProductA final: public IProduct
{
  public:
    ProductA() = default;
    void ToString() const override;
};
