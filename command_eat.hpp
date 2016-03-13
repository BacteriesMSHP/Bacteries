#ifndef COMMAND_EAT_HPP
#define COMMAND_EAT_HPP

class Bactery;

typedef Bactery*[][] World;

class CommandEat : public Command {
protected:
	bool isPseudoCommand;
public:
	CommandEat();
	bool isPseudo();
	void act(World, int, int);
};

#endif
