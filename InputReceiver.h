#pragma once
#include <SFML/Graphics.hpp>

class InputReceiver
{
private:
  std::vector<sf::Event> mEvents;
public:
  void addEvent(sf::Event event);
  std::vector<sf::Event>& getEvents();
  void clearEvents();
};

