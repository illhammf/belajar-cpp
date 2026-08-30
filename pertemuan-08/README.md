# Pertemuan 08 — String

Pada pertemuan ini kita akan mempelajari **String** pada C++.

String digunakan untuk menyimpan data berupa teks, seperti:

- Nama
- Alamat
- Username
- Email
- Judul
- Pesan
- Deskripsi

Pertemuan ini juga akan menggabungkan beberapa materi sebelumnya seperti **Array, Looping, Conditional, dan Function**.

---

## 🎯 Tujuan Pembelajaran

Setelah menyelesaikan pertemuan ini, kita diharapkan mampu:

- Memahami konsep String.
- Membuat dan menyimpan String.
- Menerima input berupa String.
- Menggunakan `cin` dan `getline()`.
- Mengetahui panjang String.
- Mengakses karakter berdasarkan index.
- Mengubah karakter dalam String.
- Menggabungkan beberapa String.
- Membandingkan String.
- Mencari teks di dalam String.
- Mengambil sebagian String.
- Menggunakan String dengan Looping.
- Menggunakan String dengan Function.
- Menggunakan Array yang berisi String.

---

# 1. Apa Itu String?

String adalah kumpulan karakter yang digunakan untuk menyimpan teks.

Contoh:

```cpp
string nama = "Ilham";
```

Variable `nama` menyimpan teks:

```text
Ilham
```

String dapat berisi satu kata maupun beberapa kata.

Contoh:

```cpp
string nama = "Ilham";
string namaLengkap = "Ilham Firmansyah";
```

---

# 2. String dan Char

Sebelum mempelajari String, kita perlu mengetahui perbedaan `char` dan `string`.

### Char

`char` digunakan untuk menyimpan satu karakter.

```cpp
char huruf = 'A';
```

Contoh karakter:

```text
A
B
C
1
@
```

Perhatikan penggunaan tanda:

```cpp
'A'
```

Char menggunakan **single quote**.

### String

`string` digunakan untuk menyimpan banyak karakter atau teks.

```cpp
string nama = "Ilham";
```

String menggunakan **double quote**:

```cpp
"Ilham"
```

Perbedaannya:

```text
char
↓
satu karakter

string
↓
kumpulan karakter / teks
```

---

# 3. Library String

Untuk menggunakan `string`, kita dapat menggunakan:

```cpp
#include <string>
```

Contoh:

```cpp
#include <iostream>
#include <string>

using namespace std;

int main()
{
    string nama = "Ilham";

    cout << nama << endl;

    return 0;
}
```

Output:

```text
Ilham
```

---

# 4. Menggunakan `using namespace std`

Pada pertemuan ini kita tetap menggunakan:

```cpp
using namespace std;
```

Sehingga kita cukup menulis:

```cpp
string nama;
```

daripada:

```cpp
std::string nama;
```

Contoh:

```cpp
#include <iostream>
#include <string>

using namespace std;

int main()
{
    string nama;

    cout << "Nama: ";
    cin >> nama;

    return 0;
}
```

---

# 5. Membuat String

String dapat dibuat seperti variable biasa.

```cpp
string nama;
```

Kita juga dapat langsung memberikan nilai:

```cpp
string nama = "Ilham";
```

Contoh:

```cpp
#include <iostream>
#include <string>

using namespace std;

int main()
{
    string nama = "Ilham";

    cout << "Nama: " << nama << endl;

    return 0;
}
```

Output:

```text
Nama: Ilham
```

---

# 6. Input String Menggunakan `cin`

Kita dapat menggunakan `cin` untuk menerima input String.

```cpp
#include <iostream>
#include <string>

using namespace std;

int main()
{
    string nama;

    cout << "Masukkan nama: ";
    cin >> nama;

    cout << "Halo, " << nama << endl;

    return 0;
}
```

Contoh input:

```text
Ilham
```

Output:

```text
Halo, Ilham
```

Namun terdapat satu hal penting.

`cin` hanya membaca sampai menemukan spasi.

Jika user memasukkan:

```text
Ilham Firmansyah
```

maka yang dibaca hanya:

```text
Ilham
```

---

# 7. Input Kalimat Menggunakan `getline()`

Jika kita ingin membaca satu baris penuh, gunakan:

```cpp
getline()
```

Contoh:

