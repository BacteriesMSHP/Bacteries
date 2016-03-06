#include "bactery.hpp"
#include <cstdlib>
#include <ctime>

using namespace std;

void Bactery::turn() {
    if (this->turnSide == SideRandom) {
        this->turnSide = (Side) (rand() % 4);
    }
}

Bactery::Bactery() {
    srand(time(0));
    this->weight = BACTERY_DEFAULT_WEIGHT;
    this->turnSide = BACTERY_DEFAULT_SIDE;
    this->lineNumber = 1;
    this->turn();
}

Bactery::Bactery(int weight, Side turnSide) : weight(weight), turnSide(turnSide) {
    srand(time(0));
    this->lineNumber = 1;
    this->turn();
}

Bactery::Bactery(int weight, Side turnSide, int lineNumber) : weight(weight), turnSide(turnSide), lineNumber(lineNumber) {
    srand(time(0));
    this->turn();
}

int Bactery::getWeight() {
    return this->weight;
}

void Bactery::setWeight(int weight) {
    this->weight = weight;
}

Side Bactery::getTurnSide() {
    return this->turnSide;
}

void Bactery::setTurnSide(Side turnSide) {
    this->turnSide = turnSide;
    this->turn();
}

int Bactery::getLineNumber() {
    return this->lineNumber;
}

void Bactery::setLineNumber(int lineNumber) {
    this->lineNumber = lineNumber;
}
