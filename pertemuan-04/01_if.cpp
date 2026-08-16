#include <iostream>
using namespace std;

int main()
{
    int umur = 20;

    if (umur >= 17) // Jika umur lebih besar atau sama dengan 17
    {
        cout << "Kamu sudah cukup umur." << endl;
    }
    // Kalo kita membuat umur kurang dari 17, maka tidak akan menampilkan output apapun karena tidak ada kondisi else yang menangani kasus tersebut.
    // Kita lanjut ke file berikutnya untuk menambahkan kondisi else agar program bisa menangani kasus umur kurang dari 17.

    return 0;
}