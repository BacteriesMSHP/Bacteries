#ifndef INTERPRETER_HPP
#define INTERPRETER_HPP
#include <vector>
#include <string>

using namespace std;

#define WORLD_SIZE 20

class Bactery;
class League;

class Interpreter {
private:
    Bactery* world[WORLD_SIZE][WORLD_SIZE];
	vector <League> leagues;
public:
    Interpreter(vector <string>);
    Bactery *getWorldItem(int, int);
	Bactery *setWorldItem(int, int, Bactery*);
};

#endif // INTERPRETER_HPP
