#include "TournamentClass.h"

using namespace std;

Tournament::Tournament() {
    active = NULL;
    name = "";
    date = "";
}

Tournament::Tournament(string Name, string Date) {
    name = Name;
    date = Date;
    if ((name != "") and (date !="")) {
        active = true;
    }
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
    if ((name != "") and (date !="")) {
        active = true;
    }
}

void Tournament::setDate(string Date) {
    date = Date;
    if ((name != "") and (date !="")) {
        active = true;
    }
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
    // TODO: make results
    return "results pending...";
}