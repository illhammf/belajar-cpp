#include <iostream>
#include <string>
using namespace std; // Deklarasi namespace std agar tidak perlu menulis std:: di depan cout dan endl

int main()
{
    int umur = 20;
    float tinggi = 170.5f;
    double nilai = 95.75;
    char grade = 'A';
    bool lulus = true;
    string nama = "Ilham";

    cout << "Nama   : " << nama << endl;
    cout << "Umur   : " << umur << endl;
    cout << "Tinggi : " << tinggi << endl;
    cout << "Nilai  : " << nilai << endl;
    cout << "Grade  : " << grade << endl;
    cout << "Lulus  : " << lulus << endl;

    return 0;
}