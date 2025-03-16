#pragma once
#include "IRefinedAbstraction.hpp"
#include <iostream>

class ConcreteRefinedAbstraction : public IRefinedAbstraction
{
  public:
    ConcreteRefinedAbstraction(std::unique_ptr<IImplementation> implementation);
    virtual ~ConcreteRefinedAbstraction() = default;
    void Feature1() const override;
    void Feature2() const override;
};