#include <iostream>

using namespace std;

int main()
{
    int angka1 = 10;
    int angka2 = 20;

    int* pointer = &angka1;

    cout << "Pointer menunjuk angka1: " << *pointer << endl;

    pointer = &angka2;

    cout << "Pointer menunjuk angka2: " << *pointer << endl;

    return 0;
}