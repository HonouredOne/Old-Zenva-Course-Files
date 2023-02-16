#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>
#include <iostream>

#ifndef GAMEWORLD_H
#define GAMEWORLD_H

class GameWorld
{
private:
  bool isGameOver;
  int damage;
  sf::Texture backgroundTexture;
  sf::Sprite background;
  sf::Time time;
  bool loadBackground();
public:
  GameWorld();
  bool performSetup();
  bool runGame();
};

#endif