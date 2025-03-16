#pragma once
#include "IAbstraction.hpp"
#include <iostream>

class IRefinedAbstraction : public IAbstraction
{
  public:
    IRefinedAbstraction() = default;
    virtual ~IRefinedAbstraction() = default;

    virtual void Feature2() const = 0;
};
