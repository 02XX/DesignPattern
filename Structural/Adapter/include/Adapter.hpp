#pragma once
#include "IClient.hpp"
#include "Service.hpp"
class Adapter final : public IClient
{
  private:
    Service mService;

  public:
    Adapter(Service service);
    virtual ~Adapter() = default;

    int Request(Data data) const override;
};