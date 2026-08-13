#include <iostream>
using namespace std;

int main()
{
    double panjang;
    double lebar;

    cout << "Masukkan panjang: ";
    cin >> panjang;

    cout << "Masukkan lebar: ";
    cin >> lebar;

    double luas = panjang * lebar; // Menghitung luas persegi panjang dengan rumus panjang * lebar

    cout << "Luas persegi panjang: " << luas << endl;

    return 0;
}