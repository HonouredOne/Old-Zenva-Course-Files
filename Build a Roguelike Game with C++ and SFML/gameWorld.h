#include <SFML/Graphics.hpp>
#include "gameTile.h"
#include <vector>

#ifndef GAMEWORLD_H
#define GAMEWORLD_H

class GameWorld
{
private:
    sf::Vector2i exitPos;
    sf::Vector2i playerPos;
    std::vector<sf::Vector2i> enemyPositions;
    void setUpInitialState();
    void setUpEnemyPositions();
    void setUpTiles();
    void redrawSprites();
    std::vector<sf::Vector2i> getFreeCoordinates(sf::Vector2i);
    bool checkIfPositionIsFree(sf::Vector2i);
    void moveEnemies();
public:
    std::vector<std::vector<GameTile *>> tiles;
    int gridLength;
    GameWorld();
    void moveUp();
    void moveDown();
    void moveLeft();
    void moveRight();
};

#endif