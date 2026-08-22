#include <iostream>
using namespace std;

void inputNilai(int nilai[], int ukuran)
{
    for (int i = 0; i < ukuran; i++)
    {
        cout << "Masukkan nilai ke-" << i + 1 << ": ";
        cin >> nilai[i];
    }
}

void tampilkanNilai(int nilai[], int ukuran)
{
    cout << endl;
    cout << "Data Nilai" << endl;
    cout << "----------" << endl;

    for (int i = 0; i < ukuran; i++)
    {
        cout << "Nilai ke-" << i + 1
             << ": " << nilai[i] << endl;
    }
}

int hitungTotal(int nilai[], int ukuran)
{
    int total = 0;

    for (int i = 0; i < ukuran; i++)
    {
        total += nilai[i];
    }

    return total;
}

int cariTerbesar(int nilai[], int ukuran)
{
    int terbesar = nilai[0];

    for (int i = 1; i < ukuran; i++)
    {
        if (nilai[i] > terbesar)
        {
            terbesar = nilai[i];
        }
    }

    return terbesar;
}

int cariTerkecil(int nilai[], int ukuran)
{
    int terkecil = nilai[0];

    for (int i = 1; i < ukuran; i++)
    {
        if (nilai[i] < terkecil)
        {
            terkecil = nilai[i];
        }
    }

    return terkecil;
}

int main()
{
    const int JUMLAH = 5;

    int nilai[JUMLAH];

    inputNilai(nilai, JUMLAH);

    tampilkanNilai(nilai, JUMLAH);

    int total = hitungTotal(nilai, JUMLAH);

    double rataRata = (double) total / JUMLAH;

    int terbesar = cariTerbesar(nilai, JUMLAH);

    int terkecil = cariTerkecil(nilai, JUMLAH);

    cout << endl;
    cout << "Hasil Pengolahan" << endl;
    cout << "-----------------" << endl;

    cout << "Total       : " << total << endl;
    cout << "Rata-rata   : " << rataRata << endl;
    cout << "Terbesar    : " << terbesar << endl;
    cout << "Terkecil    : " << terkecil << endl;

    return 0;
}