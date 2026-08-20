#include <iostream>
using namespace std;

void tampilkanAngka(int batas)
{
    for (int i = 1; i <= batas; i++)
    {
        cout << i << endl;
    }
}

int main()
{
    tampilkanAngka(5);

    cout << endl;

    tampilkanAngka(10);

    return 0;
}