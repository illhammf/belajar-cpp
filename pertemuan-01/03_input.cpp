#include <iostream>
#include <string>

int main()
{
    std::string nama;
    int umur;

    std::cout << "Masukkan nama: ";
    std::cin >> nama;

    std::cout << "Masukkan umur: ";
    std::cin >> umur;

    std::cout << std::endl;

    std::cout << "Nama : " << nama << std::endl;
    std::cout << "Umur : " << umur << std::endl;

    return 0;
}