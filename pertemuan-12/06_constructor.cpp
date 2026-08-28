#include <iostream>

using namespace std;

class Mahasiswa
{
public:

    Mahasiswa()
    {
        cout << "Constructor dijalankan." << endl;
    }
};

int main()
{
    Mahasiswa mahasiswa;

    return 0;
}