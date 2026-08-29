#include <iostream>

using namespace std;

// Parent Class
class Hewan
{
public:

    // Method virtual memungkinkan
    // pemanggilan Method Child melalui Pointer Parent
    virtual void suara()
    {
        cout << "Suara hewan." << endl;
    }
};

// Child Class Kucing
class Kucing : public Hewan
{
public:

    // Override Method Parent
    void suara() override
    {
        cout << "Kucing mengeong." << endl;
    }
};

// Child Class Anjing
class Anjing : public Hewan
{
public:

    // Override Method Parent
    void suara() override
    {
        cout << "Anjing menggonggong." << endl;
    }
};

int main()
{
    // Membuat Object Kucing dan Anjing
    Kucing kucing;
    Anjing anjing;

    // Pointer Parent menunjuk ke Object Kucing
    Hewan* hewan1 = &kucing;

    // Pointer Parent menunjuk ke Object Anjing
    Hewan* hewan2 = &anjing;

    // Akan menjalankan suara() milik Kucing
    hewan1->suara();

    // Akan menjalankan suara() milik Anjing
    hewan2->suara();

    return 0;
}