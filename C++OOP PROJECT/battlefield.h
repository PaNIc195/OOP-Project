#ifndef battlefield_h
#define battlefield_h

#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include "player.h"
#include "soldier.h"
#include "wizard.h"

using namespace std;

class battlefield{
    private:
        vector<player*> players;
        vector<string> log;
        int turn;
    public:
        battlefield();
        void addPlayer(player* player);
        void generatePlayers();
        void fight();
        void showDetails();
        void logBattle();
        void determineWinner();
};
#endif