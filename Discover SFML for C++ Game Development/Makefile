Point-and-click_Game: main.o
	g++ -LC:\SFML\lib -o Point-and-click_Game.exe main.o -lsfml-graphics -lsfml-audio -lsfml-window -lsfml-system

main.o: $(wildcard *.cpp *.h)
	g++ -IC:\SFML\include -c main.cpp -o main.o

clean:
	rm -f main.o Point-and-click_Game.exe