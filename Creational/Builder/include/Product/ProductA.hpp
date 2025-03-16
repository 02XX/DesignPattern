#pragma once
#include <iostream>
#include <string>
#include <vector>
class ProductA final
{
  private:
    std::vector<std::string> mConfigure;

  public:
    ProductA() = default;
    void SetConfigure(std::string configure);
    void ToString() const;
};
