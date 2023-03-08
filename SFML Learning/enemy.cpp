#include "enemy.h"
#include <iostream>

Enemy::Enemy(int e) {
  energy = e;
}

bool Enemy::performSetup() {
  if (!enemyTexture.loadFromFile("assets/enemy.png")) {
    std::cout << "Could not load enemy image" << std::endl;
    return false;
  }
  enemySprite.setTexture(enemyTexture);
  enemySprite.setPosition(sf::Vector2f(225,400));
  enemySprite.scale(sf::Vector2f(2,2));
  
  if (!attackSoundBuffer.loadFromFile("assets/damage.ogg")) {
    std::cout << "Could not load enemy audio" << std::endl;
    return false;
  }
  attackSound.setBuffer(attackSoundBuffer);
  
  return true;
}

void Enemy::draw(sf::RenderWindow * window) {
  window->draw(enemySprite);
}