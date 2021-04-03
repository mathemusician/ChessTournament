#include "PlayerClass.h"
#include <iostream>

using namespace std;

Player::Player() {
    active = NULL;
    firstName = "";
    middleName = "";
    lastName = "";
    clubName = "";
    schoolName = "";
    rating = "";
}


Player::Player(string FirstName, string MiddleName, string LastName, string ClubName, string SchoolName, string Rating) {
    firstName = FirstName;
    middleName = MiddleName;
    lastName = LastName;
    clubName = ClubName;
    schoolName = SchoolName;
    rating = Rating;
    checkActive();
}


Player::Player(bool Active, string FirstName, string MiddleName, string LastName, string ClubName, string SchoolName, string Rating) {
    active = Active;
    firstName = FirstName;
    middleName = MiddleName;
    lastName = LastName;
    clubName = ClubName;
    schoolName = SchoolName;
    rating = Rating;
    // No check for active so that I can run unit test for specific errors
}

// #----------Setters----------#

void Player::setFirstName(string FirstName) {
    firstName = FirstName;
    checkActive();
}

void Player::setMiddleName(string MiddleName) {
    middleName = MiddleName;
}
void Player::setLastName(string LastName) {
    lastName = LastName;
    checkActive();
}

void Player::setClubName(string ClubName) {
    clubName = ClubName;
    checkActive();
}

void Player::setSchoolName(string SchoolName) {
    schoolName = SchoolName;
    checkActive();
}

void Player::setRating(string Rating) {
    rating = Rating;
    checkActive();
}

// #----------Getters----------#

bool Player::isActive() {
    return active;
}

string Player::getFirstName(string) {
    return firstName;
}  

string Player::getMiddleName(string) {
    return middleName;
}

string Player::getLastName(string) {
    return lastName;
}

string Player::getClubName(string) {
    return clubName;
}

string Player::getSchoolName(string) {
    return schoolName;
}

string Player::getRating(string) {
    return rating;
}

// #----------Special----------#

void Player::checkActive() {

    if ((firstName != "") and (lastName != "") and schoolOrClubExists() and validRating() and (active != true)) {
        active = true; // sanity check
        cout << "Note: a Game was activated since assignment of name, ELO, and/or school or club of origin" << endl;
    } // sanity check

    if (((firstName == "") or (lastName == "") or (rating == "") or not schoolOrClubExists() or not validRating()) && active == true) {
        active = false;
        cout << "Note: a Game was inactivated since assignment of name, ELO, and/or school or club of origin is blank" << endl;
    }
}

bool Player::schoolOrClubExists() {
    if (schoolName != "" or clubName != "") {
        return true;
    } else {
        return false;
    }
}

bool Player::validRating() {
    int ratingCap = 2700;
    if (rating != "") {
        if (rating == "unrated") {
            return true;
        } else {
            
            try {
                int intRating = stoi(rating);
                if (0 <= intRating < ratingCap) {
                    return true;
                } else {
                    return false;
                }
            } catch(const std::exception& e) {
                cout << "rating is greater than rating cap: " << ratingCap << endl;
                /* std::cerr << e.what() << '\n'; */
            }
            
        }
    } else {
        return false;
    }
}