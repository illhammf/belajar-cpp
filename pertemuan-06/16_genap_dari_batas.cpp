#include <iostream>
using namespace std;

void tampilkanGenap(int batas)
{
    for (int i = 1; i <= batas; i++)
    {
        if (i % 2 == 0)
        {
            cout << i << endl;
        }
    }
}

int main()
{
    int batas;

    cout << "Masukkan batas: ";
    cin >> batas;

    tampilkanGenap(batas);

    return 0;
}