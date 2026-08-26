#include <iostream>

using namespace std;

class Mahasiswa
{
public:

    void perkenalan() // Function yang berada di dalam Class disebut Method.
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