#pragma once
#include "Facade.hpp"

class AdditionalFacade final : public Facade
{
  public:
    AdditionalFacade() = default;
    virtual ~AdditionalFacade() = default;

    void AdditionalOperation() const;
};
