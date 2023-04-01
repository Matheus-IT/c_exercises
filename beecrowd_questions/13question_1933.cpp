#include <iostream>

using namespace std;

int main() {
    uint16_t a, b;

    cin >> a >> b;

    uint16_t n;

    if (a == b || a > b) {
        n = a;
    } else {
        n = b;
    }

    cout << n << endl;
    return 0;
}