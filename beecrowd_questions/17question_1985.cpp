#include <iostream>
#include <string>
#include <map>
#include <iomanip>

using namespace std;

int main() {
    map<string, float> menu = {
        {"1001", 1.5},
        {"1002", 2.5},
        {"1003", 3.5},
        {"1004", 4.5},
        {"1005", 5.5},
    };

    uint16_t n;
    cin >> n;

    float total = 0;

    for (int i = 0; i < n; i++) {
        string key;
        uint16_t qtt;
        
        cin >> key >> qtt;

        total += menu[key] * qtt;
    }

    cout << fixed << setprecision(2) << total << endl;
    return 0;
}