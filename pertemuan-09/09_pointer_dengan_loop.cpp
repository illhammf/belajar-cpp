#include <iostream>

using namespace std;

int main()
{
    int angka[5] = {
        10,
        20,
        30,
        40,
        50
    };

    int* pointer = angka;

    for (int i = 0; i < 5; i++)
    {
        cout << "Nilai: " << *pointer << endl;

        pointer++;
    }

    return 0;
}