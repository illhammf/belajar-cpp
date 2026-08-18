#include <iostream>
using namespace std;

int main()
{
    // Nested loop digunakan untuk melakukan perulangan di dalam perulangan
    for (int i = 1; i <= 3; i++)
    {
        for (int j = 1; j <= 3; j++)
        {
            cout << "* ";
        }

        cout << endl;
    }

    return 0;
}