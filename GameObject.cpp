#include "GameObject.h"
#include <SFML/Graphics.hpp>
#include <iostream>
#include "Update.h"
#include "Graphics.h"

void GameObject::addComponent(std::shared_ptr<Component> newComponent)
{
  m_Components.push_back(newComponent);
}

void GameObject::update(float elapsedTime)
{
  for (auto component : m_Components)
  {
    if (component->m_IsUpdate)
    {
      std::static_pointer_cast<Update>(component)->update(elapsedTime);
    }
  }
}

void GameObject::draw(sf::VertexArray& canvas)
{
  for (auto component: m_Components)
  {
    if (component->m_IsGraphics)
    {
      std::static_pointer_cast<Graphics>(component)->draw(canvas);
    }
  }
}
