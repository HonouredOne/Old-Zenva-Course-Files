#include "game.h"
#include <iostream>

Game::Game(Player * _player, Dungeon * _dungeon) {
    player = _player;
    dungeon = _dungeon;
    isGameOver = false;
    
    dungeon->setUpDungeon();
    player->currentRoom = &dungeon->rooms[dungeon->rows-1][dungeon->cols-1];
}

void Game::printActions(std::vector<std::string> actions) {
    for (int i = 0; i < actions.size(); i++) {
        std::cout << i + 1 << ". " << actions[i] << "\n";
    }
}

std::vector<std::string> Game::getMovementActions() {
    std::vector<std::string> actions;
    
    room * currentRoom = player->currentRoom;
    if (currentRoom->col > 0) {
        actions.push_back("Move left");
    }
    if (currentRoom->row > 0) {
        actions.push_back("Move up");
    }
    if (currentRoom->col < (dungeon->cols - 1)) {
        actions.push_back("Move right");
    }
    if (currentRoom->row < (dungeon->rows - 1)) {
        actions.push_back("Move down");
    }
    return actions;
}

void Game::handleMovementActions() {
    std::cout << "Where do you want to go next?\n";
    std::vector<std::string> actions = getMovementActions();
    printActions(actions);
}