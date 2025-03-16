#pragma once
#include "Creator/ICreator.hpp"
#include "Product/ProductB.hpp"

class CreatorB final : public ICreator
{
  public:
    CreatorB() = default;
    std::shared_ptr<IProduct> CreateProduct() const override;
};