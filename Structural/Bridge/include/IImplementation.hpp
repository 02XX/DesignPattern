#pragma once

class IImplementation
{
  public:
    IImplementation() = default;
    virtual ~IImplementation() = default;

    virtual void Method1() const = 0;
    virtual void Method2() const = 0;
};