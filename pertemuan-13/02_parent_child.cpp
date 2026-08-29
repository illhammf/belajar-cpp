#include <iostream>

using namespace std;

// Parent Class
class Hewan
{
public:

    // Method milik Parent
    void makan()
    {
        cout << "Hewan sedang makan." << endl;
    }

    // Method milik Parent
    void tidur()
    {
        cout << "Hewan sedang tidur." << endl;
    }
};

// Child Class
class Kucing : public Hewan
{
public:

    // Method khusus milik Kucing
    void mengeong()
    {
        cout << "Kucing sedang mengeong." << endl;
    }
};

int main()
{
    // Membuat Object Kucing
    Kucing kucing;

    // Method diwarisi dari Hewan
    kucing.makan();

    // Method diwarisi dari Hewan
    kucing.tidur();

    // Method milik Kucing sendiri
    kucing.mengeong();

    return 0;
}