```cpp
#include <iostream>
#include <string>

using namespace std;

int main()
{
    string namaLengkap;

    cout << "Masukkan nama lengkap: ";
    getline(cin, namaLengkap);

    cout << "Nama: " << namaLengkap << endl;

    return 0;
}
```

Input:

```text
Ilham Firmansyah
```

Output:

```text
Nama: Ilham Firmansyah
```

Jadi:

```text
cin
↓
membaca satu kata

getline()
↓
membaca satu baris
```

---

# 8. Perbedaan `cin` dan `getline()`

| Input | Keterangan |
|---|---|
| `cin >> nama` | Membaca sampai spasi |
| `getline(cin, nama)` | Membaca satu baris penuh |

Contoh:

```cpp
cin >> nama;
```

Input:

```text
Ilham Firmansyah
```

Hasil:

```text
Ilham
```

Sedangkan:

```cpp
getline(cin, nama);
```

Input:

```text
Ilham Firmansyah
```

Hasil:

```text
Ilham Firmansyah
```

---

# 9. Masalah `cin` dan `getline()`

Kita perlu berhati-hati ketika mencampurkan `cin` dengan `getline()`.

Contoh:

```cpp
int umur;
string nama;

cout << "Umur: ";
cin >> umur;

cout << "Nama: ";
getline(cin, nama);
```

Pada kondisi tertentu, `getline()` dapat membaca newline yang masih tersisa dari input sebelumnya.

Gunakan:

```cpp
cin.ignore();
```

Contoh:

```cpp
#include <iostream>
#include <string>

using namespace std;

int main()
{
    int umur;
    string nama;

    cout << "Umur: ";
    cin >> umur;

    cin.ignore();

    cout << "Nama: ";
    getline(cin, nama);

    cout << endl;

    cout << "Umur: " << umur << endl;
    cout << "Nama: " << nama << endl;

    return 0;
}
```

Pola yang perlu diingat:

```cpp
cin >> umur;
cin.ignore();
getline(cin, nama);
```

---

# 10. Index pada String

String memiliki index seperti Array.

Contoh:

```cpp
string nama = "Ilham";
```

Posisinya:

```text
Index     Karakter

  0          I
  1          l
  2          h
  3          a
  4          m
```

Index String dimulai dari:

```text
0
```

bukan:

```text
1
```

---

# 11. Mengakses Karakter String

Kita dapat mengakses karakter menggunakan index.

```cpp
#include <iostream>
#include <string>

using namespace std;

int main()
{
    string nama = "Ilham";

    cout << nama[0] << endl;
    cout << nama[1] << endl;
    cout << nama[2] << endl;

    return 0;
}
```

Output:

```text
I
l
h
```

Contoh lainnya:

```cpp
nama[0]
nama[1]
nama[2]
nama[3]
nama[4]
```

---

# 12. Mengakses Semua Karakter dengan Looping

Karena String memiliki index, kita dapat menggunakan `for`.

```cpp
#include <iostream>
#include <string>

using namespace std;

int main()
{
    string nama = "Ilham";

    for (int i = 0; i < nama.length(); i++)
    {
        cout << nama[i] << endl;
    }

    return 0;
}
```

Output:

```text
I
l
h
a
m
```

Pola penting:

```cpp
for (int i = 0; i < nama.length(); i++)
{
    cout << nama[i] << endl;
}
```

Di sini:

```text
i
↓
index

nama[i]
↓
karakter pada index tersebut
```

---

# 13. Mengetahui Panjang String

Untuk mengetahui panjang String, kita dapat menggunakan:

```cpp
.length()
```

Contoh:

```cpp
#include <iostream>
#include <string>

using namespace std;

int main()
{
    string nama = "Ilham";

    cout << "Nama: " << nama << endl;
    cout << "Panjang: " << nama.length() << endl;

    return 0;
}
```

Output:

```text
Nama: Ilham
Panjang: 5
```

Karena:

```text
I
l
h
a
m
```

berjumlah 5 karakter.

---

# 14. Menggunakan `.size()`

Selain `.length()`, kita juga dapat menggunakan:

```cpp
.size()
```

Contoh:

```cpp
string nama = "Ilham";

cout << nama.size();
```

Output:

```text
5
```

Untuk String, `.length()` dan `.size()` dapat digunakan untuk mendapatkan jumlah karakter.

---

# 15. Mengubah Karakter

Karakter pada String dapat diubah berdasarkan index.

Contoh:

