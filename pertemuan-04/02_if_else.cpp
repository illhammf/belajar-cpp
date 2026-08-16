#include <iostream>
using namespace std;

int main()
{
    int umur;

    cout << "Masukkan umur: ";
    cin >> umur;

    if (umur >= 17)
    {
        cout << "Sudah cukup umur." << endl; // Jika umur lebih besar atau sama dengan 17, maka akan menampilkan output "Sudah cukup umur."
    }
    else
    {
        cout << "Belum cukup umur." << endl; // Jika umur kurang dari 17, maka akan menampilkan output "Belum cukup umur."
    }

    return 0;
}