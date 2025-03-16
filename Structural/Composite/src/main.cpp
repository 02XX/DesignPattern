
#include "Composite.hpp"
#include "Leaf.hpp"
#include <memory>

int main()
{
    auto leaf1 = std::make_shared<Leaf>(1);
    auto leaf2 = std::make_shared<Leaf>(2);
    auto leaf3 = std::make_shared<Leaf>(3);
    auto leaf4 = std::make_shared<Leaf>(4);
    auto leaf5 = std::make_shared<Leaf>(5);
    auto leaf6 = std::make_shared<Leaf>(6);
    auto leaf7 = std::make_shared<Leaf>(7);
    auto leaf8 = std::make_shared<Leaf>(8);

    auto composite1 = std::make_shared<Composite>();
    auto composite2 = std::make_shared<Composite>();
    auto composite3 = std::make_shared<Composite>();
    auto composite4 = std::make_shared<Composite>();

    composite1->AddComponent(leaf1);
    composite1->AddComponent(leaf2);
    composite1->AddComponent(leaf3);

    composite2->AddComponent(leaf4);
    composite2->AddComponent(leaf5);

    composite3->AddComponent(leaf6);
    composite3->AddComponent(composite2);

    composite4->AddComponent(leaf7);
    composite4->AddComponent(leaf8);
    composite4->AddComponent(composite3);
    composite4->AddComponent(composite1);

    composite4->Execute();
    return 0;
}