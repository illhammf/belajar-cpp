#include <iostream>
#include <string>

using namespace std;

struct Mahasiswa
{
    string nama;
    int umur;
    float ipk;
};

void tampilkanMahasiswa(Mahasiswa mahasiswa)
{
    cout << "Nama: " << mahasiswa.nama << endl;
    cout << "Umur: " << mahasiswa.umur << endl;
    cout << "IPK : " << mahasiswa.ipk << endl;
}

int main()
{
    Mahasiswa mahasiswa;

    mahasiswa.nama = "Ilham";
    mahasiswa.umur = 20;
    mahasiswa.ipk = 3.50;

    tampilkanMahasiswa(mahasiswa);

    return 0;
}