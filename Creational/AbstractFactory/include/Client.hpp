#pragma once
#include "Creator/ICreator.hpp"
#include "Product/IProductA.hpp"
#include "Product/IProductB.hpp"
#include <memory>
class Client final
{
  private:
    std::unique_ptr<ICreator> mCreator;

  public:
    Client(std::unique_ptr<ICreator> creator);
    std::shared_ptr<IProductA> GetProductA() const;
    std::shared_ptr<IProductB> GetProductB() const;
};