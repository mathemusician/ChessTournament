#include <iostream>

using namespace std;

int main() {
    cout << "Welcome to the chess tournament!" << endl;
    cout << "Loading previous game data..." << endl;

    Tournament newTournament(true, 'Test Tournament', '03/14/2021');
    Game newGame(true, 'Magnus Carlsen', 'Wesley So', '0.5-0.5')
    

    return 0;
}