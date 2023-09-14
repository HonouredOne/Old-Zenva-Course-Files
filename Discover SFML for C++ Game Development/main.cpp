#include "gameWorld.cpp"
#include <iostream>

int main()
{
  while(true) {
    GameWorld world = GameWorld();
    if (!world.performSetup()) {
      return 1;
    }
    if (!world.runGame()) {
      return 0;
    }
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