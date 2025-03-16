#include "Builder/Builder1.hpp"
#include "Builder/Builder2.hpp"
#include "Builder/IBuilder.hpp"
#include <iostream>
#include <memory>

int main()
{
    std::unique_ptr<Builder1> builder1 = std::make_unique<Builder1>();
    builder1->SetStepA(1);
    builder1->SetStepB(2, "TWO");
    builder1->SetStepC();
    auto product1 = builder1->Build();

    std::unique_ptr<Builder2> builder2 = std::make_unique<Builder2>();
    builder2->SetStepA(1);
    builder2->SetStepB(2, "TWO");
    builder2->SetStepC();
    auto product2 = builder2->Build();

    product1.ToString();
    product2.ToString();
    return 0;
}
