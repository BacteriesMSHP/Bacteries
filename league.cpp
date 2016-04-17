#include "league.hpp"
#include "command.hpp"
#include "bactery.hpp"
#include "interpreter.hpp"

League::League(Interpreter* parent, vector <Command> commands) : parent(parent), commands(commands) {
	this->parent = parent;
	this->commands = commands;
}

void League::addBactery(Bactery* bact) {
    this->bacteries.push_back(bact);
}

void League::deleteBactery(Bactery *bact) {
    auto it = this->bacteries.begin();
    for (; *it != bact; it++);
    this->bacteries.erase(it);
    for (int i = 0; i < WORLD_SIZE; i++) {
        for (int j = 0; j < WORLD_SIZE; j++) {
            if (this->parent->getWorldItem(i, j) == bact) {
                this->parent->setWorldItem(i, j, 0);
            }
        }
    }
}

void League::steps() {
	for (unsigned int i = 0; i < this->bacteries.size(); i++) {
		this->commands[this->bacteries[i]->getLineNumber()].act(this->bacteries[i]);
	}
}