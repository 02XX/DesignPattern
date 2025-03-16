#pragma once
#include "Builder/IBuilder.hpp"
#include "Product/ProductA.hpp"
class Builder1 final : public IBuilder
{
  private:
    ProductA mProduct;

  public:
    void Reset() override;
    void SetStepA(int param) override;
    void SetStepB(int param, std::string param2) override;
    void SetStepC() override;
    ProductA Build() const;
};