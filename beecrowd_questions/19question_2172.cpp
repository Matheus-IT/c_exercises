#include <iostream>

using namespace std;

int main() {
    uint32_t x, m;

    while (true) {
        cin >> x >> m;

        if (x == 0 && m == 0) {
            break;
        }

        cout << x * m << endl;
    }

    return 0;
}