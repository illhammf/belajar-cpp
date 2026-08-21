#include <iostream>
using namespace std;

int main()
{
    int nilai[5] = {80, 90, 75, 88, 92};

    int total = 0;

    for (int i = 0; i < 5; i++)
    {
        total += nilai[i]; // Menambahkan nilai pada indeks ke-i ke dalam total
    }

    double rataRata = (double) total / 5; // Menghitung rata-rata dengan membagi total dengan jumlah elemen (5) dan mengkonversi total menjadi double untuk mendapatkan hasil desimal

    cout << "Total      : " << total << endl;
    cout << "Rata-rata  : " << rataRata << endl;

    return 0;
}