#include <iostream>
using namespace std;

bool isGenap(int angka) // Fungsi untuk memeriksa apakah sebuah bilangan genap atau tidak
{
    return angka % 2 == 0; // Dibaca sebagai "kembalikan true jika angka habis dibagi 2, jika tidak kembalikan false"
}

int main()
{
    cout << boolalpha; // Mengatur output boolean menjadi true/false yang tadinya 1/0

    cout << isGenap(10) << endl;
    cout << isGenap(7) << endl;

    return 0;
}