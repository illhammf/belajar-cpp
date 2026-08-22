#include <iostream>
#include <string>

using namespace std;

int main()
{
    string nama = "Ilham";

    for (int i = 0; i < nama.length(); i++) // length() digunakan untuk mendapatkan panjang string
    {
        cout << "Index " << i
             << ": " << nama[i] << endl;
    }

    return 0;
}