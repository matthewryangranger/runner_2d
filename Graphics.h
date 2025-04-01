#pragma once
#include "Component.h"
#include <SFML/Graphics.hpp>
#include "Update.h"

class Graphics : public Component
{
public:
  Graphics();
  virtual void assemble(sf::VertexArray& canvas, std::shared_ptr<Update> genericUpdate, sf::IntRect texCoords) = 0;
  virtual void draw(sf::VertexArray& canvas) = 0;
};