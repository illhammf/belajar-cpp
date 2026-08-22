#include <iostream>
#include <string>

using namespace std;

void tampilkanData(string nama, string nim, string jurusan, int umur)
{
    cout << endl;
    cout << "Data Mahasiswa" << endl;
    cout << "--------------" << endl;

    cout << "Nama    : " << nama << endl;
    cout << "NIM     : " << nim << endl;
    cout << "Jurusan : " << jurusan << endl;
    cout << "Umur    : " << umur << endl;
}

int main()
{
    string nama;
    string nim;
    string jurusan;
    int umur;

    cout << "Masukkan nama    : ";
    getline(cin, nama);

    cout << "Masukkan NIM     : ";
    getline(cin, nim);

    cout << "Masukkan jurusan : ";
    getline(cin, jurusan);

    cout << "Masukkan umur    : ";
    cin >> umur;

    tampilkanData(nama, nim, jurusan, umur);

    return 0;
}