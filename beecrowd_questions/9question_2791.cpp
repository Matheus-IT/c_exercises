#include <iostream>

using namespace std;

int main() {
    uint16_t c1, c2, c3, c4;

    cin >> c1 >> c2 >> c3 >> c4;

    if (c1 == 1) {
        cout << 1 << endl;
    } else if (c2 == 1) {
        cout << 2 << endl;
    } else if (c3 == 1) {
        cout << 3 << endl;
    } else {
        cout << 4 << endl;
    }
    return 0;
}
