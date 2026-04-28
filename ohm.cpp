#include <iostream>
using namespace std;

int main() {
    float V, I, R;
    int pilihan;

    cout << "Kalkulator Hukum Ohm\n";
    cout << "1. Hitung Tegangan (V)\n";
    cout << "2. Hitung Arus (I)\n";
    cout << "3. Hitung Hambatan (R)\n";
    cout << "Pilih: ";
    cin >> pilihan;

    if (pilihan == 1) {
        cout << "Masukkan I dan R: ";
        cin >> I >> R;
        V = I * R;
        cout << "Tegangan = " << V << " Volt";
    }
    else if (pilihan == 2) {
        cout << "Masukkan V dan R: ";
        cin >> V >> R;
        I = V / R;
        cout << "Arus = " << I << " Ampere";
    }
    else if (pilihan == 3) {
        cout << "Masukkan V dan I: ";
        cin >> V >> I;
        R = V / I;
        cout << "Hambatan = " << R << " Ohm";
    }

    return 0;
}