#include <iostream>
using namespace std;

int main()
{
    int angka = 1;

    // Jalankan terlebih dahulu, kemudian cek kondisi
    do
    {
        cout << angka << endl;

        angka++;
    }
    while (angka <= 5);

    return 0;
}