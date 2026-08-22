#include <iostream>
#include <string>

using namespace std;

int main()
{
    string username1;
    string username2;

    cout << "Username pertama: ";
    cin >> username1;

    cout << "Username kedua: ";
    cin >> username2;

    if (username1 == username2) // == digunakan untuk membandingkan dua string
    {
        cout << "Username sama." << endl;
    }
    else
    {
        cout << "Username berbeda." << endl;
    }

    return 0;
}