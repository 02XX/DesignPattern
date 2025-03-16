#include "ConcreteAbstraction.hpp"
#include "ConcreteImplementations.hpp"
#include "ConcreteRefinedAbstraction.hpp"
#include <memory>

int main()
{
    std::unique_ptr<IImplementation> implementation1 = std::make_unique<ConcreteImplementations>();
    std::unique_ptr<IAbstraction> abstraction2 = std::make_unique<ConcreteAbstraction>(std::move(implementation1));

    abstraction2->Feature1();

    std::unique_ptr<IImplementation> implementation2 = std::make_unique<ConcreteImplementations>();
    std::unique_ptr<IRefinedAbstraction> refinedAbstraction =
        std::make_unique<ConcreteRefinedAbstraction>(std::move(implementation2));

    abstraction2->Feature1();
    refinedAbstraction->Feature2();
    return 0;
}