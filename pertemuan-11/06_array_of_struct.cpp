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
    Mahasiswa mahasiswa[3];

    mahasiswa[0].nama = "Ilham";
    mahasiswa[0].umur = 20;
    mahasiswa[0].ipk = 3.50;

    mahasiswa[1].nama = "Budi";
    mahasiswa[1].umur = 21;
    mahasiswa[1].ipk = 3.70;

    mahasiswa[2].nama = "Andi";
    mahasiswa[2].umur = 19;
    mahasiswa[2].ipk = 3.40;

    for (int i = 0; i < 3; i++)
    {
        cout << "Mahasiswa ke-" << i + 1 << endl;
        cout << "Nama: " << mahasiswa[i].nama << endl;
        cout << "Umur: " << mahasiswa[i].umur << endl;
        cout << "IPK : " << mahasiswa[i].ipk << endl;
        cout << endl;
    }

    return 0;
}