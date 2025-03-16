#pragma once
#include "Creator/ICreator.hpp"
#include "Product/IProduct.hpp"
#include <memory>
class Client final
{
  private:
    std::unique_ptr<ICreator> mCreator;

  public:
    Client(std::unique_ptr<ICreator> creator);
    std::shared_ptr<IProduct> GetProduct() const;
};