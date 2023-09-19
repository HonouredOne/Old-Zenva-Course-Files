#include "gameWorld.h"


GameWorld::GameWorld()
{
    gridLength = 8;
    setUpInitialState();
}


void GameWorld::setUpInitialState()
{
    exitPos = sf::Vector2i(1,0);
    playerPos = sf::Vector2i(gridLength-1,gridLength-1);
    setUpEnemyPositions();
    setUpTiles();
}


void GameWorld::setUpEnemyPositions()
{
    enemyPositions.clear();
    enemyPositions.push_back(sf::Vector2i(0,2));
    enemyPositions.push_back(sf::Vector2i(6,0));
    enemyPositions.push_back(sf::Vector2i(2,7));
}


void GameWorld::setUpTiles()
{

}