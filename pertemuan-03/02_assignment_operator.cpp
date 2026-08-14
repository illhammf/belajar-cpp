#include <iostream>
using namespace std;

int main()
{
    int angka = 10; 

    cout << "Nilai awal : " << angka << endl;

    angka += 5;
    cout << "Setelah += 5 : " << angka << endl;

    angka -= 3;
    cout << "Setelah -= 3 : " << angka << endl;

    angka *= 2;
    cout << "Setelah *= 2 : " << angka << endl;

    angka /= 4;
    cout << "Setelah /= 4 : " << angka << endl;

    angka %= 2;
    cout << "Setelah %= 2 : " << angka << endl;

    return 0;
}