#pragma once
#include "IAbstraction.hpp"
#include <iostream>

class ConcreteAbstraction : public IAbstraction
{
  public:
    ConcreteAbstraction(std::unique_ptr<IImplementation> implementation);
    virtual ~ConcreteAbstraction() = default;

    void Feature1() const override;
};