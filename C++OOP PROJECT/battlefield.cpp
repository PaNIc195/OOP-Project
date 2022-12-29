#include "battlefield.h"

battlefield::battlefield(){
    this->turn = 0;
}

void battlefield::addPlayer(player* player){
    this->players.push_back(player);
}

void battlefield::generatePlayers(){
    addPlayer(new soldier("Connor", 100, 50, 20, 30));
    addPlayer(new soldier("Owen", 80, 60, 20, 25));
    addPlayer(new soldier("Morgan", 95, 55, 20, 20));
    addPlayer(new wizard("Aleister", 100, 100, 10, 15));
    addPlayer(new wizard("Bertrand", 90, 110, 10, 10));
    addPlayer(new wizard("Cedric", 85, 115, 10, 5));
}

void battlefield::fight(){
    int index1, index2;
    index1 = rand() % this->players.size();
    index2 = rand() % this->players.size();
    while(index1 == index2){
        index2 = rand() % this->players.size();
    }
    cout << this->players[index1]->getName() << "(" << this->players[index1]->getLife() << "HP, " << this->players[index1]->getArmor()  << "SH) y " << this->players[index2]->getName() << "(" << this->players[index2]->getLife() << "HP, " << this->players[index2]->getArmor() << "SH) van a pelear." << endl;
    while(this->players[index1]->getLife() > 0 && this->players[index2]->getLife() > 0){
        this->players[index1]->setLife(this->players[index1]->getLife() - this->players[index2]->getDamage());
        cout << this->players[index2]->getName() << "(" << this->players[index2]->getLife() << "HP, " << this->players[index2]->getArmor() << "SH) ataca a " << this->players[index1]->getName() << "(" << this->players[index1]->getLife() << "HP, " << this->players[index1]->getArmor() << "SH)." << endl;
        if(this->players[index1]->getLife() > 0){
            this->players[index2]->setLife(this->players[index2]->getLife() - this->players[index1]->getDamage());
            cout << this->players[index1]->getName() << "(" << this->players[index1]->getLife() << "HP, " << this->players[index1]->getArmor() << "SH) ataca a " << this->players[index2]->getName() << "(" << this->players[index2]->getLife() << "HP, " << this->players[index2]->getArmor() << "SH)." << endl;
        }
        this->turn++;
    }
    cout << "La pelea ha terminado!" << endl;
    if(this->players[index1]->getLife() > 0){
        cout << this->players[index1]->getName() << " ha ganado la pelea!" << endl;
    }
    else{
        cout << this->players[index2]->getName() << " ha ganado la pelea!" << endl;
    }
    logBattle();
}

void battlefield::showDetails(){
    for(int i = 0; i < this->players.size(); i++){
        cout << this->players[i]->getName() << "(" << this->players[i]->getLife() << "HP, " << this->players[i]->getArmor() << "SH)" << endl;
    }
}

void battlefield::logBattle(){
    string log = "Turno " + to_string(this->turn) + ": " + this->players[0]->getName() + "(" + to_string(this->players[0]->getLife()) + "HP, " + to_string(this->players[0]->getArmor()) + "SH) y " + this->players[1]->getName() + "(" + to_string(this->players[1]->getLife()) + "HP, " + to_string(this->players[1]->getArmor()) + "SH)";
    this->log.push_back(log);
    ofstream outfile;
    outfile.open("log.txt", ios::app);
    outfile << log << endl;
    outfile.close();
}

void battlefield::determineWinner(){
    int index = 0;
    for(int i = 1; i < this->players.size(); i++){
        if(this->players[i]->getLife() > this->players[index]->getLife()){
            index = i;
        }
    }
    cout << "El ganador es " << this->players[index]->getName() << "!" << endl;
}