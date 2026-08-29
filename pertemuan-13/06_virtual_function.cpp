#include <iostream>

using namespace std;

// Parent Class
class Hewan
{
public:

    // virtual memungkinkan Method Child
    // dipanggil melalui Pointer Parent
    virtual void suara()
    {
        cout << "Suara hewan." << endl;
    }
};

// Child Class
class Kucing : public Hewan
{
public:

    // override menandakan bahwa kita
    // mengganti implementasi Method Parent
    void suara() override
    {
        cout << "Meong." << endl;
    }
};

int main()
{
    Kucing kucing;

    // Pointer Parent menunjuk ke Object Child
    Hewan* hewan = &kucing;

    // Karena suara() virtual,
    // Method Kucing yang akan dipanggil
    hewan->suara();

    return 0;
}