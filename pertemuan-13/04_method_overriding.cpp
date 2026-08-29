#include <iostream>

using namespace std;

// Parent Class
class Hewan
{
public:

    // Method milik Parent
    void suara()
    {
        cout << "Hewan mengeluarkan suara." << endl;
    }
};

// Child Class
class Kucing : public Hewan
{
public:

    // Method dengan nama yang sama
    // Method ini menutupi implementasi suara() milik Parent
    void suara()
    {
        cout << "Kucing mengeong." << endl;
    }
};

int main()
{
    // Membuat Object Kucing
    Kucing kucing;

    // Method suara() milik Kucing yang dipanggil
    kucing.suara();

    return 0;
}