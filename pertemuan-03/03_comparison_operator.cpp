#include <iostream>
using namespace std;

int main()
{
    int a = 10;
    int b = 5;

    cout << "=== COMPARISON OPERATOR ===" << endl;

    cout << "a > b  : " << (a > b) << endl;
    cout << "a < b  : " << (a < b) << endl;
    cout << "a >= b : " << (a >= b) << endl;
    cout << "a <= b : " << (a <= b) << endl;
    cout << "a == b : " << (a == b) << endl;
    cout << "a != b : " << (a != b) << endl;

    // Hasil dari operator perbandingan akan menghasilkan nilai boolean (true atau false)
    // Dalam C++, true direpresentasikan sebagai 1 dan false direpresentasikan sebagai 0

    return 0;
}