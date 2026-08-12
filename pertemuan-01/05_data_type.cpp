#include <iostream>
#include <string> // Untuk menggunakan library string

int main()
{
    int umur = 20; // Mendeklarasikan variabel umur dengan tipe data integer dan menginisialisasinya dengan nilai 20
    float tinggi = 170.5f; // Mendeklarasikan variabel tinggi dengan tipe data float dan menginisialisasinya dengan nilai 170.5
    double nilai = 95.75; // Mendeklarasikan variabel nilai dengan tipe data double dan menginisialisasinya dengan nilai 95.75
    char grade = 'A'; // Mendeklarasikan variabel grade dengan tipe data char dan menginisialisasinya dengan nilai 'A'
    bool lulus = true; // Mendeklarasikan variabel lulus dengan tipe data bool dan menginisialisasinya dengan nilai true
    std::string nama = "Ilham"; // Mendeklarasikan variabel nama dengan tipe data std::string dan menginisialisasinya dengan nilai "Ilham"

    std::cout << "Nama   : " << nama << std::endl;
    std::cout << "Umur   : " << umur << std::endl;
    std::cout << "Tinggi : " << tinggi << std::endl;
    std::cout << "Nilai  : " << nilai << std::endl;
    std::cout << "Grade  : " << grade << std::endl;
    std::cout << "Lulus  : " << lulus << std::endl;

    return 0;
}