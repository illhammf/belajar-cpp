#include <iostream>

using namespace std;

int main()
{
    int angka = 100;

    const int& ref = angka; // Artinya Reference tersebut hanya digunakan untuk membaca

    cout << "Angka: " << angka << endl;
    cout << "Ref  : " << ref << endl;

    return 0;
}