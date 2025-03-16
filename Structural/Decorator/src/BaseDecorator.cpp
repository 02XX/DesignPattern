#include "BaseDecorator.hpp"

BaseDecorator::BaseDecorator(std::shared_ptr<IComponent> wrappedComponent) : mWrappedComponent(wrappedComponent)
{
}
void BaseDecorator::Execute() const
{
    std::cout << "===BaseDecorator===" << std::endl;
    mWrappedComponent->Execute();
    std::cout << "===================" << std::endl;
}
