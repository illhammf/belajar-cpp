#include <iostream>
using namespace std;

// Program ini akan meminta pengguna untuk memasukkan 5 angka, kemudian menentukan angka terbesar dari kelima angka tersebut
int main()
{
    int angka;
    int terbesar;

    cout << "Masukkan angka ke-1: ";
    cin >> terbesar;

    for (int i = 2; i <= 5; i++)
    {
        cout << "Masukkan angka ke-" << i << ": ";
        cin >> angka;

        if (angka > terbesar)
        {
            terbesar = angka;
        }
    }

    cout << "Angka terbesar: " << terbesar << endl;

    return 0;
}