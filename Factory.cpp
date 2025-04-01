#include "Factory.h"
#include <iostream>

Factory::Factory(sf::RenderWindow* window)
{
  m_Window = window;
  m_Texture = new sf::Texture();
  if (!m_Texture->loadFromFile("../graphics/texture.png"))
  {
    std::cout << "Error loading texture" << std::endl;
  }
}

void Factory::loadLevel(std::vector<GameObject>& gameObjects, sf::VertexArray& canvas, InputDispatcher& inputDispatcher)
{

}