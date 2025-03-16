#include "Creator/Creator1.hpp"

std::shared_ptr<IProductA> Creator1::CreateProductA() const
{
    return std::make_shared<ProductA1>();
}
std::shared_ptr<IProductB> Creator1::CreateProductB() const
{
    return std::make_shared<ProductB1>();
}
