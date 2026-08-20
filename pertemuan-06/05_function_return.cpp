#include <iostream>
using namespace std;

int tambah(int a, int b)
{
    return a + b; // fungsi dengan return value, mengembalikan hasil penjumlahan dari parameter a dan b
}

int main()
{
    int hasil = tambah(10, 20); // memanggil fungsi tambah dengan parameter 10 dan 20, dan menyimpan hasilnya ke dalam variabel hasil

    cout << "Hasil: " << hasil << endl;

    return 0;
}