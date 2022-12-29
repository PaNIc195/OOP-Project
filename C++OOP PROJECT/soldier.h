#ifndef soldier_h
#define soldier_h

#include <iostream>
#include <string>
#include "player.h"
using namespace std;


class soldier : public player{

    private:
        int desperationDamage;

    public:
        soldier(string name, int life, int armor, int damage, int desperationDamage);
        int getDesperationDamage();
        void specialAction();
};
#endif