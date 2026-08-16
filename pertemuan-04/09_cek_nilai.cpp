#include <iostream>
using namespace std;

int main()
{
    int nilai;

    cout << "===== PROGRAM CEK NILAI =====" << endl;

    cout << "Masukkan nilai: ";
    cin >> nilai;

    if (nilai >= 75)
    {
        cout << "Status: LULUS" << endl;
    }
    else
    {
        cout << "Status: TIDAK LULUS" << endl;
    }

    return 0;
}