#include <iostream>
#include <string>
using namespace std;

int main()
{
    string nama;
    int umur;
    double tinggi;

    cout << "=== INPUT BIODATA ===" << endl;

    cout << "Nama   : ";
    getline(cin, nama);

    cout << "Umur   : ";
    cin >> umur;

    cout << "Tinggi : ";
    cin >> tinggi;

    cout << endl;

    cout << "=== BIODATA ===" << endl;
    cout << "Nama   : " << nama << endl;
    cout << "Umur   : " << umur << " tahun" << endl;
    cout << "Tinggi : " << tinggi << " cm" << endl;

    return 0;
}