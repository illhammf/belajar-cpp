#include <iostream>
using namespace std;

int main()
{
    // Counter akan digunakan untuk menghitung jumlah perulangan
    int counter = 1;

    while (counter <= 10) // Selama counter kurang dari atau sama dengan 10, lakukan perulangan
    {
        cout << "Perulangan ke-" << counter << endl;

        counter++;
    }

    return 0;
}