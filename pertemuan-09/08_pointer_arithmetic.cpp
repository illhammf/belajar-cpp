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

    cout << *pointer << endl;

    pointer++;

    cout << *pointer << endl;

    pointer++;

    cout << *pointer << endl;

    return 0;
}