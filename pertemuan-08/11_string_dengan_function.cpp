#include <iostream>
#include <string>

using namespace std;

void tampilkanNama(string nama) // Fungsi untuk menampilkan nama
{
    cout << "Nama: " << nama << endl;
}

int main()
{
    string nama = "Ilham";

    tampilkanNama(nama);

    return 0;
}