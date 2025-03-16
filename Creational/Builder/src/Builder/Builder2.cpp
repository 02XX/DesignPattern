#include "Builder/Builder2.hpp"

void Builder2::Reset()
{
    mProduct = ProductB();
}

void Builder2::SetStepA(int param)
{
    mProduct.SetConfigure("StepA*");
    mProduct.SetConfigure(std::to_string(param));
}

void Builder2::SetStepB(int param, std::string param2)
{
    mProduct.SetConfigure("StepB*");
    mProduct.SetConfigure(std::to_string(param));
    mProduct.SetConfigure(param2);
}

void Builder2::SetStepC()
{
    mProduct.SetConfigure("StepC*");
}
ProductB Builder2::Build() const
{
    return mProduct;
}