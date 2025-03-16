#pragma once
#include "IComponent.hpp"
#include <iostream>
class ConcreteComponent final : public IComponent
{
  public:
    ConcreteComponent() = default;
    virtual ~ConcreteComponent() = default;

    void Execute() const override;
};