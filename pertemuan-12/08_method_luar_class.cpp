#include <iostream>

using namespace std;

class Mahasiswa
{
public:
    void perkenalan();
};

void Mahasiswa::perkenalan()
{
    cout << "Halo, saya mahasiswa." << endl;
}

int main()
{
    Mahasiswa mahasiswa;

    mahasiswa.perkenalan();

    return 0;
}