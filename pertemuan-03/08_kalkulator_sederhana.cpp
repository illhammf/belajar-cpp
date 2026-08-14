#include <iostream>
using namespace std;

int main()
{
    double angka1;
    double angka2;

    cout << "=== KALKULATOR SEDERHANA ===" << endl;

    cout << "Masukkan angka pertama: ";
    cin >> angka1;

    cout << "Masukkan angka kedua: ";
    cin >> angka2;

    cout << endl;

    cout << "Penjumlahan : " << angka1 + angka2 << endl;
    cout << "Pengurangan : " << angka1 - angka2 << endl;
    cout << "Perkalian   : " << angka1 * angka2 << endl;
    cout << "Pembagian   : " << angka1 / angka2 << endl;

    return 0;
}