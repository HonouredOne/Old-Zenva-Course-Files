#include <SFML/Graphics.hpp>

int main()
{
    float windowHeight = 1600;
    float windowWidth = 1600;

    sf::RenderWindow window(sf::VideoMode(windowWidth, windowHeight), "Roguelike");



    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        window.clear();
        window.display();
    }

    return 0;
}