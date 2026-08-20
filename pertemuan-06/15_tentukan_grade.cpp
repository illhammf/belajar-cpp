#include <iostream>
using namespace std;

char tentukanGrade(int nilai)
{
    if (nilai >= 90)
    {
        return 'A';
    }
    else if (nilai >= 80)
    {
        return 'B';
    }
    else if (nilai >= 70)
    {
        return 'C';
    }
    else
    {
        return 'D';
    }
}

int main()
{
    int nilai;

    cout << "Masukkan nilai: ";
    cin >> nilai;

    cout << "Grade: " << tentukanGrade(nilai) << endl;

    return 0;
}