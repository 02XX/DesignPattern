
#include "BaseDecorator.hpp"
#include "ConcreteComponent.hpp"
#include "ConcreteDecorators.hpp"
#include <memory>

int main()
{
    auto component = std::make_shared<ConcreteComponent>();
    auto decorator = std::make_shared<ConcreteDecorator>(component);
    decorator->Execute();
    return 0;
}