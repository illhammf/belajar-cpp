#include <iostream>
using namespace std;

int main()
{
    const int JUMLAH = 5; // Mendeklarasikan konstanta JUMLAH dengan nilai 5, yang akan digunakan untuk menentukan ukuran array dan jumlah input yang akan diterima dari pengguna.

    int nilai[JUMLAH]; // Mendeklarasikan array nilai dengan ukuran JUMLAH (5), yang akan digunakan untuk menyimpan nilai-nilai yang dimasukkan oleh pengguna.

    for (int i = 0; i < JUMLAH; i++)
    {
        cout << "Masukkan nilai ke-" << i + 1 << ": ";
        cin >> nilai[i];
    }

    cout << endl;
    cout << "Data yang dimasukkan:" << endl;

    for (int i = 0; i < JUMLAH; i++)
    {
        cout << nilai[i] << endl;
    }

    return 0;
}