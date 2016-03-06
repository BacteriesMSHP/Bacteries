#ifndef BACTERY_HPP
#define BACTERY_HPP

#define BACTERY_DEFAULT_WEIGHT 5
#define BACTERY_DEFAULT_SIDE SideRandom

enum Side { SideLeft, SideRight, SideBack, SideForward, SideRandom };

class Bactery {
private:
    Side turnSide;
    int weight;
    int lineNumber;
    void turn(); // Used to change SideRandom to normal side.
public:
    Bactery();
    Bactery(int, Side);
    Bactery(int, Side, int);
    int getWeight();
    void setWeight(int);
    Side getTurnSide();
    void setTurnSide(Side);
    int getLineNumber();
    void setLineNumber(int);
};

#endif // BACTERY_HPP