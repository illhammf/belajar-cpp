#include <iostream>
#include <string>

using namespace std;

class Mahasiswa
{
public:
    string nama;
    int umur;
    string jurusan;
    float ipk;
};

int main()
{
    Mahasiswa mahasiswa;

    mahasiswa.nama = "Ilham";
    mahasiswa.umur = 20;
    mahasiswa.jurusan = "Informatika";
    mahasiswa.ipk = 3.50;

    cout << "=== Data Mahasiswa ===" << endl;
    cout << "Nama    : " << mahasiswa.nama << endl;
    cout << "Umur    : " << mahasiswa.umur << endl;
    cout << "Jurusan : " << mahasiswa.jurusan << endl;
    cout << "IPK     : " << mahasiswa.ipk << endl;

    return 0;
}