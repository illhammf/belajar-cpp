#include <iostream>
using namespace std;

int main()
{
    int nilai[5] = {80, 90, 75, 88, 92};

    int total = 0;

    for (int i = 0; i < 5; i++)
    {
        total += nilai[i]; // Menambahkan nilai pada indeks ke-i ke dalam total
    }

    cout << "Total nilai: " << total << endl;

    return 0;
}