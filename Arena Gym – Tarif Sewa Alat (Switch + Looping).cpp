#include <iostream>
using namespace std;

int main() {
    int pilihan, durasi, tarifPer15 = 0;
    
    cout << "=== Arena Gym - Sewa Alat ===" << endl;
    cout << "1. Dumbbell (Rp 5000 / 15 menit)" << endl;
    cout << "2. Treadmill (Rp 10000 / 15 menit)" << endl;
    cout << "3. Barbell (Rp 8000 / 15 menit)" << endl;
    cout << "4. Static Bike (Rp 7000 / 15 menit)" << endl;
    cout << "Pilih alat (1-4): ";
    cin >> pilihan;
    
    cout << "Masukkan durasi pemakaian (menit): ";
    cin >> durasi;
    
    // Switch untuk menentukan tarif per 15 menit
    switch(pilihan) {
        case 1: tarifPer15 = 5000; break;
        case 2: tarifPer15 = 10000; break;
        case 3: tarifPer15 = 8000; break;
        case 4: tarifPer15 = 7000; break;
        default:
            cout << "Pilihan tidak valid." << endl;
            return 0;
    }
    
    // Hitung berapa blok 15 menit
    int blok = durasi / 15;
    
    // Looping untuk menjumlahkan tarif
    int total = 0;
    for (int i = 0; i < blok; i++) {
        total += tarifPer15;
    }
    
    cout << "Total biaya sewa: Rp " << total << endl;
    
    return 0;
}

