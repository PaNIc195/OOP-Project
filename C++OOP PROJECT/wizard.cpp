#include "wizard.h"

wizard::wizard(string name, int life, int armor, int damage, int energyBoost) : player(name, life, armor, damage){
    this->energyBoost = energyBoost;
}

int wizard::getEnergyBoost(){
    return this->energyBoost;
}

void wizard::specialAction(){
    cout << this->getName() << " aumenta su energía!" << endl;
    this->setLife(this->getLife() + this->getEnergyBoost());
    cout << this->getName() << " ha ganado " << this->getEnergyBoost() << " puntos de vida!" << endl;
}