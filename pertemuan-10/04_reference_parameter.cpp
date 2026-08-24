#include <iostream>

using namespace std;

void tambahSepuluh(int& angka)
{
    angka += 10;
}

int main()
{
    int nilai = 50;

    cout << "Nilai awal : " << nilai << endl;

    tambahSepuluh(nilai);

    cout << "Nilai akhir: " << nilai << endl;

    return 0;
}