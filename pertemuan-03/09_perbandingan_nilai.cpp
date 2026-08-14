#include <iostream>
using namespace std;

int main()
{
    double nilai1;
    double nilai2;

    cout << "Masukkan nilai pertama: ";
    cin >> nilai1;

    cout << "Masukkan nilai kedua: ";
    cin >> nilai2;

    cout << endl;

    cout << "Nilai pertama > nilai kedua : "
         << (nilai1 > nilai2) << endl;

    cout << "Nilai pertama < nilai kedua : "
         << (nilai1 < nilai2) << endl;

    cout << "Nilai pertama == nilai kedua : "
         << (nilai1 == nilai2) << endl;

    return 0;
}