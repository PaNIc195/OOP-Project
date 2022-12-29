#include "soldier.h"

soldier::soldier(string name, int life, int armor, int damage, int desperationDamage) : player(name, life, armor, damage){
    this->desperationDamage = desperationDamage;
}

int soldier::getDesperationDamage(){
    return this->desperationDamage;
}

void soldier::specialAction(){
    cout << this->getName() << " realiza un ataque de desesperación!" << endl;
    this->setLife(this->getLife() - this->getDesperationDamage());
    cout << this->getName() << " ha perdido " << this->getDesperationDamage() << " puntos de vida!" << endl;
}
