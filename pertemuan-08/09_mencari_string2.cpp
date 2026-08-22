#include <iostream>
#include <string>

using namespace std;

int main()
{
    string kalimat = "Saya sedang belajar C++";

    if (kalimat.find("C++") != string::npos) // find() digunakan untuk mencari posisi string, jika tidak ditemukan akan mengembalikan nilai string::npos
    {
        cout << "Teks ditemukan." << endl;
    }
    else
    {
        cout << "Teks tidak ditemukan." << endl;
    }

    return 0;
}