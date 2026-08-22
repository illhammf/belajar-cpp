#include <iostream>
#include <string>

using namespace std;

int main()
{
    string nama[5] = {
        "Ilham",
        "Budi",
        "Andi",
        "Rizky",
        "Dimas"
    };

    for (int i = 0; i < 5; i++)
    {
        cout << "Nama ke-" << i + 1
             << ": " << nama[i] << endl;
    }

    return 0;
}