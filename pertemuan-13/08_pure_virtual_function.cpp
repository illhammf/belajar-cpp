#include <iostream>

using namespace std;

// Abstract Class
class Hewan
{
public:

    // Pure Virtual Function
    // Child Class wajib mengimplementasikan Method ini
    virtual void suara() = 0;
};

// Child Class Kucing
class Kucing : public Hewan
{
public:

    // Implementasi suara() untuk Kucing
    void suara() override
    {
        cout << "Kucing: Meong." << endl;
    }
};

// Child Class Anjing
class Anjing : public Hewan
{
public:

    // Implementasi suara() untuk Anjing
    void suara() override
    {
        cout << "Anjing: Gonggong." << endl;
    }
};

// Child Class Burung
class Burung : public Hewan
{
public:

    // Implementasi suara() untuk Burung
    void suara() override
    {
        cout << "Burung: Berkicau." << endl;
    }
};

int main()
{
    // Membuat Object masing-masing Child
    Kucing kucing;
    Anjing anjing;
    Burung burung;

    // Menjalankan Method masing-masing Object
    kucing.suara();
    anjing.suara();
    burung.suara();

    return 0;
}