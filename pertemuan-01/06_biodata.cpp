#include <iostream>
#include <string>

int main()
{
    std::string nama = "Ilham";
    std::string nim = "12345678";
    std::string jurusan = "Teknik Informatika";
    int semester = 4;

    std::cout << "================================" << std::endl;
    std::cout << "        BIODATA MAHASISWA       " << std::endl;
    std::cout << "================================" << std::endl;

    std::cout << "Nama     : " << nama << std::endl;
    std::cout << "NIM      : " << nim << std::endl;
    std::cout << "Jurusan  : " << jurusan << std::endl;
    std::cout << "Semester : " << semester << std::endl;

    std::cout << "================================" << std::endl;

    return 0;
}