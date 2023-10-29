#include <iostream>

using namespace std;

void changeValueWithoutPointer(int variable) {
    variable += 10;
    cout << "variable: " << variable << endl;
    cout << "&variable: " << &variable << endl;
}

void changeValueWithPointer(int* variable) {
    *variable += 10;
    cout << "*variable: " << *variable << endl;
    cout << "variable: " << variable << endl;
}

int main() {
    int a = 5;
    int *p = &a;

    cout << "a: " << a << endl;
    cout << "&a: " <<  &a << endl;
    cout << "*p: " << *p << endl;
    cout << "p: " << p << endl << endl;

    changeValueWithoutPointer(a);
    changeValueWithoutPointer(*p);
    cout << "a: " << a << endl << endl;

    changeValueWithPointer(&a);
    changeValueWithPointer(p);
    cout << "a: " << a << endl;

    return 0;
}