#ifndef COMMAND_EAT_HPP
#define COMMAND_EAT_HPP

class Bactery;

class CommandEat : public Command {
protected:
	bool isPseudoCommand;
	Interpreter* interpreter;
public:
	CommandEat(Interpreter*);
	bool isPseudo();
	void act(int, int);
};

#endif
