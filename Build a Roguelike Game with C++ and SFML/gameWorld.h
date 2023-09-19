#include <SFML/Graphics.hpp>
#include "gameTile.h"
#include <vector>

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
public:
    std::vector<std::vector<GameTile *>> tiles;
    int gridLength;
    GameWorld();
    void moveUp();
    void moveDown();
    void moveLeft();
    void moveRight();
};