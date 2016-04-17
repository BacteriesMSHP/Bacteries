#ifndef LEAGUE_HPP
#define LEAGUE_HPP
#include <vector>

using namespace std;

class Command;
class Bactery;
class Interpreter;

class League {
private:
    vector <Command> commands;
    vector <Bactery*> bacteries;
	Interpreter *parent;
public:
    League(Interpreter *parent, vector <Command>);
    void addBactery(Bactery *);
    void deleteBactery(Bactery *);
	void steps();
};

#endif
