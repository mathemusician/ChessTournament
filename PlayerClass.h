#include <iostream>

using namespace std;

#ifndef PLAYER_H
#define PLAYER_H

class Player {
private:
    bool active;
    string firstName;
    string middleName;
    string lastName;
    string clubName;
    string schoolName;
    string rating; // assumes USCF, if assigned an int, it will kill the program
                   // rating can only be between 0-4000 or unrated

public:
    Player();
    Player(string, string, string, string, string, string);
    Player(bool, string, string, string, string, string, string);

    // Setters
    void setFirstName(string);
    void setMiddleName(string);
    void setLastName(string);
    void setClubName(string);
    void setSchoolName(string);
    void setRating(string);
    
    // Getters
    bool isActive();
    string getFirstName();
    string getMiddleName();
    string getLastName();
    string getClubName();
    string getSchoolName();
    string getRating();
    string getName();
    
    // Special
    void checkActive();
    bool schoolOrClubExists();
    bool validRating();
};

#endif