#include <iostream>
#include <cmath>

using namespace std;

int main() {
    // Program 1
    cout << "Program 1:" << endl;
    int A1 = 5;
    cout << A1 + 2 << endl;
    cout << A1 << endl << endl;

    // Program 2
    cout << "Program 2:" << endl;
    int A2 = 5, B2 = 2;
    A2 = B2;
    cout << A2 << endl;
    cout << B2 << endl << endl;

    // Program 3
    cout << "Program 3:" << endl;
    int A3 = 7, B3, C3;
    B3 = (A3 / 2) * 2;
    C3 = A3 - B3;
    cout << C3 << endl << endl;

    // Program 4
    cout << "Program 4:" << endl;
    int A4 = 5, B4 = 2, X4;
    X4 = A4;
    A4 = B4;
    B4 = X4;
    cout << A4 << endl;
    cout << B4 << endl;

    return 0;
}

