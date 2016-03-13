#include "command_eat.hpp"
#include "bactery.hpp"

CommandEat::CommandEat(Interpreter* interpreter) : Command(false) {
	this->interpreter = interpreter;
}

bool CommandEat::isPseudo() {
	return this->isPseudoCommand;
}

void CommandEat::act(int x, int y) {
	Bactery* b = this->interpreter->getWorldItem(x, y);
	b->setWeight(b->getWeight() + 1);	
	return;
}
