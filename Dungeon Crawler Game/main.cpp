#include <iostream>
#include "game.h"

int main() {
    
    
    Player player = Player("Zack", 100, 10);
    Dungeon dungeon;
    Game game = Game(&player, &dungeon);
    game.handleMovementActions();
}