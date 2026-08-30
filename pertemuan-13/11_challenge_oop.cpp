#include <iostream>

using namespace std;

// ==================================================
// Parent Class
// ==================================================

class Kendaraan
{
public:

    // Virtual Function
    // Memungkinkan Polymorphism
    virtual void bergerak() = 0;

    // Virtual Destructor
    // Digunakan agar Object Child dapat
    // dihancurkan dengan benar melalui Pointer Parent
    virtual ~Kendaraan() = default;
};

// ==================================================
// Child Class Mobil
// ==================================================

class Mobil : public Kendaraan
{
public:

    // Implementasi Method bergerak()
    void bergerak() override
    {
        cout << "Mobil bergerak menggunakan empat roda." << endl;
    }
};

// ==================================================
// Child Class Motor
// ==================================================

class Motor : public Kendaraan
{
public:

    // Implementasi Method bergerak()
    void bergerak() override
    {
        cout << "Motor bergerak menggunakan dua roda." << endl;
    }
};

// ==================================================
// Child Class Sepeda
// ==================================================

class Sepeda : public Kendaraan
{
public:

    // Implementasi Method bergerak()
    void bergerak() override
    {
        cout << "Sepeda bergerak dengan dikayuh." << endl;
    }
};

// ==================================================
// Main Program
// ==================================================

int main()
{
    // Membuat Object Child
    Mobil mobil;
    Motor motor;
    Sepeda sepeda;

    // Pointer Parent menunjuk ke Object Child
    Kendaraan* kendaraan1 = &mobil;
    Kendaraan* kendaraan2 = &motor;
    Kendaraan* kendaraan3 = &sepeda;

    // Polymorphism
    // Method yang dijalankan bergantung
    // pada Object yang ditunjuk
    kendaraan1->bergerak();
    kendaraan2->bergerak();
    kendaraan3->bergerak();

    return 0;
}