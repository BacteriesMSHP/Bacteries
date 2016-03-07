#include "command.hpp"
#include "bactery.hpp"

Command::Command(bool isPseudoCommand = false) : isPseudoCommand(isPseudoCommand) {
    
}

bool Command::isPseudo() {
    return this->isPseudoCommand;
}

void Command::act(Bactery*[][] world, int x, int y) {
    return;
}
