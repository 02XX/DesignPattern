
#include "Client.hpp"
#include "Creator/Creator1.hpp"
#include "Creator/Creator2.hpp"
#include "Creator/ICreator.hpp"
#include "Product/IProductA.hpp"
#include "Product/IProductB.hpp"
#include "Product/ProductA1.hpp"
#include "Product/ProductA2.hpp"
#include "Product/ProductB1.hpp"
#include "Product/ProductB2.hpp"
#include <iostream>
#include <memory>

int main()
{
    Client client1(std::make_unique<Creator1>());
    Client client2(std::make_unique<Creator2>());
    std::shared_ptr<IProductA> productA1 = client1.GetProductA();
    std::shared_ptr<IProductA> productA2 = client2.GetProductA();
    std::shared_ptr<IProductB> productB1 = client1.GetProductB();
    std::shared_ptr<IProductB> productB2 = client2.GetProductB();
    productA1->ToString();
    productA2->ToString();
    productB1->ToString();
    productB2->ToString();
    return 0;
}