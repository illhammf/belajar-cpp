#include <iostream>
using namespace std;

int main()
{
    int angka = 10;

    cout << "Nilai awal : " << angka << endl;

    angka++;
    cout << "Setelah ++ : " << angka << endl; // Operator increment (++) akan menambahkan nilai variabel sebesar 1

    angka++;
    cout << "Setelah ++ : " << angka << endl;

    angka--;
    cout << "Setelah -- : " << angka << endl; // Operator decrement (--) akan mengurangi nilai variabel sebesar 1

    angka--;
    cout << "Setelah -- : " << angka << endl;

    return 0;
}