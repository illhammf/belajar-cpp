#include <iostream>
using namespace std;

double hitungRataRata(double nilai1, double nilai2, double nilai3)
{
    return (nilai1 + nilai2 + nilai3) / 3;
}

int main()
{
    double nilai1;
    double nilai2;
    double nilai3;

    cout << "Nilai 1: ";
    cin >> nilai1;

    cout << "Nilai 2: ";
    cin >> nilai2;

    cout << "Nilai 3: ";
    cin >> nilai3;

    double rataRata = hitungRataRata(nilai1, nilai2, nilai3);

    cout << "Rata-rata: " << rataRata << endl;

    return 0;
}