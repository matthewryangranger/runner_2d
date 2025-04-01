#pragma once
#include <SFML/Graphics.hpp>
#include <vector>
#include "GameObject.h"
#include "Factory.h"
#include "InputDispatcher.h"

int main()
{
  sf::Vector2f resolution;
  resolution.x = sf::VideoMode::getDesktopMode().width;
  resolution.y = sf::VideoMode::getDesktopMode().height;
  sf::RenderWindow window(sf::VideoMode(resolution.x, resolution.y),"Booster", sf::Style::Default);

  sf::VertexArray canvas(sf::Quads, 0);
  InputDispatcher inputDispatcher(&window);
  std::vector<GameObject> gameObjects;
  Factory factory(&window);

  factory.loadLevel(gameObjects, canvas, inputDispatcher);

  sf::Clock clock;

  const sf::Color BACKGROUND_COLOR(100, 100, 100, 255);

  while(window.isOpen())
  {
    float timeTakenInSeconds = clock.restart().asSeconds();

    inputDispatcher.dispatchInputEvents();

    window.clear(BACKGROUND_COLOR);

    for(auto gameObject : gameObjects)
    {
      gameObject.update(timeTakenInSeconds);
    }

    for(auto gameObject : gameObjects)
    {
      gameObject.draw(canvas);
    }

    window.display();
  }
  return 0;
}