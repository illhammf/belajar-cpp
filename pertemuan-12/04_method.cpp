#include <iostream>

using namespace std;

class Mahasiswa
{
public:

    void perkenalan()
    {
        cout << "Halo, saya seorang mahasiswa." << endl;
    }
};

int main()
{
    Mahasiswa mahasiswa;

    mahasiswa.perkenalan();

    return 0;
}