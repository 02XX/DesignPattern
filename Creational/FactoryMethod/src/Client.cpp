#include "Client.hpp"

Client::Client(std::unique_ptr<ICreator> creator) : mCreator(std::move(creator))
{
}
std::shared_ptr<IProduct> Client::GetProduct() const
{
    return mCreator->CreateProduct();
}
