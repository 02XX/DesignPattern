#include "Prototype.hpp"

std::shared_ptr<IProtoType> Prototype::Clone() const
{
    return std::make_shared<Prototype>(*this);
}

void Prototype::ToString() const
{
    std::cout << "field1: " << mField1 << std::endl;
    std::cout << "field2: " << mField2 << std::endl;
}

Prototype::Prototype(int field1, std::string field2) : mField1(field1), mField2(field2)
{
}

Prototype::Prototype(const Prototype &other) : mField1(other.mField1), mField2(other.mField2)
{
}

Prototype::Prototype(Prototype &&other) : mField1(std::move(other.mField1)), mField2(std::move(other.mField2))
{
}

Prototype &Prototype::operator=(const Prototype &other)
{
    mField1 = other.mField1;
    mField2 = other.mField2;
    return *this;
}

Prototype &Prototype::operator=(Prototype &&other)
{
    mField1 = std::move(other.mField1);
    mField2 = std::move(other.mField2);
    return *this;
}
