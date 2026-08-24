#include <iostream>

using namespace std;

int main()
{
    int angka = 10;

    int* pointer = &angka;

    cout << "Nilai angka : " << angka << endl;
    cout << "Isi pointer : " << pointer << endl;

    return 0;
}