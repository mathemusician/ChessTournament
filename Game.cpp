#include <iostream>

using namespace std;

Game::Game() {
    active = NULL;
    firstPlayer = NULL;
    secondPlayer = NULL;
    result = NULL;
};

Game::Game(bool Active, string FirstPlayer, string secondPlayer, string Result) {
    active = Active;
    firstPlayer = FirstPlayer;
    secondPlayer = SecondPlayer;
    result = Result;
};

// #----------Setters----------#

void Game::setActive(bool Active) {
    active = Active;
};

void Game::setFirstPlayer(string FirstPlayer) {
    firstPlayer = FirstPlayer;
};

void Game::setSecondPlayer(string SecondPlayer) {
    secondPlayer = SecondPlayer;
};

void Game::setResult(string Result) {
    result = Result;
};

// #----------Getters----------#

bool Game::isActive() {
    return active;
};

string Game::getFirstPlayer() {
    return firstPlayer;
};

string Game::getSecondPlayer() {
    return secondPlayer;
};
string Game::getResult() {
    return result;
};