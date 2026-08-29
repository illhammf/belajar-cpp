#include <iostream>

using namespace std;

// Abstract Class
// Class ini memiliki Pure Virtual Function
class Hewan
{
public:

    // Pure Virtual Function
    virtual void suara() = 0;
};

// Child Class
class Kucing : public Hewan
{
public:

    // Kucing wajib mengimplementasikan suara()
    void suara() override
    {
        cout << "Kucing mengeong." << endl;
    }
};

int main()
{
    // Object Kucing dapat dibuat
    Kucing kucing;

    // Memanggil Method Kucing
    kucing.suara();

    return 0;
}