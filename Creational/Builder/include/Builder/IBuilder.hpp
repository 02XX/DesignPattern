#pragma once
#include <memory>
#include <string>
class IBuilder
{
  public:
    virtual ~IBuilder() = default;
    virtual void Reset() = 0;
    virtual void SetStepA(int param) = 0;
    virtual void SetStepB(int param, std::string param2) = 0;
    virtual void SetStepC() = 0;
};