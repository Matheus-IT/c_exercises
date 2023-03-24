#include <iostream>
#include <string>

using namespace std;

int main() {
    unsigned int numOfTabs, numOfActions;

    cin >> numOfTabs >> numOfActions;

    for (unsigned int i = 0; i < numOfActions; i++) {
        string action;
        cin >> action;

        if (action == "fechou") {
            numOfTabs++;
        }

        if (action == "clicou") {
            numOfTabs--;
        }
    }

    cout << numOfTabs << endl;

    return 0;
}
