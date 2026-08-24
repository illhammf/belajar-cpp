#include <iostream>

using namespace std;

int main()
{
    int angka = 10;

    // Pointer
    int* pointer = &angka;

    // Reference
    int& ref = angka;

    cout << "Melalui Pointer  : " << *pointer << endl;
    cout << "Melalui Reference: " << ref << endl;

    return 0;
}