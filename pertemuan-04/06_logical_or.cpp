#include <iostream>
using namespace std;

int main()
{
    int hari;

    cout << "Masukkan nomor hari (1-7): ";
    cin >> hari;

    // Menggunakan operator logika OR (||) untuk memeriksa apakah hari adalah weekend
    // Bisa disebut ATAU (OR) karena kita memeriksa dua kondisi: hari harus
    if (hari == 6 || hari == 7)
    {
        cout << "Weekend." << endl;
    }
    else
    {
        cout << "Hari kerja." << endl;
    }

    return 0;
}