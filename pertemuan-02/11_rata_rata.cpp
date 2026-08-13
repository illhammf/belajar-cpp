#include <iostream>
using namespace std;

int main()
{
    double nilai1;
    double nilai2;
    double nilai3;

    cout << "Masukkan nilai 1: ";
    cin >> nilai1;

    cout << "Masukkan nilai 2: ";
    cin >> nilai2;

    cout << "Masukkan nilai 3: ";
    cin >> nilai3;

    double rataRata = (nilai1 + nilai2 + nilai3) / 3; // Menghitung rata-rata dari tiga nilai yang dimasukkan oleh pengguna

    cout << "Rata-rata: " << rataRata << endl;

    return 0;
}