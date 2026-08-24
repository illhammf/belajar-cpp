#include <iostream>
#include <string>

using namespace std;

void tampilkanNama(const string& nama) // Di sini Function hanya membaca nama, kita tidak ingin Function mengubah nama
{
    cout << "Nama: " << nama << endl;
}

int main()
{
    string nama = "Ilham";

    tampilkanNama(nama);

    return 0;
}