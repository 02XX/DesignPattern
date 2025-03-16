#include "Flyweight.hpp"

int Flyweight::GetRepeatedData() const
{
    return reaptedData;
}

Flyweight::Flyweight(int data) : reaptedData(data)
{
}
