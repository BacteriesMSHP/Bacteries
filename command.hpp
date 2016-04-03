#ifndef COMMAND_HPP
#define COMMAND_HPP

class Bactery;

class Command {
protected:
    bool isPseudoCommand;
	Interpreter* interpreter;
public:
    Command(Interpreter*,bool);
    bool isPseudo();
    void act(Bactery *b);
};

#endif
