#include <iostream>
#include <string>

using namespace std;

void tampilkanNama(const string& nama)
{
    cout << "Nama: " << nama << endl;
}

int main()
{
    string nama = "Ilham";

    tampilkanNama(nama);

    return 0;
}