#include <iostream>
#include <string>

using namespace std;

int main()
{
    string nama;

    cout << "Masukkan nama: ";
    getline(cin, nama);

    int jumlah = 0;

    for (int i = 0; i < nama.length(); i++)
    {
        if (nama[i] == 'a')
        {
            jumlah++;
        }
    }

    cout << "Jumlah huruf a: " << jumlah << endl;

    return 0;
}