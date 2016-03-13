#include "command_eat.hpp"
#include "bactery.hpp"

CommandEat::CommandEat() : Command(false) {

}

bool CommandEat::isPseudo() {
	return this->isPseudoCommand;
}

void CommandEat::act(World world, int x, int y) {
	world[x][y]->setWeight(world[x][y]->getWeight() + 1);	
	return;
}
