#include "Client.hpp"

Client::Client(std::unique_ptr<ICreator> creator) : mCreator(std::move(creator))
{
}
std::shared_ptr<IProductA> Client::GetProductA() const
{
    return mCreator->CreateProductA();
}
std::shared_ptr<IProductB> Client::GetProductB() const
{
    return mCreator->CreateProductB();
}