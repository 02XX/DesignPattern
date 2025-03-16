#include "Creator/CreatorB.hpp"

std::shared_ptr<IProduct> CreatorB::CreateProduct() const
{
    return std::make_shared<ProductB>();
}