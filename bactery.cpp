#include "bactery.hpp"
#include <cstdlib>
#include <ctime>

void Bactery::turn() {
    if (this->turnSide == Side::Random) {
        this->turnSide = (Side) (rand() % 4);
    }
}

Bactery::Bactery(League* parent, int weight = BACTERY_DEFAULT_WEIGHT, Side turnSide = BACTERY_DEFAULT_SIDE, int lineNumber = 1) :\
                parent(parent), weight(weight), turnSide(turnSide), lineNumber(lineNumber) {
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

League* Bactery::getLeague() {
    return this->parent;
}