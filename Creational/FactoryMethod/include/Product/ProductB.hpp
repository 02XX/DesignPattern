#pragma once
#include "Product/IProduct.hpp"
#include <iostream>
class ProductB final : public IProduct
{
  public:
    ProductB() = default;
    void ToString() const override;
};