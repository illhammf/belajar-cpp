#include <iostream>

using namespace std;

class Mahasiswa
{
private:
    int umur;

public:

    void setUmur(int nilai)
    {
        umur = nilai;
    }

    int getUmur()
    {
        return umur;
    }
};

int main()
{
    Mahasiswa mahasiswa;

    mahasiswa.setUmur(20);

    cout << "Umur: " << mahasiswa.getUmur() << endl;

    return 0;
}