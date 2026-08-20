#include <iostream>
using namespace std;

int tambah(int a, int b) // Fungsi untuk melakukan penjumlahan dua bilangan
{
    return a + b;
}

int kurang(int a, int b) // Fungsi untuk melakukan pengurangan dua bilangan
{
    return a - b;
}

int kali(int a, int b) // Fungsi untuk melakukan perkalian dua bilangan
{
    return a * b;
}

double bagi(double a, double b) // Fungsi untuk melakukan pembagian dua bilangan
{
    return a / b;
}

int main()
{
    cout << "Tambah : " << tambah(10, 5) << endl;
    cout << "Kurang : " << kurang(10, 5) << endl;
    cout << "Kali   : " << kali(10, 5) << endl;
    cout << "Bagi   : " << bagi(10, 5) << endl;

    return 0;
}