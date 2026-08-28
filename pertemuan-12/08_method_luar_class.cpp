#include <iostream>

using namespace std;

class Mahasiswa
{
public:
    void perkenalan();
};
// :: disebut Scope Resolution Operator.
void Mahasiswa::perkenalan() // adalah Method perkenalan() milik Class Mahasiswa.
{ 
    cout << "Halo, saya mahasiswa." << endl;
}

int main()
{
    Mahasiswa mahasiswa;

    mahasiswa.perkenalan();

    return 0;
}