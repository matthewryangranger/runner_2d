#include "InputReceiver.h"

void InputReceiver::addEvent(sf::Event event)
{
  mEvents.push_back(event);
}

std::vector<sf::Event>& InputReceiver::getEvents()
{
  return mEvents;
}

void InputReceiver::clearEvents()
{
  mEvents.clear();
}