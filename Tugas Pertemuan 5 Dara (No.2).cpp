#include <iostream>
#include <cmath> 

using namespace std;

int main() {
    double c, A, B;
    double hasil;

    cout << "Masukkan C: ";
    cin >> c;

    cout << "Masukkan A: ";
    cin >> A;

    cout << "Masukkan B: ";
    cin >> B;

    if (c == 0) {
        cout << "Error: C tidak boleh 0 karena pembagian dengan nol tidak terdefinisi." << endl;
        return 1;
    }

    hasil = (-2 / c) + A + B;

    cout << "Hasil dari -2 / C + A + B adalah: " << hasil << endl;

    return 0;
}

