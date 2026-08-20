#include <iostream>
using namespace std;

// Fungsi untuk memeriksa kelulusan berdasarkan nilai
string cekKelulusan(int nilai)
{
    if (nilai >= 75)
    {
        return "Lulus";
    }
    else
    {
        return "Tidak Lulus";
    }
}

int main()
{
    int nilai;

    cout << "Masukkan nilai: ";
    cin >> nilai;

    cout << "Status: " << cekKelulusan(nilai) << endl;

    return 0;
}