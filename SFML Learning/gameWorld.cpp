#include "gameWorld.h"
#include "enemy.cpp"

GameWorld::GameWorld(): enemy(100) {
  damage = 10;
}

bool GameWorld::loadBackground() {
  if (!backgroundTexture.loadFromFile("assets/background.png")) {
    std::cout << "Could not load background image" << std::endl;
    return false;
  }
  background.setTexture(backgroundTexture);
  background.scale(sf::Vector2f(1.6,2.25));
  return true;
}

bool GameWorld::performSetup() {
  isGameOver = false;
  return loadBackground() && enemy.performSetup();
}

bool GameWorld::runGame() {
  sf::RenderWindow window(sf::VideoMode(1000, 1000), "Point and Click Game");
  
  while (window.isOpen())
  {
    sf::Event event;
    while (window.pollEvent(event))
    {
      if (event.type == sf::Event::Closed) {
        window.close();
        return false;
      } 
    }
    
    window.clear();
    window.draw(background);
    enemy.draw(&window);
    window.display();
    }
  return false;
}