```cpp
#include <iostream>
#include <string>

using namespace std;

int main()
{
    string nama = "Ilham";

    nama[0] = 'A';

    cout << nama << endl;

    return 0;
}
```

Output:

```text
Alham
```

Karena:

```cpp
nama[0] = 'A';
```

mengubah karakter pertama dari:

```text
I
```

menjadi:

```text
A
```

---

# 16. Menggabungkan String

Kita dapat menggabungkan String menggunakan operator:

```cpp
+
```

Contoh:

```cpp
#include <iostream>
#include <string>

using namespace std;

int main()
{
    string namaDepan = "Ilham";
    string namaBelakang = "Firmansyah";

    string namaLengkap = namaDepan + " " + namaBelakang;

    cout << namaLengkap << endl;

    return 0;
}
```

Output:

```text
Ilham Firmansyah
```

Bagian:

```cpp
" "
```

digunakan untuk memberikan spasi.

---

# 17. Operator `+=`

Kita juga dapat menambahkan String menggunakan:

```cpp
+=
```

Contoh:

```cpp
#include <iostream>
#include <string>

using namespace std;

int main()
{
    string nama = "Ilham";

    nama += " Firmansyah";

    cout << nama << endl;

    return 0;
}
```

Output:

```text
Ilham Firmansyah
```

Konsepnya sama dengan:

```cpp
nama = nama + " Firmansyah";
```

---

# 18. Membandingkan String

Kita dapat membandingkan dua String menggunakan:

```cpp
==
```

Contoh:

```cpp
#include <iostream>
#include <string>

using namespace std;

int main()
{
    string username1 = "ilham";
    string username2 = "ilham";

    if (username1 == username2)
    {
        cout << "Username sama." << endl;
    }
    else
    {
        cout << "Username berbeda." << endl;
    }

    return 0;
}
```

Output:

```text
Username sama.
```

---

# 19. String Bersifat Case Sensitive

C++ membedakan huruf besar dan kecil.

Contoh:

```text
Ilham
```

berbeda dengan:

```text
ilham
```

Contoh:

```cpp
string nama1 = "Ilham";
string nama2 = "ilham";

if (nama1 == nama2)
{
    cout << "Sama";
}
else
{
    cout << "Berbeda";
}
```

Output:

```text
Berbeda
```

Karena:

```text
I
```

berbeda dengan:

```text
i
```

---

# 20. Mencari Teks dengan `.find()`

Kita dapat mencari teks tertentu menggunakan:

```cpp
.find()
```

Contoh:

```cpp
#include <iostream>
#include <string>

using namespace std;

int main()
{
    string kalimat = "Saya sedang belajar C++";

    int posisi = kalimat.find("C++");

    cout << "Posisi: " << posisi << endl;

    return 0;
}
```

`.find()` akan mencari posisi awal dari teks yang dicari.

---

# 21. Mengecek Apakah String Ditemukan

Kita dapat menggunakan:

```cpp
string::npos
```

untuk mengetahui apakah teks tidak ditemukan.

Contoh:

```cpp
#include <iostream>
#include <string>

using namespace std;

int main()
{
    string kalimat = "Saya sedang belajar C++";

    if (kalimat.find("C++") != string::npos)
    {
        cout << "Teks ditemukan." << endl;
    }
    else
    {
        cout << "Teks tidak ditemukan." << endl;
    }

    return 0;
}
```

Output:

```text
Teks ditemukan.
```

Jika mencari:

```cpp
kalimat.find("Python")
```

maka hasilnya:

```text
Teks tidak ditemukan.
```

---

# 22. Mengambil Sebagian String dengan `substr()`

Kita dapat mengambil sebagian String menggunakan:

```cpp
.substr()
```

Bentuk:

```cpp
string.substr(posisiAwal, jumlahKarakter);
```

Contoh:

```cpp
#include <iostream>
#include <string>

using namespace std;

int main()
{
    string nama = "Ilham";

    string bagian = nama.substr(0, 3);

    cout << bagian << endl;

    return 0;
}
```

Output:

```text
Ilh
```

Penjelasan:

```cpp
nama.substr(0, 3);
```

berarti:

```text
mulai dari index 0
↓
ambil 3 karakter
```

---

# 23. String dengan Looping

Kita dapat menggunakan String bersama Looping untuk melakukan pengolahan karakter.

