#include "Singleton.hpp"

Singleton &Singleton::Instance()
{
    static Singleton instance;
    return instance;
}