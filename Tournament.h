#include <iostream>

using namespace std;

#ifndef Tournament_h
#define Tournament_h

class Tournament() {
private:
    bool active;
    string name;
    string date;
    vector <int> vectorGames; // Change to vector of Games in the future
public:
    Tournament();
    Tournament(bool, string, string);
    // make contstructor?
    // make destructor
    void setName(string);
    void setDate(string);
    bool isActive();
    string getName(); // -- get name of tournament
    string getDate();
    string getResults();
};

#endif