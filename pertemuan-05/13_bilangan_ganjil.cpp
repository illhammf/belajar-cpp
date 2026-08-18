#include <iostream>
using namespace std;

int main()
{
    for (int i = 1; i <= 10; i++)
    {
        if (i % 2 != 0) // Jika i tidak habis dibagi 2, maka i adalah bilangan ganjil
        {
            cout << i << endl;
        }
    }

    return 0;
}