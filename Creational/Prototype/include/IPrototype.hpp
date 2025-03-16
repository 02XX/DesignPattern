#pragma once
#include <memory>
class IProtoType
{
  public:
    virtual ~IProtoType() = default;
    virtual std::shared_ptr<IProtoType> Clone() const = 0;
};