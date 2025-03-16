#pragma once
#include "IImplementation.hpp"
#include <memory>
class IAbstraction
{
  protected:
    std::unique_ptr<IImplementation> mImplementation;

  public:
    IAbstraction() = default;
    virtual ~IAbstraction() = default;

    virtual void Feature1() const = 0;
};