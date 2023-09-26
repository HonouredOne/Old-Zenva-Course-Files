#include "gameTile.h"

GameTile::GameTile(std::string textureName, float x, float y, bool passable, bool exit)
{
    if (!setUpSprite(textureName))
    {
        return;
    }
    pos = sf::Vector2f(x*4,y*4);
    sprite.setPosition(pos);
    isPassable = passable;
    isExit = exit;
}


bool GameTile::setUpSprite(std::string textureName)
{
    if (!texture.loadFromFile(textureName))
    {
        return false;
    }
    texture.setSmooth(true);
    sprite.setTexture(texture, true);
    // sprite.setTextureRect(sf::IntRect(0,0,50,50)); this line is unnecessary, unless the texture for the sprite is not 50x50 px.
    sprite.setScale(4,4);
    return true;
}