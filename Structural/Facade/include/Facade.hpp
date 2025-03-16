#pragma once
#include "SubSystemA.hpp"
#include "SubSystemB.hpp"
#include <memory>
class Facade
{
  protected:
    std::shared_ptr<SubSystemA> mSubSystemA;
    std::shared_ptr<SubSystemB> mSubSystemB;

  public:
    Facade();
    virtual ~Facade() = default;

    void Operation() const;
};