#include <iostream>

using namespace std;

// Parent Class
// Class ini akan diwariskan kepada Child Class
class Hewan
{
public:

    // Method milik Parent Class
    void makan()
    {
        cout << "Hewan sedang makan." << endl;
    }
};

// Child Class
// Kucing mewarisi semua Member public dari Hewan
class Kucing : public Hewan
{
};

int main()
{
    // Membuat Object dari Child Class
    Kucing kucing;

    // Method makan() berasal dari Parent Class Hewan
    // tetapi dapat digunakan oleh Object Kucing
    kucing.makan();

    return 0;
}