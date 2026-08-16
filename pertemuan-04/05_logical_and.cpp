#include <iostream>
using namespace std;

int main()
{
    int umur;

    cout << "Masukkan umur: ";
    cin >> umur;

    // Menggunakan operator logika AND (&&) untuk memeriksa apakah umur berada dalam rentang tertentu
    // Bisa disebut DAN (AND) karena kita memeriksa dua kondisi sekaligus: umur harus lebih besar atau sama dengan 17 DAN kurang dari atau sama dengan 30.
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