#include <iostream>
using namespace std;

int main()
{
    int angka1 = 10;
    int angka2 = 10;

    // Operator increment (++) dan decrement (--) dapat digunakan dalam dua bentuk, yaitu prefix dan postfix
    // Prefix: Operator increment/decrement ditempatkan sebelum variabel, sehingga nilai variabel akan diubah terlebih dahulu sebelum digunakan dalam ekspresi
    // Postfix: Operator increment/decrement ditempatkan setelah variabel, sehingga nilai variabel akan digunakan terlebih dahulu dalam ekspresi sebelum diubah
    int hasil1 = angka1++;
    int hasil2 = ++angka2;

    // Menampilkan hasil
    cout << "=== POSTFIX ===" << endl;
    cout << "Hasil : " << hasil1 << endl;
    cout << "Angka : " << angka1 << endl;

    cout << endl; // 

    // Menampilkan hasil
    cout << "=== PREFIX ===" << endl;
    cout << "Hasil : " << hasil2 << endl;
    cout << "Angka : " << angka2 << endl;

    return 0;
}