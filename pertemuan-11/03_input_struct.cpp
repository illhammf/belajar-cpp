#include <iostream>
#include <string>

using namespace std;

struct Mahasiswa
{
    string nama;
    int umur;
    float ipk;
};

int main()
{
    Mahasiswa mahasiswa;

    cout << "Masukkan nama: ";
    cin >> mahasiswa.nama;

    cout << "Masukkan umur: ";
    cin >> mahasiswa.umur;

    cout << "Masukkan IPK: ";
    cin >> mahasiswa.ipk;

    cout << endl;

    cout << "=== Data Mahasiswa ===" << endl;
    cout << "Nama: " << mahasiswa.nama << endl;
    cout << "Umur: " << mahasiswa.umur << endl;
    cout << "IPK : " << mahasiswa.ipk << endl;

    return 0;
}