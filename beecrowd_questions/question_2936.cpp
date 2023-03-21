#include <iostream>

using namespace std;

int main() {
    unsigned n1, n2, n3, n4, n5;
    
    cin >> n1;
    cin >> n2;
    cin >> n3;
    cin >> n4;
    cin >> n5;

    unsigned total = (n1*300) + (n2*1500) + (n3*600) + (n4*1000) + (n5*150) + 225;

    cout << total << endl;
    
    return 0;
}