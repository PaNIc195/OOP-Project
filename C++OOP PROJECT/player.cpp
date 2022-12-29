#include "player.h"

player::player(string name, int life, int armor, int damage){
    this->name = name;
    this->life = life;
    this->armor = armor;
    this->damage = damage;
}

string player::getName(){
    return this->name;
}

int player::getLife(){
    return this->life;
}

int player::getArmor(){
    return this->armor;
}

int player::getDamage(){
    return this->damage;
}

void player::setLife(int life){
    this->life = life;
}

void player::setArmor(int armor){
    this->armor = armor;
}