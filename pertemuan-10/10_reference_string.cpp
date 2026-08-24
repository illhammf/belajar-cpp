#include <iostream>
#include <string>

using namespace std;

int main()
{
    string nama = "Ilham";

    string& ref = nama;

    cout << "Nama awal: " << nama << endl;

    ref = "Budi";

    cout << "Nama akhir: " << nama << endl;

    return 0;
}