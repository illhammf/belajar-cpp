#include <iostream>
using namespace std;

string cekBilangan(int angka)
{
    if (angka > 0)
    {
        return "Positif";
    }
    else if (angka < 0)
    {
        return "Negatif";
    }
    else
    {
        return "Nol";
    }
}

int main()
{
    int angka;

    cout << "Masukkan angka: ";
    cin >> angka;

    cout << "Bilangan tersebut adalah "
         << cekBilangan(angka)
         << "." << endl;

    return 0;
}