Contoh menghitung jumlah huruf `a`:

```cpp
#include <iostream>
#include <string>

using namespace std;

int main()
{
    string nama = "ilham";

    int jumlah = 0;

    for (int i = 0; i < nama.length(); i++)
    {
        if (nama[i] == 'a')
        {
            jumlah++;
        }
    }

    cout << "Jumlah huruf a: " << jumlah << endl;

    return 0;
}
```

Output:

```text
Jumlah huruf a: 1
```

Konsep yang digunakan:

```text
String
   +
Index
   +
Looping
   +
Conditional
```

---

# 24. String dengan Function

String dapat dikirim sebagai parameter Function.

Contoh:

```cpp
#include <iostream>
#include <string>

using namespace std;

void tampilkanNama(string nama)
{
    cout << "Nama: " << nama << endl;
}

int main()
{
    string nama = "Ilham";

    tampilkanNama(nama);

    return 0;
}
```

Output:

```text
Nama: Ilham
```

---

# 25. Function Menghitung Panjang String

Kita juga dapat membuat Function untuk menghitung panjang String.

```cpp
#include <iostream>
#include <string>

using namespace std;

int hitungPanjang(string teks)
{
    return teks.length();
}

int main()
{
    string nama = "Ilham";

    int panjang = hitungPanjang(nama);

    cout << "Panjang nama: " << panjang << endl;

    return 0;
}
```

Output:

```text
Panjang nama: 5
```

---

# 26. Array of String

String juga dapat disimpan dalam Array.

Contoh:

```cpp
string nama[5] = {
    "Ilham",
    "Budi",
    "Andi",
    "Rizky",
    "Dimas"
};
```

Kita dapat menampilkannya dengan Looping:

```cpp
for (int i = 0; i < 5; i++)
{
    cout << nama[i] << endl;
}
```

Output:

```text
Ilham
Budi
Andi
Rizky
Dimas
```

Jadi sekarang kita memiliki:

```text
Array
↓
Menyimpan banyak String
```

---

# 27. Program Data Mahasiswa

Sekarang kita gabungkan beberapa konsep.

```cpp
#include <iostream>
#include <string>

using namespace std;

int main()
{
    string nama;
    string jurusan;
    int umur;

    cout << "Masukkan nama   : ";
    getline(cin, nama);

    cout << "Masukkan jurusan: ";
    getline(cin, jurusan);

    cout << "Masukkan umur   : ";
    cin >> umur;

    cout << endl;

    cout << "Data Mahasiswa" << endl;
    cout << "--------------" << endl;
    cout << "Nama    : " << nama << endl;
    cout << "Jurusan : " << jurusan << endl;
    cout << "Umur    : " << umur << endl;

    return 0;
}
```

Contoh:

```text
Masukkan nama   : Ilham Firmansyah
Masukkan jurusan: Informatika
Masukkan umur   : 20

Data Mahasiswa
--------------
Nama    : Ilham Firmansyah
Jurusan : Informatika
Umur    : 20
```

---

# 28. Konsep yang Sudah Dipelajari

Pada pertemuan ini kita sudah menggunakan:

```text
String
  ↓
Input
  ↓
getline()
  ↓
Index
  ↓
Looping
  ↓
Conditional
  ↓
Function
  ↓
Array of String
```

Materi ini merupakan pengembangan dari materi sebelumnya.

---

# 🔗 Hubungan dengan Pertemuan Sebelumnya

## Pertemuan 04 — Conditional

Kita menggunakan:

```cpp
if
else
```

untuk melakukan pengecekan String.

---

## Pertemuan 05 — Looping

Kita menggunakan:

```cpp
for
```

untuk memproses setiap karakter String.

---

## Pertemuan 06 — Function

Kita menggunakan String sebagai:

```text
Parameter Function
```

---

## Pertemuan 07 — Array

Kita menggunakan:

```text
Array of String
```

untuk menyimpan banyak teks.

---

# 🧠 Pola Penting

Jika memiliki:

```cpp
string nama = "Ilham";
```

maka kita dapat:

### Mengakses karakter

```cpp
nama[0]
```

### Mengetahui panjang

```cpp
nama.length()
```

### Mengubah karakter

```cpp
nama[0] = 'A';
```

### Menggabungkan

```cpp
nama = nama + " Firmansyah";
```

### Mencari teks

```cpp
nama.find("ham");
```

### Mengambil sebagian

