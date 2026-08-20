#include <iostream>
using namespace std;

void inputNama()
{
    string nama;

    cout << "Masukkan nama: ";
    cin >> nama;

    cout << "Halo, " << nama << "!" << endl;
}

int main()
{
    inputNama();

    return 0;
}