#include <iostream>
#include <string>

using namespace std;

// Parent Class
class Hewan
{
public:

    // Attribute milik Parent
    string nama;

    // Method milik Parent
    void tampilkanNama()
    {
        cout << "Nama: " << nama << endl;
    }
};

// Child Class
class Kucing : public Hewan
{
public:

    // Attribute tambahan milik Child
    string warna;

    // Method tambahan milik Child
    void tampilkanWarna()
    {
        cout << "Warna: " << warna << endl;
    }
};

int main()
{
    // Membuat Object Kucing
    Kucing kucing;

    // nama berasal dari Parent Class
    kucing.nama = "Milo";

    // warna berasal dari Child Class
    kucing.warna = "Putih";

    // Method Parent
    kucing.tampilkanNama();

    // Method Child
    kucing.tampilkanWarna();

    return 0;
}