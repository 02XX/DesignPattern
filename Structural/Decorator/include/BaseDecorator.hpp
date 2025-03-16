#pragma once
#include "IComponent.hpp"
#include <iostream>
#include <memory>

class BaseDecorator : public IComponent
{
  private:
    std::shared_ptr<IComponent> mWrappedComponent;

  public:
    BaseDecorator(std::shared_ptr<IComponent> wrappedComponent);
    virtual ~BaseDecorator() = default;

    virtual void Execute() const override;
};