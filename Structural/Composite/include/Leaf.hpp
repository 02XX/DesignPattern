#pragma once
#include "IComponent.hpp"
#include <iostream>
class Leaf final : public IComponent
{
  private:
    int mID;

  public:
    Leaf(int id);
    virtual ~Leaf() = default;

    void Execute() const override;
};
