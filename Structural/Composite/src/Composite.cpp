#include "Composite.hpp"

void Composite::Execute() const
{
    for (const auto &component : mComponents)
    {
        component->Execute();
    }
}

void Composite::AddComponent(std::shared_ptr<IComponent> component)
{
    mComponents.push_back(std::move(component));
}

void Composite::RemoveComponent(std::shared_ptr<IComponent> component)
{
    mComponents.erase(std::remove(mComponents.begin(), mComponents.end(), component), mComponents.end());
}

std::vector<std::shared_ptr<IComponent>> Composite::GetChildren() const
{
    return mComponents;
}
