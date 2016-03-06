#ifndef INTERPRETER_HPP
#define INTERPRETER_HPP

#define WORLD_SIZE 20

class Bactery;

class Interpreter {
private:
    Bactery* world[WORLD_SIZE][WORLD_SIZE];
public:
    Interpreter();
    Bactery*[][] getWorld();
};

#endif // INTERPRETER_HPP
