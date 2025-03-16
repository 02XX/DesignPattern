#include "AdditionalFacade.hpp"

void AdditionalFacade::AdditionalOperation() const
{
    Facade::Operation();
    std::cout << "AdditionalFacade::AdditionalOperation" << std::endl;
}
