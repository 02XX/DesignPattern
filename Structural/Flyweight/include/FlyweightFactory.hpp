#pragma once
#include "Flyweight.hpp"
#include <map>
#include <memory>

class FlyweightFactory final
{
  private:
    std::map<int, std::shared_ptr<Flyweight>> mFlyweights;

  public:
    FlyweightFactory() = default;

    std::shared_ptr<Flyweight> GetFlyweight(int key);
};
