#include "ConcreteDecorators.hpp"
#include <iostream>

void ConcreteDecorator::Execute() const
{
    std::cout << "==ConcreteDecorator==" << std::endl;
    BaseDecorator::Execute();
    std::cout << "=====================" << std::endl;
}

ConcreteDecorator::ConcreteDecorator(std::shared_ptr<IComponent> wrappedComponent) : BaseDecorator(wrappedComponent)
{
}
