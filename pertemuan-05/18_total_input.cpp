#include <iostream>
using namespace std;

// Program ini akan meminta pengguna untuk memasukkan 3 angka, kemudian menghitung total dari ketiga angka tersebut
int main()
{
    int angka;
    int total = 0;

    for (int i = 1; i <= 3; i++)
    {
        cout << "Masukkan angka ke-" << i << ": ";
        cin >> angka;

        total += angka;
    }

    cout << "Total: " << total << endl;

    return 0;
}