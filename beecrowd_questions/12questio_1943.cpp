#include <iostream>

using namespace std;

int main() {
    uint16_t n;

    cin >> n;

    if (n == 1) {
        n = 1;
    } else if (n > 1 && n <= 3) {
        n = 3;
    } else if (n > 3 && n <= 5) {
        n = 5;
    } else if (n > 5 && n <= 10) {
        n = 10;
    } else if (n > 10 && n <= 25) {
        n = 25;
    } else if (n > 25 && n <= 50) {
        n = 50;
    } else {
        n = 100;
    }

    cout << "Top " << n << endl;

    return 0;
}
