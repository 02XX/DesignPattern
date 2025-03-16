#pragma once
#include "IPrototype.hpp"
#include <iostream>
#include <string>

class Prototype : public IProtoType
{
  private:
    int mField1;
    std::string mField2;

  public:
    Prototype(int field1, std::string field2);
    Prototype(const Prototype &other);
    Prototype(Prototype &&other);
    Prototype &operator=(const Prototype &other);
    Prototype &operator=(Prototype &&other);
    virtual ~Prototype() = default;

    virtual std::shared_ptr<IProtoType> Clone() const override;
    virtual void ToString() const;
};