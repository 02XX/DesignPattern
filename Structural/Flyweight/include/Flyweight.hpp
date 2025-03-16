#pragma once
#include <iostream>
class Flyweight final
{
  private:
    int reaptedData;

  public:
    Flyweight(int data);

    int GetRepeatedData() const;
};