#include <iostream>
using namespace std;

int hitungTotal(int nilai[], int ukuran) // Fungsi untuk menghitung total nilai dalam array
{
    int total = 0;

    for (int i = 0; i < ukuran; i++)
    {
        total += nilai[i];
    }

    return total;
}

int main()
{
    int nilai[5] = {80, 90, 75, 88, 92};

    int total = hitungTotal(nilai, 5);

    cout << "Total nilai: " << total << endl;

    return 0;
}