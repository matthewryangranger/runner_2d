#include "SoundEngine.h"
#include <assert.h>

SoundEngine* SoundEngine::m_s_Instance = nullptr;
bool SoundEngine::mMusicIsPlaying = false;
sf::Music SoundEngine::music;

sf::SoundBuffer SoundEngine::m_ClickBuffer;
sf::Sound SoundEngine::m_ClickSound;
sf::SoundBuffer SoundEngine::m_JumpBuffer;
sf::Sound SoundEngine::m_JumpSound;

SoundEngine::SoundEngine()
{
  assert(m_s_Instance == nullptr);
  m_s_Instance = this;

  m_ClickBuffer.loadFromFile("../sound/click.wav");
  m_ClickSound.setBuffer(m_ClickBuffer);

  m_JumpBuffer.loadFromFile("../sound/jump.wav");
  m_JumpSound.setBuffer(m_JumpBuffer);

  void SoundEngine::playClick() {
    m_ClickSound.play();
  }
  void SoundEngine::playJump()
  {
    m_JumpSound.play();
  }

};
