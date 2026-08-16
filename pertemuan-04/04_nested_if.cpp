#include <iostream>
using namespace std;

int main()
{
    int umur;
    bool memilikiKTP;

    cout << "Masukkan umur: ";
    cin >> umur;

    cout << "Apakah memiliki KTP? (1 = Ya, 0 = Tidak): ";
    cin >> memilikiKTP;

    // If didalam if (nested if) adalah struktur kontrol yang memungkinkan kita untuk memeriksa kondisi tambahan di dalam blok if utama. Ini berguna ketika kita ingin membuat keputusan yang lebih kompleks berdasarkan beberapa kondisi.
    // Menggunakan nested if untuk memeriksa dua kondisi: umur dan kepemilikan KTP
    // Jika umur lebih besar atau sama dengan 17, maka akan memeriksa apakah memiliki KTP atau tidak.
    if (umur >= 17)
    {
        if (memilikiKTP)
        {
            cout << "Memenuhi semua kondisi." << endl;
        }
        else
        {
            cout << "Umur cukup, tetapi belum memiliki KTP." << endl;
        }
    }
    else
    {
        cout << "Umur belum cukup." << endl;
    }

    return 0;
}