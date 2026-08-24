#include <iostream>
#include <string>

using namespace std;

int main()
{
    string nama = "Ilham";

    string& ref = nama;

    cout << "Nama awal: " << nama << endl;

    ref = "Budi"; // Mengubah ref yang tadinya Ilham menjadi Budi

    cout << "Nama akhir: " << nama << endl;

    return 0;
}