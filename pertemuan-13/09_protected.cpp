#include <iostream>
#include <string>

using namespace std;

// Parent Class
class Hewan
{
protected:

    // protected dapat digunakan oleh
    // Parent Class dan Child Class
    string nama;
};

// Child Class
class Kucing : public Hewan
{
public:

    // Method untuk mengisi nama
    void setNama(string nama)
    {
        // Mengakses Attribute protected
        // yang berasal dari Parent Class
        this->nama = nama;
    }

    // Method untuk menampilkan nama
    void tampilkanNama()
    {
        cout << "Nama: " << nama << endl;
    }
};

int main()
{
    // Membuat Object Kucing
    Kucing kucing;

    // Menggunakan Method untuk mengisi nama
    kucing.setNama("Milo");

    // Menampilkan nama
    kucing.tampilkanNama();

    return 0;
}