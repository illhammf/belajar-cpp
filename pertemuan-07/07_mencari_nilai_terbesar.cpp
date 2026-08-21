#include <iostream>
using namespace std;

int main()
{
    int nilai[5] = {80, 90, 75, 88, 92};

    int terbesar = nilai[0]; // Menginisialisasi variabel terbesar dengan nilai pada indeks ke-0 dari array nilai

    for (int i = 1; i < 5; i++)
    {
        if (nilai[i] > terbesar) // dibaca sebagai "jika nilai pada indeks ke-i lebih besar dari nilai terbesar saat ini"
        {
            terbesar = nilai[i];
        }
    }

    cout << "Nilai terbesar: " << terbesar << endl;

    return 0;
}