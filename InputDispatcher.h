#pragma once
#include <SFML/Graphics.hpp>
#include "InputReceiver.h"

class InputDispatcher
{
private:
  sf::RenderWindow* m_Window;
  vector<InputReceiver*> m_InputReceivers;
public:
  InputDispatcher(sf::RenderWindow* window);
  void dispatchInputEvents();
  void registerNewInputReceiver(InputReceiver* ir);
};
