#include "Prototype.hpp"
#include "SubPrototype.hpp"
#include <iostream>
#include <memory>

int main()
{
    Prototype prototype(1, "one");
    prototype.ToString();
    std::shared_ptr<Prototype> prototypeCloned = std::static_pointer_cast<Prototype>(prototype.Clone());
    prototypeCloned->ToString();

    SubPrototype subPrototype(2, "two", 1, "one");
    subPrototype.ToString();
    std::shared_ptr<SubPrototype> subPrototypeCloned = std::static_pointer_cast<SubPrototype>(subPrototype.Clone());
    subPrototypeCloned->ToString();
    return 0;
}