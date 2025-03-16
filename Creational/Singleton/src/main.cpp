#include "Singleton.hpp"
#include <iostream>
#include <memory>

int main()
{
    Singleton &instance = Singleton::Instance();
    return 0;
}