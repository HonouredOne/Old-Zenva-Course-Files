#include <SFML/Graphics.hpp>
#include <iostream>

int main()
{
  sf::RenderWindow window(sf::VideoMode(500, 500), "SFML works!");
  
  sf::Font font;
  if (!font.loadFromFile("assets/Arial.ttf")) {
    std::cout << "Could not load font file";
    return 0;
  }
  sf::Text text;
  text.setFont(font);
  text.setCharacterSize(30);
  text.setFillColor(sf::Color::White);
  text.setStyle(sf::Text::Bold);
  text.setPosition(sf::Vector2f(100,100));
  text.setString("Here is some text");
  
  while (window.isOpen())
  {
    sf::Event event;
    while (window.pollEvent(event))
    {
      if (event.type == sf::Event::Closed)
      window.close();
    }
    
    window.clear();
    window.draw(text);
    window.display();
    }
  return 0;
}

// Use this code first: g++ -IC:\SFML\include -c main.cpp -o main.o
// Then use this to compile the exe: g++ -LC:\SFML\lib -o main.exe main.o -lsfml-graphics -lsfml-audio -lsfml-window -lsfml-system
// Then run main.exe