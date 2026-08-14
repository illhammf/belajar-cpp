#include <iostream>
using namespace std;

int main()
{
    int angka1 = 10;
    int angka2 = 10;

    int hasil1 = angka1++;
    int hasil2 = ++angka2;

    cout << "=== POSTFIX ===" << endl;
    cout << "Hasil : " << hasil1 << endl;
    cout << "Angka : " << angka1 << endl;

    cout << endl;

    cout << "=== PREFIX ===" << endl;
    cout << "Hasil : " << hasil2 << endl;
    cout << "Angka : " << angka2 << endl;

    return 0;
}