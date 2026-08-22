#include <iostream>
#include <string>

using namespace std;

int main()
{
    string kalimat = "Saya sedang belajar C++";

    int posisi = kalimat.find("C++"); // find() digunakan untuk mencari posisi string

    cout << "Posisi C++: " << posisi << endl;

    return 0;
}