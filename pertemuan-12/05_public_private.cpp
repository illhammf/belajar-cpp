#include <iostream>
#include <string>

using namespace std;

class Mahasiswa
{
public:
    string nama;

private:
    int umur;
};

int main()
{
    Mahasiswa mahasiswa;

    mahasiswa.nama = "Ilham";

    cout << "Nama: " << mahasiswa.nama << endl;

    return 0;
}