#include <iostream>

using namespace std;

void tambah(int& angka)
{
    angka += 10;
}

int main()
{
    int angka = 50;

    cout << "Sebelum: " << angka << endl;

    tambah(angka); // Menambah angka yang tadinya 50, ditambah 10 menjadi 60

    cout << "Sesudah: " << angka << endl;

    return 0;
}