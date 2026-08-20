#include <iostream>
using namespace std;

// Penggabungan function, parameter, looping, return value, dan if statement
int jumlahAngka(int batas)
{
    int total = 0;

    for (int i = 1; i <= batas; i++)
    {
        total += i;
    }

    return total;
}

int main()
{
    int hasil = jumlahAngka(5);

    cout << "Total: " << hasil << endl;

    return 0;
}