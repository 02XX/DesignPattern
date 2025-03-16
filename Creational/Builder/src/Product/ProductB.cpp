#include "Product/ProductB.hpp"

void ProductB::SetConfigure(std::string configure)
{
    mConfigure.push_back(configure);
}

void ProductB::ToString() const
{
    std::cout << "===ProductB===" << std::endl;
    for (auto configure : mConfigure)
    {
        std::cout << configure << std::endl;
    }
    std::cout << "==============" << std::endl;
}
