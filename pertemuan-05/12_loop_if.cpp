#include <iostream>
using namespace std;

int main()
{
    for (int i = 1; i <= 10; i++)
    {
        // if digunakan untuk melakukan percabangan, jika kondisi terpenuhi maka akan menjalankan kode di dalamnya
        if (i % 2 == 0) // Jika i habis dibagi 2, maka i adalah bilangan genap,
        {
            cout << i << " adalah bilangan genap." << endl;
        }
    }

    return 0;
}