```cpp
nama.substr(0, 3);
```

### Melakukan looping

```cpp
for (int i = 0; i < nama.length(); i++)
{
    cout << nama[i];
}
```

---

# 🧪 Mini Challenge

## Challenge 01 — Nama Lengkap

Buat program yang meminta nama lengkap menggunakan:

```cpp
getline()
```

Kemudian tampilkan:

```text
Nama:
Panjang nama:
```

---

## Challenge 02 — Menghitung Huruf

Buat program untuk menghitung berapa kali huruf `a` muncul.

Contoh:

```text
Input:
Ilham Firmansyah

Output:
Jumlah huruf a: 2
```

---

## Challenge 03 — Huruf dan Angka

Buat program yang menerima String kemudian menghitung:

```text
Jumlah huruf
Jumlah angka
Jumlah spasi
```

---

## Challenge 04 — Array Nama

Buat Array yang berisi 5 nama:

```text
Ilham
Budi
Andi
Rizky
Dimas
```

Kemudian tampilkan semua nama menggunakan `for`.

---

## Challenge 05 — Pencarian Nama

Buat program pencarian nama.

Data:

```text
Ilham
Budi
Andi
Rizky
Dimas
```

User memasukkan nama yang ingin dicari.

Jika ditemukan:

```text
Nama ditemukan.
```

Jika tidak:

```text
Nama tidak ditemukan.
```

---

## Challenge 06 — Data Mahasiswa

Buat program yang menerima:

```text
Nama
NIM
Jurusan
```

Kemudian tampilkan kembali data tersebut.

Gunakan:

```cpp
getline()
```

untuk input data teks.

---

# 📁 Struktur Folder Pertemuan 08

```text
pertemuan-08/
│
├── catatan.md
│
├── 01_string_sederhana.cpp
├── 02_input_string.cpp
├── 03_input_kalimat.cpp
├── 04_panjang_string.cpp
├── 05_mengakses_karakter.cpp
├── 06_mengubah_karakter.cpp
├── 07_menggabungkan_string.cpp
├── 08_membandingkan_string.cpp
├── 09_mencari_string.cpp
├── 10_string_dengan_loop.cpp
├── 11_string_dengan_function.cpp
├── 12_menghitung_huruf.cpp
└── 13_program_data_mahasiswa.cpp
```

---

# ✅ Checklist

- [ ] Memahami pengertian String.
- [ ] Memahami perbedaan `char` dan `string`.
- [ ] Dapat membuat String.
- [ ] Dapat menggunakan `cin`.
- [ ] Dapat menggunakan `getline()`.
- [ ] Memahami masalah `cin` dan `getline()`.
- [ ] Memahami index String.
- [ ] Dapat mengakses karakter String.
- [ ] Dapat melakukan looping pada String.
- [ ] Dapat mengetahui panjang String.
- [ ] Dapat mengubah karakter.
- [ ] Dapat menggabungkan String.
- [ ] Dapat membandingkan String.
- [ ] Dapat mencari teks menggunakan `.find()`.
- [ ] Memahami `string::npos`.
- [ ] Dapat menggunakan `.substr()`.
- [ ] Dapat menggunakan String dengan Function.
- [ ] Dapat membuat Array of String.

---

# 🚀 Next Step

Setelah memahami String, kita sudah memiliki dasar yang cukup untuk mulai mengolah data yang lebih beragam.

Perjalanan kita:

```text
Pertemuan 01
Dasar-Dasar C++
        ↓
Pertemuan 02
Variable & Input/Output
        ↓
Pertemuan 03
Operator
        ↓
Pertemuan 04
Conditional
        ↓
Pertemuan 05
Looping
        ↓
Pertemuan 06
Function
        ↓
Pertemuan 07
Array
        ↓
Pertemuan 08
String
        ↓
Pertemuan 09
Next Topic
```

---

## 🎯 Kesimpulan

String merupakan salah satu tipe data yang sangat sering digunakan dalam pemrograman.

Dengan memahami String, kita sekarang dapat mengolah:

```text
Teks
↓
Karakter
↓
Nama
↓
Kalimat
↓
Data pengguna
```

Dan kita juga sudah mulai menggabungkan beberapa konsep:

```text
Array
   +
String
   +
Looping
   +
Conditional
   +
Function
   ↓
Program yang lebih kompleks
```

**Happy Coding!**