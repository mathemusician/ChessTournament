#include <iostream>

using namespace std;

#ifndef Game_h
#define Game_h

Game() {
private:
    bool active;
    string firstPlayer;
    string secondPlayer;
    string result;

public:
    // TODO: make destructor and maybe constructor
    Game();
    Game(bool, string, string, string);
    void setActive(bool);
    void setFirstPlayer(string);
    void setSecondPlayer(string);
    void setResult(string);
    bool isActive();
    string getFirstPlayer();
    string getSecondPlayer();
    string getResult();
};

#endif