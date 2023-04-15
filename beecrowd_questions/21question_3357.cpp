#include <iostream>
#include <iomanip>
#include <string>
#include <list>

using namespace std;

int main() {
    uint16_t n;
    float l, q;
    cin >> n >> l >> q;

    string rich, temp;
    list<string> people;

    for (uint16_t i = 0; i < n; i++) {
        cin >> temp;
        people.push_back(temp);
    }

    uint16_t i = 0;
    list<string>::iterator peopleIt = people.begin();

    while (true) {
        if (l - q > 0) {
            l -= q;
        } else {
            advance(peopleIt, i);
            rich = *peopleIt;
            break;
        }
        i++;
        if (i == people.size()) {
            i = 0;
        }
    }

    cout << rich << " " << fixed << setprecision(1) << l << endl;
    return 0;
}
