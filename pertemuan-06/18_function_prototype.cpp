#include <iostream>
using namespace std;

int tambah(int a, int b);

int main()
{
    cout << tambah(10, 20) << endl;

    return 0;
}

int tambah(int a, int b)
{
    return a + b;
}