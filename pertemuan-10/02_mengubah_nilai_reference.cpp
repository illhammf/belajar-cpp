#include <iostream>

using namespace std;

int main()
{
    int angka = 10;

    int& ref = angka;

    cout << "Sebelum: " << angka << endl;

    ref = 100;

    cout << "Sesudah: " << angka << endl;

    return 0;
}