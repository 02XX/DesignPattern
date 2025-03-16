#include "AdditionalFacade.hpp"
#include "Facade.hpp"
#include "SubSystemA.hpp"
#include "SubSystemB.hpp"


#include <memory>

int main()
{
    std::unique_ptr<Facade> facade = std::make_unique<AdditionalFacade>();
    facade->Operation();
    std::unique_ptr<AdditionalFacade> additionalFacade = std::make_unique<AdditionalFacade>();
    additionalFacade->AdditionalOperation();
    return 0;
}