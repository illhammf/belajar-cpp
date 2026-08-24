#include <iostream>

using namespace std;

void ubahNilai(int& angka)
{
    angka = 100;
}

int main()
{
    int angka = 10;

    cout << "Sebelum: " << angka << endl;

    ubahNilai(angka);

    cout << "Sesudah: " << angka << endl;

    return 0;
}