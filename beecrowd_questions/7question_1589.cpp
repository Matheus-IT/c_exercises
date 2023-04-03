#include <iostream>

using namespace std;

int main() {
    uint32_t t;

    cin >> t;

    for (uint32_t i = 0; i < t; i++) {
        uint32_t r1, r2;
        cin >> r1 >> r2;
        cout << r1 + r2 << endl;
    } 
    return 0;
}