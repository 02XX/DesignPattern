#pragma once

class IProductB
{
  public:
    IProductB() = default;
    virtual ~IProductB() = default;
    virtual void ToString() const = 0;
};