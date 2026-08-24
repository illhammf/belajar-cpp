#include <iostream>

using namespace std;

int main()
{
    int angka = 10;

    int& ref = angka;

    cout << "Sebelum: " << angka << endl;

    ref = 100; // Karena ref merupakan alias dari angka.

    cout << "Sesudah: " << angka << endl;

    return 0;
}