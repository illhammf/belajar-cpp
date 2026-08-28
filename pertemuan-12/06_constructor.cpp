#include <iostream>

using namespace std;

class Mahasiswa
{
public:

    Mahasiswa()
    {
        cout << "Constructor dijalankan." << endl;
    }
};

int main()
{
    // Constructor adalah Method khusus yang otomatis dijalankan ketika Object dibuat.
    Mahasiswa mahasiswa; // Ketika kode ini dijalankan, Constructor otomatis dipanggil.

    return 0;
}