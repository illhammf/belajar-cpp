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
    Mahasiswa mahasiswa = {
        "Ilham",
        20,
        3.50
    };

    cout << "Nama: " << mahasiswa.nama << endl;
    cout << "Umur: " << mahasiswa.umur << endl;
    cout << "IPK : " << mahasiswa.ipk << endl;

    return 0;
}