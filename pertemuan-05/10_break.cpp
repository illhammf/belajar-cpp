#include <iostream>
using namespace std;

int main()
{
    for (int i = 1; i <= 10; i++)
    {
        if (i == 5) // Jika i sama dengan 5, maka hentikan perulangan
        {
            break;
        }

        cout << i << endl;
    }

    return 0;
}