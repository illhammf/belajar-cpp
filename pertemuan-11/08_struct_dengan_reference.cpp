#include <iostream>
#include <string>

using namespace std;

struct Mahasiswa
{
    string nama;
    int umur;
    float ipk;
};

void tambahUmur(Mahasiswa& mahasiswa)
{
    mahasiswa.umur++;
}

int main()
{
    Mahasiswa mahasiswa;

    mahasiswa.nama = "Ilham";
    mahasiswa.umur = 20;
    mahasiswa.ipk = 3.50;

    cout << "Umur sebelum: "
         << mahasiswa.umur << endl;

    tambahUmur(mahasiswa);

    cout << "Umur sesudah: "
         << mahasiswa.umur << endl;

    return 0;
}