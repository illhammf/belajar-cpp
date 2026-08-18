#include <iostream>
using namespace std;

// Program ini akan meminta pengguna untuk memasukkan 5 angka, kemudian menentukan apakah angka tersebut positif, negatif, atau nol
int main()
{
    int angka;

    for (int i = 1; i <= 5; i++)
    {
        cout << "Masukkan angka ke-" << i << ": ";
        cin >> angka;

        if (angka > 0)
        {
            cout << "Positif" << endl;
        }
        else if (angka < 0)
        {
            cout << "Negatif" << endl;
        }
        else
        {
            cout << "Nol" << endl;
        }

        cout << endl;
    }

    return 0;
}