#include <iostream>
using namespace std;

double tambah(double a, double b)
{
    return a + b;
}

double kurang(double a, double b)
{
    return a - b;
}

double kali(double a, double b)
{
    return a * b;
}

double bagi(double a, double b)
{
    return a / b;
}

int main()
{
    double angka1;
    double angka2;
    char operasi;

    cout << "Masukkan angka pertama: ";
    cin >> angka1;

    cout << "Masukkan operasi (+ - * /): ";
    cin >> operasi;

    cout << "Masukkan angka kedua: ";
    cin >> angka2;

    switch (operasi)
    {
        case '+':
            cout << "Hasil: " << tambah(angka1, angka2) << endl;
            break;

        case '-':
            cout << "Hasil: " << kurang(angka1, angka2) << endl;
            break;

        case '*':
            cout << "Hasil: " << kali(angka1, angka2) << endl;
            break;

        case '/':
            if (angka2 != 0)
            {
                cout << "Hasil: " << bagi(angka1, angka2) << endl;
            }
            else
            {
                cout << "Error: Tidak bisa membagi dengan nol." << endl;
            }
            break;

        default:
            cout << "Operasi tidak valid." << endl;
    }

    return 0;
}