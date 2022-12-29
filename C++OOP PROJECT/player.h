#ifndef player_h
#define player_h

#include <iostream>
#include <string>

using namespace std;

class player{

    private:
//implementar el get damage.
        string name;
        int life;
        int armor;
        int damage;
    public:
        player(string name, int life, int armor, int damage);
        string getName();
        int getLife();
        int getArmor();
        int getDamage();
        void setLife(int life);
        void setArmor(int armor);

//implementar el metodo virtual 
        virtual void specialAction() = 0;
};
#endif