#include "PlayerUpdate.h"
#include "SoundEngine.h"
#include "LevelUpdate.h"

sf::FloatRect* PlayerUpdate::getPositionPointer()
{
  return &m_Position;
}

bool* PlayerUpdate::getGroundedPointer()
{
  return &m_isGrounded;
}

InputReceiver* PlayerUpdate::getInputReceiver()
{
  return &m_InputReceiver;
}

void PlayerUpdate::assemble(std::shared_ptr<LevelUpdate> levelUpdate, std::shared_ptr<PlayerUpdate> playerUpdate)
{
  SoundEngine();
  m_Position.width = PLAYER_WIDTH;
  m_Position.height = PLAYER_HEIGHT;
  m_IsPaused = levelUpdate->getIsPausedPointer();
}

void PlayerUpdate::handleInput()
{
  m_InputReceiver.clearEvents();
}

void PlayerUpdate::update(float timeTakenThisFrame)
{
  handleInput();
}