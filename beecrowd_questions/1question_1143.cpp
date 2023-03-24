#include <iostream>

using namespace std;

int main() {
    unsigned n;
    cin >> n;

    for (unsigned i = 0; i < n; i++) {
        cout << i+1 << " " << (i+1)*(i+1) << " " << (i+1)*(i+1)*(i+1) << "\n";
    }
    return 0;
}