#include <iostream>

using namespace std;

int main()
{
    int angka[5] = {
        10,
        25,
        15,
        40,
        30
    };

    int* pointer = angka;

    int terbesar = *pointer;

    for (int i = 0; i < 5; i++)
    {
        if (*pointer > terbesar)
        {
            terbesar = *pointer;
        }

        pointer++;
    }

    cout << "Nilai terbesar: " << terbesar << endl;

    return 0;
}