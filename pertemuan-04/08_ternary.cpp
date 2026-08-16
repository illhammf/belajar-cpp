#include <iostream>
#include <string>
using namespace std;

int main()
{
    int nilai;

    cout << "Masukkan nilai: ";
    cin >> nilai;

    // Menggunakan operator ternary untuk menentukan apakah nilai lulus atau tidak
    // Operator ternary adalah cara singkat untuk menulis kondisi if-else dalam satu baris. Sintaksnya adalah: kondisi ? nilai_jika_true : nilai_jika_false;
    string hasil = (nilai >= 75) ? "Lulus" : "Tidak Lulus";

    cout << hasil << endl;

    return 0;
}