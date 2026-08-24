#include <iostream>

using namespace std;

void tampilkanNilai(int* pointer)
{
    cout << "Nilai: " << *pointer << endl;
}

int main()
{
    int angka = 50;

    tampilkanNilai(&angka);

    return 0;
}