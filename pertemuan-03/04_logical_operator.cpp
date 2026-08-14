#include <iostream>
using namespace std;

int main()
{
    int umur = 20;

    bool kondisi1 = umur >= 17;
    bool kondisi2 = umur <= 30;

    cout << "Kondisi 1 : " << kondisi1 << endl;
    cout << "Kondisi 2 : " << kondisi2 << endl;

    cout << "AND : " << (kondisi1 && kondisi2) << endl;
    cout << "OR  : " << (kondisi1 || kondisi2) << endl;
    cout << "NOT : " << (!kondisi1) << endl;

    return 0;
}