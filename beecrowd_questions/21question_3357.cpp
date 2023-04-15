#include <iostream>
#include <string>

using namespace std;

int main() {
    uint16_t n;
    float l, q;
    cin >> n >> l >> q;

    string rich, temp;

    for (uint16_t i = 0; i < n; i++) {
        if (i == n-1) {
            cin >> rich;
        } else {
            cin >> temp;
        }
    }
    float res = l % int (n * q);
    cout << rich << " " << res << endl;
    return 0;
}
