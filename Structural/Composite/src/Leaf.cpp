#include "Leaf.hpp"

void Leaf::Execute() const
{
    std::cout << mID << " Leaf::Execute" << std::endl;
}

Leaf::Leaf(int id) : mID(id)
{
}
