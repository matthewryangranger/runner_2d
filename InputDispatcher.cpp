#include "InputDispatcher.h"

InputDispatcher::InputDispatcher(sf::RenderWindow* window)
{
  m_Window = window;
}

void InputDispatcher::dispatchInputEvents()
{
  sf::Event event;
  while (m_Window->pollEvent(event))
  {
    if (event.type == sf::Event::KeyPressed && event.key.code == sf::Keyboard::Escape) {
    m_Window->close();}
  }
  for (const auto& ir: m_InputReceivers)
  {
    ir->addEvent(event);
  }
}

void InputDispatcher::registerNewInputReceiver(InputReceiver* ir)
{
  m_InputReceivers.push_back(ir);
}

