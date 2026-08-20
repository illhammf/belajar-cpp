#include <iostream>
using namespace std;

void perkenalan(string nama, int umur) // fungsi dengan multiple parameter, memiliki dua parameter yaitu nama dan umur
{
    cout << "Nama: " << nama << endl;
    cout << "Umur: " << umur << " tahun" << endl;
}

int main()
{
    perkenalan("Ilham", 20);

    return 0;
}