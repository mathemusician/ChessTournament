/*
run brew install gcc
g++-10 -Wall -Wextra main.cpp TournamentClass.cpp GameClass.cpp -o binaries/main
./binaries/main
*/

#include "TournamentClass.h"
#include "GameClass.h"
#include <iostream>

using namespace std;

int main() {
    cout << "Welcome to the chess tournament!" << endl;
    cout << "Loading previous game data..." << endl;


    // make tournament match pairings

    Tournament newTournament("Test Tournament", "03/14/2021");
    Game newGame("Magnus Carlsen", "Wesley So", "0.5-0.5");
    newGame.setFirstPlayer("");

    // update games and elo

    // save to file and load

    // make pretty with cli gui, sort of



    return 0;
}