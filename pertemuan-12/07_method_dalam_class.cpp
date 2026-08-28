#include <iostream>
#include <string>

using namespace std;

class Mahasiswa
{
public:
    string nama;
    int umur;

    void tampilkanData() // Method yang menggunakan Attribute milik Object.
    {
        cout << "Nama: " << nama << endl;
        cout << "Umur: " << umur << endl;
    }
};

int main()
{
    Mahasiswa mahasiswa;

    mahasiswa.nama = "Ilham";
    mahasiswa.umur = 20;

    mahasiswa.tampilkanData();

    return 0;
}