#include <iostream>
#include <string>

using namespace std;

class Buku
{
private:
    string judul;
    string penulis;
    int tahun;

public:

    Buku(string judul, string penulis, int tahun)
    {
        this->judul = judul;
        this->penulis = penulis;
        this->tahun = tahun;
    }

    void tampilkanData()
    {
        cout << "Judul   : " << judul << endl;
        cout << "Penulis : " << penulis << endl;
        cout << "Tahun   : " << tahun << endl;
    }
};

int main()
{
    Buku buku[3] = {
        Buku("Belajar C++", "Ilham", 2026),
        Buku("Dasar Pemrograman", "Budi", 2025),
        Buku("Struktur Data", "Andi", 2024)
    };

    for (int i = 0; i < 3; i++)
    {
        cout << "=== Buku ke-" << i + 1 << " ===" << endl;

        buku[i].tampilkanData();

        cout << endl;
    }

    return 0;
}