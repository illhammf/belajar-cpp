#include <iostream>
using namespace std;

int main()
{
    int umur;

    cout << "Masukkan umur: ";
    cin >> umur;

    if (umur >= 17 && umur <= 30) // Jika umur berada dalam rentang 17 sampai 30
    {
        cout << "Umur berada dalam rentang 17 sampai 30." << endl;
    }
    else
    {
        cout << "Umur berada di luar rentang." << endl;
    }

    return 0;
}