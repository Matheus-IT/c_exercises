#include <iostream>

using namespace std;

void a() {
    cout << "       A" << endl;
}

void b() {
    cout << "      B B" << endl;
}

void c() {
    cout << "     C   C" << endl;
}

void d() {
    cout << "    D     D" << endl;
}

int main(int argc, char const *argv[]) {
    a();
    b();
    c();
    d();
    cout << "   E       E" << endl;
    d();
    c();
    b();
    a();
    return 0;
}
