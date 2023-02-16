#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>
#include <iostream>

int main()
{
  sf::RenderWindow window(sf::VideoMode(500, 500), "SFML works!");
  
  sf::SoundBuffer buffer;
  if (!buffer.loadFromFile("assets/damage.ogg")) {
    std::cout << "Could not load audio";
    return 0;
  }
  sf::Sound attackSound;
  attackSound.setBuffer(buffer);
  attackSound.play();
  
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

// On Windows:  Use this code first: g++ -IC:\SFML\include -c main.cpp -o main.o
//              Then use this to compile the exe: g++ -LC:\SFML\lib -o main.exe main.o -lsfml-graphics -lsfml-audio -lsfml-window -lsfml-system
//              Then run main.exe
// 
// On Linux:    Use this code first: g++ -c main.cpp
//              Then use this to compile the app: g++ main.o -o sfml-app -lsfml-graphics -lsfml-window -lsfml-system
//              Then run: ./sfml-app