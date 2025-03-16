#include "SubPrototype.hpp"

std::shared_ptr<IProtoType> SubPrototype::Clone() const
{
    return std::make_shared<SubPrototype>(*this);
}

void SubPrototype::ToString() const
{
    Prototype::ToString();
    std::cout << "subfield1: " << mSubField1 << std::endl;
    std::cout << "subfield2: " << mSubField2 << std::endl;
}

SubPrototype::SubPrototype(float subField1, std::string subField2, int field1, std::string field2)
    : mSubField1(subField1), mSubField2(subField2), Prototype(field1, field2)
{
}

SubPrototype::SubPrototype(const SubPrototype &other)
    : mSubField1(other.mSubField1), mSubField2(other.mSubField2), Prototype(other)
{
}

SubPrototype::SubPrototype(SubPrototype &&other)
    : mSubField1(std::move(other.mSubField1)), mSubField2(std::move(other.mSubField2)), Prototype(std::move(other))
{
}

SubPrototype &SubPrototype::operator=(const SubPrototype &other)
{
    mSubField1 = other.mSubField1;
    mSubField2 = other.mSubField1;
    return *this;
}

SubPrototype &SubPrototype::operator=(SubPrototype &&other)
{
    mSubField1 = std::move(other.mSubField1);
    mSubField2 = std::move(other.mSubField1);
    return *this;
}
