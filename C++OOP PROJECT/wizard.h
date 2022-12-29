#ifndef wizard_h
#define wizard_h

#include <iostream>
#include <string>
#include "player.h"

using namespace std;

class wizard : public player{

    private:
        int energyBoost;

    public:
        wizard(string name, int life, int armor, int damage, int energyBoost);
        int getEnergyBoost();
        void specialAction();
};
#endif