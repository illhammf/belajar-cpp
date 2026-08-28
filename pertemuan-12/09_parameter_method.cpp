#include <iostream>

using namespace std;

class Kalkulator
{
public:

    int tambah(int a, int b) // Method bisa menerima Parameter seperti Function biasa.
    {
        return a + b;
    }
};

int main()
{
    Kalkulator kalkulator;

    int hasil = kalkulator.tambah(10, 20);

    cout << "Hasil: " << hasil << endl;

    return 0;
}