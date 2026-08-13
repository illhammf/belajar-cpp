#include <iostream>
#include <string>
using namespace std;

int main()
{
    string nama;

    cout << "Masukkan nama lengkap: ";
    getline(cin, nama); // Mengambil input dari pengguna berupa string dengan spasi dan menyimpannya ke dalam variabel nama

    cout << "Nama kamu: " << nama << endl;

    return 0;
}