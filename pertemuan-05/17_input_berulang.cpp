#include <iostream>
using namespace std;

int main()
{
    int angka;

    for (int i = 1; i <= 3; i++)
    {
        cout << "Masukkan angka ke-" << i << ": ";
        cin >> angka;
    }

    return 0;
}