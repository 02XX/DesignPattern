#include "ConcreteRefinedAbstraction.hpp"

void ConcreteRefinedAbstraction::Feature2() const
{
    std::cout << "===ConcreteRefinedAbstraction::Feature2===" << std::endl;
    mImplementation->Method2();
    std::cout << "==========================================" << std::endl;
}

ConcreteRefinedAbstraction::ConcreteRefinedAbstraction(std::unique_ptr<IImplementation> implementation)
{
    mImplementation = std::move(implementation);
}

void ConcreteRefinedAbstraction::Feature1() const
{
    std::cout << "===ConcreteRefinedAbstraction::Feature1===" << std::endl;
    mImplementation->Method1();
    std::cout << "==========================================" << std::endl;
}
