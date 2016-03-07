#include "league.hpp"
#include "command.hpp"
#include "bactery.hpp"
#include "interpreter.hpp"

League::League(Interpreter* parent, vector <Command> commands) : parent(parent), commands(commands) {
    
}

void League::addBactery(Bactery* bact) {
    this->bacteries.push_back(bact);
}

void League::deleteBactery(Bactery *bact) {
    auto it = this->bacteries.begin();
    for (; *it != bact; it++);
    this->bacteries.erase(it);
    Bacteries*[WORLD_SIZE][WORLD_SIZE] world = this->parent->getWorld();
    for (int i = 0; i < WORLD_SIZE; i++) {
        for (int j = 0; j < WORLD_SIZE; j++) {
            if (world[i][j] == bact) {
                world[i][j] = 0;
            }
        }
    }
}
