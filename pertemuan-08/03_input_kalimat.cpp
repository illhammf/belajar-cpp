#include <iostream>
#include <string>

using namespace std;

int main()
{
    string namaLengkap;

    cout << "Masukkan nama lengkap: ";
    getline(cin, namaLengkap); // Menggunakan getline untuk membaca kalimat yang mengandung spasi, contoh: "Ilham Firmansyah"

    cout << "Nama: " << namaLengkap << endl;

    return 0;
}