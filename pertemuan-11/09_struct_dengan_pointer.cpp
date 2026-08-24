#include <iostream>
#include <string>

using namespace std;

struct Mahasiswa
{
    string nama;
    int umur;
};

int main()
{
    Mahasiswa mahasiswa;

    mahasiswa.nama = "Ilham";
    mahasiswa.umur = 20;

    Mahasiswa* pointer = &mahasiswa;

    cout << "Nama: " << pointer->nama << endl;
    cout << "Umur: " << pointer->umur << endl;

    return 0;
}