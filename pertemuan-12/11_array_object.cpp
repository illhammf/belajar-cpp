#include <iostream>
#include <string>

using namespace std;

class Mahasiswa
{
public:
    string nama;
    int umur;
};

int main()
{
    Mahasiswa mahasiswa[3];

    mahasiswa[0].nama = "Ilham";
    mahasiswa[0].umur = 20;

    mahasiswa[1].nama = "Budi";
    mahasiswa[1].umur = 21;

    mahasiswa[2].nama = "Andi";
    mahasiswa[2].umur = 19;

    for (int i = 0; i < 3; i++)
    {
        cout << "Mahasiswa ke-" << i + 1 << endl;
        cout << "Nama: " << mahasiswa[i].nama << endl;
        cout << "Umur: " << mahasiswa[i].umur << endl;
        cout << endl;
    }

    return 0;
}