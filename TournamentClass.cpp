#include "TournamentClass.h"
#include "GameClass.h"
#include <iostream>

using namespace std;

Tournament::Tournament() {
    active = NULL;
    name = NULL;
    date = NULL;
}

Tournament::Tournament(bool Active, string Name, string Date) {
    active = Active;
    name = Name;
    date = Date;
};
// make contstructor?
// make destructor

void Tournament::setActive(bool Active) {
    active = Active;
}

void Tournament::setName(string Name) {
    name = Name;
}

void Tournament::setDate() {
    date = Date;
}

bool Tournament::isActive() {
    return active;
}

string Tournament::getName() {
    return name;
} // -- get name of tournament

string Tournament::getDate() {
    return date;
}

string getResults() {
    return "results pending...";
}