#include <iostream>

using namespace std;

int main(int argc, char const *argv[]) {
    uint numPlayers, numOfSheets, numOfSheetsPerPlayer;

    cin >> numPlayers >> numOfSheets >> numOfSheetsPerPlayer;

    char answer = (numOfSheetsPerPlayer * numPlayers <= numOfSheets) ? 'S' : 'N';

    cout << answer << endl;
    
    return 0;
}
