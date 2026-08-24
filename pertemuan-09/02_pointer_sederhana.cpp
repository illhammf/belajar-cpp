#include <iostream>

using namespace std;

int main()
{
    int angka = 10; // variabel biasa

    int* pointer = &angka; // pointer yang menunjuk ke variabel angka, int* digunakan untuk mendeklarasikan pointer yang menunjuk ke tipe data int

    cout << "Nilai angka : " << angka << endl;
    cout << "Isi pointer : " << pointer << endl;

    return 0;
}