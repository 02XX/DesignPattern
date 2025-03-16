#include "Creator/Creator2.hpp"
std::shared_ptr<IProductA> Creator2::CreateProductA() const
{
    return std::make_shared<ProductA2>();
}
std::shared_ptr<IProductB> Creator2::CreateProductB() const
{
    return std::make_shared<ProductB2>();
}