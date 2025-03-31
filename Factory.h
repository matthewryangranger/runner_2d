#pragma once
#include <vector>
#include "GameObject.h"
#include "SFML/Graphics.hpp"

class InputDispatcher;

class Factory
{
private:
  sf::RenderWindow* m_Window;
public:
  Factory(sf::RenderWindow* window);
  void loadLevel(std::vector<GameObject>& gameObjects, sf::VertexArray& canvas, InputDispatcher& inputDispatcher);
  sf::Texture* m_Texture;

};