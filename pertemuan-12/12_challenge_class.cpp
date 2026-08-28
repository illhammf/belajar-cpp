#include <iostream>
#include <string>

using namespace std;

class Buku // Class
{
private: // memiliki 3 atribut private
    string judul;
    string penulis;
    int tahun;

public:

    Buku(string judul, string penulis, int tahun) // Ini Constructor
    {
        this->judul = judul;
        this->penulis = penulis;
        this->tahun = tahun;
    }

    void tampilkanData()
    {
        cout << "=== Data Buku ===" << endl;
        cout << "Judul   : " << judul << endl;
        cout << "Penulis : " << penulis << endl;
        cout << "Tahun   : " << tahun << endl;
    }

    void setJudul(string judul)
    {
        this->judul = judul;
    }

    void setPenulis(string penulis)
    {
        this->penulis = penulis;
    }

    void setTahun(int tahun)
    {
        this->tahun = tahun;
    }

    string getJudul()
    {
        return judul;
    }

    string getPenulis()
    {
        return penulis;
    }

    int getTahun()
    {
        return tahun;
    }
};

int main()
{
    Buku buku(
        "Belajar C++",
        "Ilham",
        2026
    );

    buku.tampilkanData();

    return 0;
}