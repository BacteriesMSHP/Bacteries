#ifndef COMMAND_HPP
#define COMMAND_HPP

class Bactery;

class Command {
protected:
    bool isPseudoCommand;
public:
    Command(bool);
    bool isPseudo();
    void act(Bactery*[][], int, int);
};

#endif
