#pragma once
#include "IComponent.hpp"
#include <memory>
#include <vector>
class Composite final : public IComponent
{
  private:
    std::vector<std::shared_ptr<IComponent>> mComponents;

  public:
    Composite() = default;
    virtual ~Composite() = default;
    void AddComponent(std::shared_ptr<IComponent> component);
    void RemoveComponent(std::shared_ptr<IComponent> component);
    std::vector<std::shared_ptr<IComponent>> GetChildren() const;
    void Execute() const override;
};