#include <iostream>
#include <string>

using namespace std;

struct Buku
{
    string judul;
    string penulis;
    int tahun;
};

int main()
{
    Buku buku[3];

    buku[0].judul = "Belajar C++";
    buku[0].penulis = "Ilham";
    buku[0].tahun = 2026;

    buku[1].judul = "Dasar Pemrograman";
    buku[1].penulis = "Budi";
    buku[1].tahun = 2025;

    buku[2].judul = "Struktur Data";
    buku[2].penulis = "Andi";
    buku[2].tahun = 2024;

    for (int i = 0; i < 3; i++)
    {
        cout << "=== Buku ke-" << i + 1 << " ===" << endl;
        cout << "Judul   : " << buku[i].judul << endl;
        cout << "Penulis : " << buku[i].penulis << endl;
        cout << "Tahun   : " << buku[i].tahun << endl;
        cout << endl;
    }

    return 0;
}