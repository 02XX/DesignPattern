#pragma once
#include "Prototype.hpp"

class SubPrototype final : public Prototype
{
  private:
    float mSubField1;
    std::string mSubField2;

  public:
    SubPrototype(float subField1, std::string subField2, int field1, std::string field2);
    SubPrototype(const SubPrototype &other);
    SubPrototype(SubPrototype &&other);
    SubPrototype &operator=(const SubPrototype &other);
    SubPrototype &operator=(SubPrototype &&other);
    ~SubPrototype() = default;

    std::shared_ptr<IProtoType> Clone() const override;
    void ToString() const override;
};