#pragma once
#include "Update.h"
#include "InputReceiver.h"
#include <SFML/Graphics.hpp>

class PlayerUpdate : public Update {
private:
  const float PLAYER_WIDTH = 20.0f;
  const float PLAYER_HEIGHT = 16.0f;
  sf::FloatRect m_Position;

  bool* m_IsPaused = nullptr;
  float m_Gravity = 165;
  float m_RunSpeed = 150;
  float m_BoostSpeed = 250;
  InputReceiver m_InputReceiver;
  sf::Clock m_JumpClock;
  bool m_SpaceHeldDown = false;
  float m_JumpDuration = .5f;
  float m_JumpSpeed = 400;
public:
  float m_RightIsHeldDown = false;
  float m_LeftIsHeldDown = false;
  float m_BoostIsHeldDown = false;
  bool m_isGrounded;
  bool m_InJump = false;
  sf::FloatRect* getPositionPointer();
  bool* getGroundedPointer();
  void handleInput();
  InputReceiver* getInputReceiver();
  void assemble(std::shared_ptr<LevelUpdate> levelUpdate, std::shared_ptr<PlayerUpdate> playerUpdate) override;
  void update(float fps) override;
};

