#include <iostream>
using namespace std;

int main()
{
    int a = 10;
    int b = 3;

    double hasil = static_cast<double>(a) / b; // Ini adalah contoh type casting, mengubah tipe data a menjadi double sebelum melakukan pembagian

    cout << "Hasil pembagian: " << hasil << endl;

    return 0;
}