#include <iostream>
#include <string>

using namespace std;

int main()
{
    string nama = "Ilham";

    cout << "Sebelum diubah: " << nama << endl;

    nama[0] = 'A';

    cout << "Setelah diubah: " << nama << endl;

    return 0;
}