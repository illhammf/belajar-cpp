#include <iostream>
using namespace std;

int main()
{
    for (int i = 1; i <= 5; i++)
    {
        if (i == 3) // Jika i sama dengan 3, maka hentikan perulangan
        {
            continue; // Lanjutkan ke iterasi berikutnya
        }

        cout << i << endl;
    }

    return 0;
}