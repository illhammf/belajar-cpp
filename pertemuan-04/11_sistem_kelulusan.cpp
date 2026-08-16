#include <iostream>
using namespace std;

int main()
{
    string nama;
    int nilai;

    cout << "===== SISTEM KELULUSAN =====" << endl;

    cout << "Masukkan nama: ";
    cin >> nama;

    cout << "Masukkan nilai: ";
    cin >> nilai;

    cout << endl;

    cout << "Nama  : " << nama << endl;
    cout << "Nilai : " << nilai << endl;

    if (nilai >= 90)
    {
        cout << "Grade : A" << endl;
        cout << "Status: Sangat Baik" << endl;
    }
    else if (nilai >= 80)
    {
        cout << "Grade : B" << endl;
        cout << "Status: Baik" << endl;
    }
    else if (nilai >= 75)
    {
        cout << "Grade : C" << endl;
        cout << "Status: Lulus" << endl;
    }
    else
    {
        cout << "Grade : D" << endl;
        cout << "Status: Tidak Lulus" << endl;
    }

    return 0;
}