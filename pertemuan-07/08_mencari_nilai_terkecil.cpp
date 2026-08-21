#include <iostream>
using namespace std;

int main()
{
    int nilai[5] = {80, 90, 75, 88, 92};

    int terkecil = nilai[0]; // Menginisialisasi variabel terkecil dengan nilai pada indeks ke-0 dari array nilai

    for (int i = 1; i < 5; i++)
    {
        if (nilai[i] < terkecil) // dibaca sebagai "jika nilai pada indeks ke-i lebih kecil dari nilai terkecil saat ini"
        {
            terkecil = nilai[i];
        }
    }

    cout << "Nilai terkecil: " << terkecil << endl;

    return 0;
}