#include <iostream>
#include "battlefield.h"

using namespace std;

int main(){
    //100 batallas
    for(int i = 0; i < 100; i++){
    battlefield bf;
    bf.generatePlayers();
    bf.showDetails();
    bf.fight();
    bf.determineWinner();
    }
    return 0;
}