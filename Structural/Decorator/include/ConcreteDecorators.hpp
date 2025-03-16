#pragma once
#include "BaseDecorator.hpp"
#include <memory>

class ConcreteDecorator final : public BaseDecorator
{
  public:
    ConcreteDecorator(std::shared_ptr<IComponent> wrappedComponent);
    virtual ~ConcreteDecorator() = default;
    void Execute() const override;
};