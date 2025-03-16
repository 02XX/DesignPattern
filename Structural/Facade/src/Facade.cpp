#include "Facade.hpp"

Facade::Facade()
{
    mSubSystemA = std::make_shared<SubSystemA>();
    mSubSystemB = std::make_shared<SubSystemB>();
}

void Facade::Operation() const
{
    mSubSystemA->OperationA();
    mSubSystemB->OperationB();
}
