#include <iostream>
using namespace std;

#ifndef UNIQUE_TOURNAMENT
#define UNIQUE_TOURNAMENT

class Tournament {
private:
    bool active;
    string name;
    string date;
    // vector <Game> vectorGames; // Change to vector of Games in the future

public:
    // TODO: make constructor? destructor
    Tournament();
    Tournament(string, string);
    Tournament(bool, string, string);
    
    // Setters
    void setActive(bool);
    void setName(string);
    void setDate(string);
    
    // Getters
    bool isActive();
    string getName();
    string getDate();
    string getResults();
    
    // Special
    void checkActive();
};

#endif