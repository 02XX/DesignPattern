
#include "Context.hpp"
#include "Flyweight.hpp"
#include "FlyweightFactory.hpp"
#include <memory>

int main()
{
    FlyweightFactory factory;
    std::shared_ptr<Flyweight> flyweight1 = factory.GetFlyweight(1);

    Context context1(1, flyweight1);
    Context context2(2, flyweight1);
    Context context3(3, flyweight1);

    context1.SetState(10);
    context2.SetState(20);
    context3.SetState(30);

    context1.PrintState();
    context2.PrintState();
    context3.PrintState();
    return 0;
}