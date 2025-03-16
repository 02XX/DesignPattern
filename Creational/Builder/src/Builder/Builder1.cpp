#include "Builder/Builder1.hpp"

void Builder1::Reset()
{
    mProduct = ProductA();
}

void Builder1::SetStepA(int param)
{
    mProduct.SetConfigure("StepA");
    mProduct.SetConfigure(std::to_string(param));
}

void Builder1::SetStepB(int param, std::string param2)
{
    mProduct.SetConfigure("StepB");
    mProduct.SetConfigure(std::to_string(param));
    mProduct.SetConfigure(param2);
}

void Builder1::SetStepC()
{
    mProduct.SetConfigure("StepC");
}

ProductA Builder1::Build() const
{
    return mProduct;
}
