#include <iostream>
using namespace std;

int main()
{
    int umur = 20;

    bool kondisi1 = umur >= 17;
    bool kondisi2 = umur <= 30;

    cout << "=== Cek Kondisi ===" << endl;
    cout << "Kondisi 1 : " << kondisi1 << endl;
    cout << "Kondisi 2 : " << kondisi2 << endl;
    
    cout << "=== LOGICAL OPERATOR ===" << endl;
    // Operator logika digunakan untuk menggabungkan beberapa kondisi
    cout << "AND : " << (kondisi1 && kondisi2) << endl; // Operator AND (&&) akan menghasilkan true jika kedua kondisi bernilai true
    cout << "OR  : " << (kondisi1 || kondisi2) << endl; // Operator OR (||) akan menghasilkan true jika salah satu kondisi bernilai true
    cout << "NOT : " << (!kondisi1) << endl; // Operator NOT (!) akan menghasilkan nilai kebalikan dari kondisi, jika kondisi bernilai true maka hasilnya false, dan sebaliknya

    return 0;
}