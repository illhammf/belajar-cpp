#include <iostream>

using namespace std;

int main()
{
    int angka;

    cout << "Masukkan angka: ";
    cin >> angka;

    int* pointer = &angka;

    cout << endl;

    cout << "Nilai angka        : " << angka << endl;
    cout << "Alamat angka       : " << &angka << endl;
    cout << "Isi pointer        : " << pointer << endl;
    cout << "Nilai dari pointer : " << *pointer << endl;

    return 0;
}