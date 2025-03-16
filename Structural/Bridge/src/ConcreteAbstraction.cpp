#include "ConcreteAbstraction.hpp"

void ConcreteAbstraction::Feature1() const
{
    std::cout << "===ConcreteAbstraction::Feature1===" << std::endl;
    mImplementation->Method1();
    std::cout << "===================================" << std::endl;
}

ConcreteAbstraction::ConcreteAbstraction(std::unique_ptr<IImplementation> implementation)
{
    mImplementation = std::move(implementation);
}
