#include <iostream>

using namespace std;

// Parent Class
class Hewan
{
public:

    // Constructor Parent
    Hewan()
    {
        cout << "Constructor Hewan dijalankan." << endl;
    }
};

// Child Class
class Kucing : public Hewan
{
public:

    // Constructor Child
    Kucing()
    {
        cout << "Constructor Kucing dijalankan." << endl;
    }
};

int main()
{
    // Membuat Object Kucing
    Kucing kucing;

    return 0;
}