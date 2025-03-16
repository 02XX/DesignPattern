#include "Client.hpp"
#include "Creator/CreatorA.hpp"
#include "Creator/CreatorB.hpp"
#include <iostream>
#include <memory>

int main()
{

    Client clientA(std::make_unique<CreatorA>());
    Client clientB(std::make_unique<CreatorB>());

    std::shared_ptr<IProduct> productA = clientA.GetProduct();
    std::shared_ptr<IProduct> productB = clientB.GetProduct();
    productA->ToString();
    productB->ToString();
    return 0;
}