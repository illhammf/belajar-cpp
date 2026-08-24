#include <iostream>
#include <string>

using namespace std;

struct Alamat
{
    string kota;
    string provinsi;
};

struct Mahasiswa
{
    string nama;
    Alamat alamat;
};

int main()
{
    Mahasiswa mahasiswa;

    mahasiswa.nama = "Ilham";

    mahasiswa.alamat.kota = "Tangerang";
    mahasiswa.alamat.provinsi = "Banten";

    cout << "Nama     : " << mahasiswa.nama << endl;
    cout << "Kota     : " << mahasiswa.alamat.kota << endl;
    cout << "Provinsi : " << mahasiswa.alamat.provinsi << endl;

    return 0;
}