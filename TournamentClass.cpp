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
    checkActive();
}

Tournament::Tournament(bool Active, string Name, string Date) {
    active = Active;
    name = Name;
    date = Date;
    // No check for active so that I can run unit test for specific errors
}


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

string Tournament::getResults() {
    // TODO: make results
    return "results pending...";
}

// #----------Special----------#

void Tournament::checkActive() {
    if ((name != "") and (date != "") and (active != true)) {
        active = true; // sanity check
        cout << "Note: a Tournament was activated since assignment of name and date" << endl;
    }

    if (((name == "") or (date == "")) && active == true) {
        active = false;
        cout << "Note: a Tournament was inactivated since assignment of name and/or date is blank" << endl;
    }


}