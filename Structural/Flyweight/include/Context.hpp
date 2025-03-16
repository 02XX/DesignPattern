#pragma once
#include "Flyweight.hpp"
#include <memory>
class Context final
{
  private:
    int mState;
    std::shared_ptr<Flyweight> mFlyweight;

  public:
    Context(int state, std::shared_ptr<Flyweight> flyweight);

    void SetState(int state);
    void PrintState() const;
};