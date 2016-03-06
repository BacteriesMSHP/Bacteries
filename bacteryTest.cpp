#include <iostream>
#include "bactery.hpp"

using namespace std;

int main() {
    Bactery bact;
    cout << "Default bactery data: line number, side and weight" << endl;
    cout << bact.getLineNumber() << ' ' << bact.getTurnSide() << ' ' << bact.getWeight() << endl;
    bact.setLineNumber(1337);
    bact.setTurnSide(SideForward);
    bact.setWeight(100);
    cout << "Bact data with line number 1337, forward turn and weight 100" << endl;
    cout << bact.getLineNumber() << ' ' << bact.getTurnSide() << ' ' << bact.getWeight() << endl;
    bact.setTurnSide(SideRandom);
    cout << "Random side" << endl;
    cout << bact.getLineNumber() << ' ' << bact.getTurnSide() << ' ' << bact.getWeight() << endl;
    bact.setTurnSide(SideRandom);
    cout << "Random side" << endl;
    cout << bact.getLineNumber() << ' ' << bact.getTurnSide() << ' ' << bact.getWeight() << endl;
    cout << "Forward side" << endl;
    bact.setTurnSide(SideForward);
    cout << bact.getLineNumber() << ' ' << bact.getTurnSide() << ' ' << bact.getWeight() << endl;
	return 0;
}