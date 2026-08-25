#include <iostream>
#include <string>

using namespace std;

class Mahasiswa
{
public:
    string nama;
    int umur;
};

int main()
{
    Mahasiswa mahasiswa;

    mahasiswa.nama = "Ilham";
    mahasiswa.umur = 20;

    cout << "Nama: " << mahasiswa.nama << endl;
    cout << "Umur: " << mahasiswa.umur << endl;

    return 0;
}