#include <iostream>

using namespace std;

int main()
{
    int angka;

    cout << "Masukkan angka: ";
    cin >> angka;

    int* pointer = &angka;

    cout << endl;

    cout << "=== DATA AWAL ===" << endl;
    cout << "Nilai   : " << angka << endl;
    cout << "Alamat  : " << pointer << endl;

    cout << endl;

    *pointer = *pointer * 2;

    cout << "=== SETELAH DIUBAH ===" << endl;
    cout << "Nilai   : " << angka << endl;
    cout << "Pointer : " << *pointer << endl;

    return 0;
}