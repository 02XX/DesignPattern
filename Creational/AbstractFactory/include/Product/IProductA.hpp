#pragma once

class IProductA
{
  public:
    IProductA() = default;
    virtual ~IProductA() = default;
    virtual void ToString() const = 0;
};