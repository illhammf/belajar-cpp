#include <iostream>
using namespace std;

int main()
{
    int nilai[5] = {80, 90, 75, 88, 92};

    cout << "Sebelum diubah:" << endl;

    cout << nilai[0] << endl;
    cout << nilai[1] << endl;
    cout << nilai[2] << endl;
    cout << nilai[3] << endl;
    cout << nilai[4] << endl;

    nilai[0] = 100; // Mengubah nilai pada indeks ke-0, yang sebelumnya 80 menjadi 100

    cout << endl;

    cout << "Setelah diubah:" << endl;

    cout << nilai[0] << endl;
    cout << nilai[1] << endl;
    cout << nilai[2] << endl;
    cout << nilai[3] << endl;
    cout << nilai[4] << endl;

    return 0;
}