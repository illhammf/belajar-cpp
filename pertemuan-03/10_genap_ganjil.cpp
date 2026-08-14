#include <iostream>
using namespace std;

int main()
{
    int angka;

    cout << "Masukkan angka: ";
    cin >> angka;

    cout << endl;

    cout << "Sisa pembagian dengan 2: "
         << angka % 2 << endl; // Menampilkan sisa pembagian angka dengan 2

    cout << "Apakah genap? "
         << (angka % 2 == 0) << endl; // Menampilkan apakah angka tersebut genap

    return 0;
}