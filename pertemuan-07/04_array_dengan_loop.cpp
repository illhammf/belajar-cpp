#include <iostream>
using namespace std;

int main()
{
    int nilai[5] = {80, 90, 75, 88, 92};

    for (int i = 0; i < 5; i++) // Cek kondisi i < 5, karena indeks array dimulai dari 0 hingga 4
    {
        cout << nilai[i] << endl;
    }

    return 0;
}