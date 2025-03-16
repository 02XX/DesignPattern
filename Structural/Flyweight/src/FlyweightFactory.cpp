#include "FlyweightFactory.hpp"

std::shared_ptr<Flyweight> FlyweightFactory::GetFlyweight(int key)
{
    if (mFlyweights.find(key) == mFlyweights.end())
    {
        mFlyweights[key] = std::make_shared<Flyweight>(key);
    }
    return mFlyweights[key];
}
