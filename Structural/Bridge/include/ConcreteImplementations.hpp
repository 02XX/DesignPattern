#pragma once
#include "IImplementation.hpp"
#include <iostream>


class ConcreteImplementations : public IImplementation
{
  public:
    ConcreteImplementations() = default;
    virtual ~ConcreteImplementations() = default;

    void Method1() const override;
    void Method2() const override;
};