#pragma once
#include <SFML/Graphics.hpp>
#include "Component.h"
#include <vector>

class GameObject
{
private:
  std::vector<std::shared_ptr<Component>> m_Components;
public:
  void addComponent(std::shared_ptr<Component> newComponent);
  void update(float elapsedTime);
  void draw(sf::VertexArray& canvas);
};