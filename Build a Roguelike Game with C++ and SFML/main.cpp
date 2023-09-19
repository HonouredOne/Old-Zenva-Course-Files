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
                window.close();
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