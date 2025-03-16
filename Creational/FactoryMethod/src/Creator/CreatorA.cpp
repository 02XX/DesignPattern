#include "Creator/CreatorA.hpp"

std::shared_ptr<IProduct> CreatorA::CreateProduct() const
{
    return std::make_shared<ProductA>();
}