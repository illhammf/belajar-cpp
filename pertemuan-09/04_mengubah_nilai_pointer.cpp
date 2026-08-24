#include <iostream>

using namespace std;

int main()
{
    int angka = 10;

    int* pointer = &angka;

    cout << "Sebelum: " << angka << endl;

    *pointer = 100; // yang awalnya 10, diubah menjadi 100

    cout << "Sesudah: " << angka << endl;

    return 0;
}