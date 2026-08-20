#include <iostream>
using namespace std;

void tampilkanJudul()
{
    cout << "============================" << endl;
    cout << "     PROGRAM NILAI SISWA    " << endl;
    cout << "============================" << endl;
}

double hitungRataRata(double a, double b, double c)
{
    return (a + b + c) / 3;
}

string cekStatus(double nilai)
{
    if (nilai >= 75)
    {
        return "Lulus";
    }

    return "Tidak Lulus";
}

int main()
{
    double nilai1;
    double nilai2;
    double nilai3;

    tampilkanJudul();

    cout << "Nilai 1: ";
    cin >> nilai1;

    cout << "Nilai 2: ";
    cin >> nilai2;

    cout << "Nilai 3: ";
    cin >> nilai3;

    double rataRata = hitungRataRata(nilai1, nilai2, nilai3);

    cout << endl;
    cout << "Rata-rata: " << rataRata << endl;
    cout << "Status: " << cekStatus(rataRata) << endl;

    return 0;
}