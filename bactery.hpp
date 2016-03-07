#ifndef BACTERY_HPP
#define BACTERY_HPP

#define BACTERY_DEFAULT_WEIGHT 5
#define BACTERY_DEFAULT_SIDE Side::SideRandom

enum class Side { SideLeft, SideRight, SideBack, SideForward, SideRandom };

class League;

class Bactery {
private:
    League* parent;
    Side turnSide;
    int weight;
    int lineNumber;
    void turn(); // Used to change SideRandom to normal side.
public:
    Bactery(*League, int, Side, int);
    int getWeight();
    void setWeight(int);
    Side getTurnSide();
    void setTurnSide(Side);
    int getLineNumber();
    void setLineNumber(int);
    League* getLeague();
};

#endif // BACTERY_HPP
