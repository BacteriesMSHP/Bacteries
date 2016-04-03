#include "command_eat.hpp"
#include "bactery.hpp"

CommandEat::CommandEat(Interpreter* interpreter) : Command(false) {
	this->interpreter = interpreter;
}

bool CommandEat::isPseudo() {
	return this->isPseudoCommand;
}

void CommandEat::act(Bactery *b) {
	b->setWeight(b->getWeight() + 1);	
	return;
}
