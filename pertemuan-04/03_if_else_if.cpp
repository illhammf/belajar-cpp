#include <iostream>
using namespace std;

int main()
{
    int nilai;

    cout << "Masukkan nilai: ";
    cin >> nilai;

    // Menggunakan if else if untuk menentukan grade berdasarkan nilai
    // Ini memberikan lebih banyak kondisi dibandingkan dengan if else biasa, sehingga kita bisa menangani beberapa rentang nilai.
    if (nilai >= 90)
    {
        cout << "Grade A" << endl;
    }
    else if (nilai >= 80)
    {
        cout << "Grade B" << endl;
    }
    else if (nilai >= 70)
    {
        cout << "Grade C" << endl;
    }
    else
    {
        cout << "Grade D" << endl;
    }

    return 0;
}