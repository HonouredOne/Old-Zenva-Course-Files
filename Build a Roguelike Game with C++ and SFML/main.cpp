#include <SFML/Graphics.hpp>
#include "gameTile.cpp"
#include "gameWorld.cpp"

int main()
{
    float windowHeight = 400;
    float windowWidth = 400;

    sf::RenderWindow window(sf::VideoMode(windowWidth, windowHeight), "Roguelike");

    GameWorld gameWorld = GameWorld();

    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
            {
                window.close();
            }
            else if (event.type == sf::Event::KeyPressed)
            {
                if (sf::Keyboard::isKeyPressed(sf::Keyboard::Up))
                {
                    gameWorld.moveUp();
                }
                else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Down))
                {
                    gameWorld.moveDown();
                }
                else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Left))
                {
                    gameWorld.moveLeft();
                }
                else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Right))
                {
                    gameWorld.moveRight();
                }
                else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Escape))
                {
                    window.close();
                }
            }
        }

        window.clear();

        for (int i = 0; i < gameWorld.gridLength; i++)
        {
            for (int j = 0; j < gameWorld.gridLength; j++)
            {
                window.draw(gameWorld.tiles[i][j]->sprite);
            }
        }

        window.display();
    }
}