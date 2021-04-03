#include "Tournament.h"
#include <iostream>

using namespace std;

Tournament::Tournament() {
    deleted = NULL;
    name = NULL;
    date = NULL;
}

Tournament::Tournament(bool Deleted, string Name, string Date) {
    deleted = Deleted;
    name = Name;
    date = Date;
};
// make contstructor?
// make destructor
void Tournament::setName(string Name) {
    name = Name;
};

void Tournament::setDate() {
    date = Date;
};

string Tournament::getName() {
    return name;
}; // -- get name of tournament

string Tournament::getDate() {
    return date;
};

string getResults() {
    return "results pending...";
};