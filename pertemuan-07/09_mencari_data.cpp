#include <iostream>
using namespace std;

int main()
{
    int nilai[5] = {80, 90, 75, 88, 92};

    int cari; // Mendeklarasikan variabel cari yang akan digunakan untuk menyimpan nilai yang ingin dicari dalam array nilai

    cout << "Masukkan nilai yang ingin dicari: ";
    cin >> cari;

    bool ditemukan = false; // Mendeklarasikan variabel boolean ditemukan yang akan digunakan untuk menandai apakah nilai yang dicari ditemukan dalam array nilai atau tidak. Nilai awalnya diatur ke false, yang berarti nilai belum ditemukan.

    for (int i = 0; i < 5; i++)
    {
        if (nilai[i] == cari) // dibaca sebagai "jika nilai pada indeks ke-i sama dengan nilai yang dicari"
        {
            ditemukan = true; // Menandai bahwa nilai yang dicari telah ditemukan dalam array nilai

            cout << "Data ditemukan pada index "
                 << i << endl;

            break;
        }
    }

    if (!ditemukan)
    {
        cout << "Data tidak ditemukan." << endl;
    }

    return 0;
}