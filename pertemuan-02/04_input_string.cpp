#include <iostream>
#include <string> // Deklarasi library string agar dapat menggunakan tipe data string
using namespace std;

int main()
{
    string nama; // Deklarasi variabel nama dengan tipe data string

    cout << "Masukkan nama: ";
    cin >> nama; // Mengambil input dari pengguna dan menyimpannya ke dalam variabel umur

    cout << "Halo, " << nama << "!" << endl;

    return 0;
}