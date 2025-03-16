#include "Product/ProductA.hpp"

void ProductA::SetConfigure(std::string configure)
{
    mConfigure.push_back(configure);
}

void ProductA::ToString() const
{
    std::cout << "===ProductA===" << std::endl;
    for (auto configure : mConfigure)
    {
        std::cout << configure << std::endl;
    }
    std::cout << "==============" << std::endl;
}
