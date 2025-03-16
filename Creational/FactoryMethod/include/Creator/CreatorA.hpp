#pragma once
#include "Creator/ICreator.hpp"
#include "Product/ProductA.hpp"

class CreatorA final: public ICreator
{
  public:
    CreatorA() = default;
    std::shared_ptr<IProduct> CreateProduct() const override;
};