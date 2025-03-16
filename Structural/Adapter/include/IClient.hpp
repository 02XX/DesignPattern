#pragma once

#include <string>
struct Data
{
    int data;
    int time;
};
class IClient
{
  public:
    IClient() = default;
    virtual ~IClient() = default;

    virtual int Request(Data data) const = 0;
};