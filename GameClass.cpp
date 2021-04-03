#include "GameClass.h"
#include <iostream>
using namespace std;


Game::Game() {
    active = NULL;
    firstPlayer = "";
    secondPlayer = "";
    result = "";
}

Game::Game(string FirstPlayer, string SecondPlayer, string Result) {
    firstPlayer = FirstPlayer;
    secondPlayer = SecondPlayer;
    result = Result;
    checkActive();
}

Game::Game(bool Active, string FirstPlayer, string SecondPlayer, string Result) {
    active = Active;
    firstPlayer = FirstPlayer;
    secondPlayer = SecondPlayer;
    result = Result;
    // No check for active bool so that I can run unit test for specific errors
}

// #----------Setters----------#

void Game::setActive(bool Active) {
    active = Active;
    checkActive();
}

void Game::setFirstPlayer(string FirstPlayer) {
    firstPlayer = FirstPlayer;
    checkActive();
}

void Game::setSecondPlayer(string SecondPlayer) {
    secondPlayer = SecondPlayer;
    checkActive();
}

void Game::setResult(string Result) {
    result = Result;
    checkActive();
}

// #----------Getters----------#

bool Game::isActive() {
    return active;
}

string Game::getFirstPlayer() {
    return firstPlayer;
}

string Game::getSecondPlayer() {
    return secondPlayer;
}
string Game::getResult() {
    return result;
}

// #----------Special----------#

void Game::checkActive() {
    if ((firstPlayer != "") and (secondPlayer != "") and (result != "") and (active != true)) {
        active = true; // sanity check
        cout << "Note: a Game was activated since assignment of players and result" << endl;
    }

    if (((firstPlayer == "") or (secondPlayer == "") or (result == "")) && active == true) {
        active = false;
        cout << "Note: a Game was inactivated since assignment of players and/or result is blank" << endl;
    }


}