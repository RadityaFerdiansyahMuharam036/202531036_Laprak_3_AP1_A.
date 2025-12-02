#include <iostream>
using namespace std;

int main() {
    int umur;

    cout << "Masukkan umur peserta: ";
    cin >> umur;

    cout << "Level peralatan yang diperbolehkan: ";

    // Nested IF
    if (umur < 10) {
        cout << "Starter Kit";
    } else {
        if (umur <= 15) {
            cout << "Basic Gear";
        } else {
            if (umur <= 20) {
                cout << "Pro Gear";
            } else {
                cout << "Expert Gear";
            }
        }
    }

    cout << endl;
    return 0;
}

