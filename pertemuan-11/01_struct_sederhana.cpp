#include <iostream>
#include <string>

using namespace std;

// Struct mahasiswa yang isinya ada variabel nama, umur, ipk
struct Mahasiswa
{
    string nama;
    int umur;
    float ipk;
};

int main()
{
    Mahasiswa mahasiswa;

    mahasiswa.nama = "Ilham"; // isi dari variabel nama
    mahasiswa.umur = 20; // isi dari variabel umur
    mahasiswa.ipk = 3.50; // isi dari variabel ipk

    cout << "Nama: " << mahasiswa.nama << endl;
    cout << "Umur: " << mahasiswa.umur << endl;
    cout << "IPK : " << mahasiswa.ipk << endl;

    return 0;
}