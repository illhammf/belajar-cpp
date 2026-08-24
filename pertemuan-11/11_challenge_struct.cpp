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
    Buku buku;

    buku.judul = "Belajar C++";
    buku.penulis = "Ilham";
    buku.tahun = 2026;

    cout << "=== Data Buku ===" << endl;
    cout << "Judul   : " << buku.judul << endl;
    cout << "Penulis : " << buku.penulis << endl;
    cout << "Tahun   : " << buku.tahun << endl;

    return 0;
}