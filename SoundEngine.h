#pragma once
#include <SFML/Audio.hpp>

class SoundEngine {
private:
  static sf::Music music;

  static sf::SoundBuffer m_ClickBuffer;
  static sf::Sound m_ClickSound;

  static sf::SoundBuffer m_JumpBuffer;
  static sf::Sound m_JumpSound;
public:
  SoundEngine();
  static SoundEngine* m_s_Instance;
  static bool mMusicIsPlaying;

  static void startMusic();
  static void pauseMusic();
  static void resumeMusic();
  static void stopMusic();

  static void playClick();
  static void playJump();
};

