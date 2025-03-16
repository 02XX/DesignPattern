#pragma once
#include <iostream>
#include <string>
#include <vector>
class ProductB final
{
  private:
    std::vector<std::string> mConfigure;

  public:
    ProductB() = default;
    void SetConfigure(std::string configure);
    void ToString() const;
};
