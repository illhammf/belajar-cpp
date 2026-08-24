#include <iostream>

using namespace std;

int main()
{
    int angka[3] = {
        10,
        20,
        30
    };

    int* pointer = angka;

    cout << "Nilai pertama: " << *pointer << endl;

    return 0;
}