#include <iostream>
using namespace std;

int main()
{
    bool hujan = false;

    // Menggunakan operator logika NOT (!) untuk memeriksa kondisi kebalikan dari hujan
    // Bisa disebut TIDAK (NOT) karena kita memeriksa kondisi kebalikan
    if (!hujan)
    {
        cout << "Tidak hujan." << endl;
    }
    else
    {
        cout << "Sedang hujan." << endl;
    }

    return 0;
}