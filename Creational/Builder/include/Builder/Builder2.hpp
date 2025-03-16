#pragma once
#include "Builder/IBuilder.hpp"
#include "Product/ProductB.hpp"
class Builder2 final : public IBuilder
{
  private:
    ProductB mProduct;

  public:
    void Reset() override;
    void SetStepA(int param) override;
    void SetStepB(int param, std::string param2) override;
    void SetStepC() override;
    ProductB Build() const;
};