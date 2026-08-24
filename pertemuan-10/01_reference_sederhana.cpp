#include <iostream>

using namespace std;

int main()
{
    int angka = 10;

    int& ref = angka; // ref bukan data baru. ref adalah alias dari angka.

    cout << "Nilai angka: " << angka << endl;
    cout << "Nilai ref  : " << ref << endl;

    return 0;
}