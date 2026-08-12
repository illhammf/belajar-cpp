#include <iostream>

int main()
{
    int angka1;
    int angka2;

    std::cout << "Masukkan angka pertama: ";
    std::cin >> angka1;

    std::cout << "Masukkan angka kedua: ";
    std::cin >> angka2;

    std::cout << std::endl;

    std::cout << "Hasil Perhitungan" << std::endl;
    std::cout << "=================" << std::endl;

    std::cout << "Penjumlahan : " << angka1 + angka2 << std::endl;
    std::cout << "Pengurangan : " << angka1 - angka2 << std::endl;
    std::cout << "Perkalian   : " << angka1 * angka2 << std::endl;

    return 0;
}