#include <iostream>

using namespace std;

void tukar(int& a, int& b)
{
    int temp = a;

    a = b;
    b = temp;
}

int main()
{
    int angka1 = 10;
    int angka2 = 20;

    cout << "Sebelum ditukar:" << endl;
    cout << "Angka 1: " << angka1 << endl;
    cout << "Angka 2: " << angka2 << endl;

    tukar(angka1, angka2);

    cout << endl;

    cout << "Setelah ditukar:" << endl;
    cout << "Angka 1: " << angka1 << endl;
    cout << "Angka 2: " << angka2 << endl;

    return 0;
}