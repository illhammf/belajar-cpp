#include <iostream>
using namespace std;

void tampilkanArray(int data[], int ukuran)
{
    for (int i = 0; i < ukuran; i++)
    {
        cout << "Data ke-" << i + 1
             << ": " << data[i] << endl;
    }
}

int main()
{
    int angka[5] = {10, 20, 30, 40, 50};

    tampilkanArray(angka, 5);

    return 0;
}