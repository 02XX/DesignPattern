#pragma once
#include <iostream>
struct SpecificData
{
    std::string data;
    int time;
};
class Service
{
  public:
    Service() = default;
    virtual ~Service() = default;

    virtual void SpecificRequest(SpecificData data, int *code) const;
};