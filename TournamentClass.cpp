#include "TournamentClass.h"

using namespace std;

Tournament::Tournament() {
    active = NULL;
    name = "";
    date = "";
}

Tournament::Tournament(bool Active, string Name, string Date) {
    active = Active;
    name = Name;
    date = Date;
}
// make constructor?
// make destructor

// #----------Setters----------#

void Tournament::setActive(bool Active) {
    active = Active;
}

void Tournament::setName(string Name) {
    name = Name;
}

void Tournament::setDate(string Date) {
    date = Date;
}

// #----------Getters----------#

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