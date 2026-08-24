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
    Mahasiswa mahasiswa1;
    Mahasiswa mahasiswa2;

    mahasiswa1.nama = "Ilham";
    mahasiswa1.umur = 20;

    mahasiswa2.nama = "Budi";
    mahasiswa2.umur = 21;

    cout << "=== Mahasiswa 1 ===" << endl;
    cout << "Nama: " << mahasiswa1.nama << endl;
    cout << "Umur: " << mahasiswa1.umur << endl;

    cout << endl;

    cout << "=== Mahasiswa 2 ===" << endl;
    cout << "Nama: " << mahasiswa2.nama << endl;
    cout << "Umur: " << mahasiswa2.umur << endl;

    return 0;
}