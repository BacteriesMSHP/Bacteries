#include "command.hpp"
#include "bactery.hpp"

Command::Command(Interpreter *interpreter, bool isPseudoCommand = false) : isPseudoCommand(isPseudoCommand) {
    
}

bool Command::isPseudo() {
    return this->isPseudoCommand;
}

void Command::act(int x, int y) {
    return;
}
