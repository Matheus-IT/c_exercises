#include <iostream>

using namespace std;

int main() {
    uint16_t n;
    cin >> n;

    for (int i = 1; i <= n; i++) {
        for (int j = 0; j < 2; j++) {
            uint32_t x;

            if (j == 0) {
                x = i * (i*i + j);
            }

            cout << i << " " << i*i + j << " " << x+j << endl;
        }
    }

    return 0;
}