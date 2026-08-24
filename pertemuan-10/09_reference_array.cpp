#include <iostream>

using namespace std;

void tampilkanArray(int (&angka)[5])
{
    for (int i = 0; i < 5; i++)
    {
        cout << angka[i] << endl;
    }
}

int main()
{
    int angka[5] = {
        10,
        20,
        30,
        40,
        50
    };

    tampilkanArray(angka);

    return 0;
}