#include "Context.hpp"

Context::Context(int state, std::shared_ptr<Flyweight> flyweight) : mState(state), mFlyweight(flyweight)
{
}

void Context::SetState(int state)
{
    mState = state;
}

void Context::PrintState() const
{
    std::cout << "State: " << mState << " Repeated data: " << mFlyweight->GetRepeatedData() << std::endl;
}
