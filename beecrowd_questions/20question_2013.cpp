#include <iostream>

using namespace std;

int main() {
    uint16_t n;
    int16_t s;
    cin >> n >> s;

    uint16_t lowestBalance = s;

    for (uint16_t i = 0; i < n; i++) {
        int16_t m;
        cin >> m;

        if (m >= 0) {
            s += m;
        } else {
            s -= _ASM_GENERIC_ERRNO_BASE_H(m);
        }
        
        if (s < lowestBalance) {
            lowestBalance = s;
        }
    }

    cout << lowestBalance << endl;

    return 0;
}
