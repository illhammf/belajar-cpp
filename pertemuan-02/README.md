# Pertemuan 02 — Variable, Data Type & Input

> Mempelajari cara menyimpan data, mengenal tipe data, menerima input dari pengguna, dan melakukan operasi sederhana menggunakan C++.

---

## 🎯 Tujuan Pembelajaran

Setelah menyelesaikan pertemuan ini, kita diharapkan mampu:

- Memahami apa itu variable.
- Memahami deklarasi dan inisialisasi variable.
- Mengubah nilai variable.
- Mengenal tipe data dasar C++.
- Memahami penggunaan `const`.
- Menerima input menggunakan `std::cin`.
- Membaca teks menggunakan `std::getline()`.
- Menggunakan operator matematika sederhana.
- Mengenal type casting menggunakan `static_cast`.

---

## 1. Apa Itu Variable?

Variable adalah tempat yang digunakan untuk menyimpan data di dalam program.

Contoh:

```cpp
int umur = 20;
```

Kode tersebut dapat dipahami sebagai:

```text
int
 ↓
Tipe data

umur
 ↓
Nama variable

20
 ↓
Nilai yang disimpan
```

Variable kemudian dapat digunakan kembali:

```cpp
std::cout << umur;
```

Output:

```text
20
```

---

## 2. Deklarasi dan Inisialisasi

Ada dua istilah penting yang perlu dipahami.

### Deklarasi

Deklarasi berarti membuat variable tanpa memberikan nilai awal.

```cpp
int umur;
```

### Inisialisasi

Inisialisasi berarti membuat variable sekaligus memberikan nilai awal.

```cpp
int umur = 20;
```

Kita juga dapat melakukannya secara terpisah:

```cpp
int umur;

umur = 20;
```

Keduanya valid.

---

## 3. Mengubah Nilai Variable

Nilai variable dapat diubah selama program berjalan.

```cpp
int umur = 20;

umur = 21;

std::cout << umur;
```

Output:

```text
21
```

Perhatikan:

```cpp
umur = 21;
```

Kode tersebut tidak membuat variable baru. Kode tersebut mengubah nilai dari variable `umur`.

---

## 4. Tipe Data

Tipe data menentukan jenis data yang dapat disimpan oleh sebuah variable.

| Tipe Data | Kegunaan | Contoh |
|---|---|---|
| `int` | Bilangan bulat | `20` |
| `float` | Bilangan desimal | `3.14f` |
| `double` | Bilangan desimal dengan presisi lebih tinggi | `3.14159` |
| `char` | Satu karakter | `'A'` |
| `bool` | Nilai benar atau salah | `true` |
| `std::string` | Teks | `"Ilham"` |

Contoh:

```cpp
int umur = 20;
float tinggi = 170.5f;
double nilai = 95.75;
char grade = 'A';
bool lulus = true;
std::string nama = "Ilham";
```

---

## 5. `int`

`int` digunakan untuk menyimpan bilangan bulat.

```cpp
int umur = 20;
int jumlah = 10;
int nilai = 95;
```

---

## 6. `float` dan `double`

`float` dan `double` digunakan untuk menyimpan bilangan desimal.

```cpp
float tinggi = 170.5f;
double nilai = 95.75;
```

Secara umum, `double` memiliki presisi lebih tinggi dibandingkan `float`.

---

## 7. `char`

`char` digunakan untuk menyimpan satu karakter.

```cpp
char grade = 'A';
```

`'A'` merupakan `char`, sedangkan `"A"` merupakan string.

---

## 8. `bool`

`bool` digunakan untuk menyimpan:

```text
true
false
```

Contoh:

```cpp
bool lulus = true;
bool hadir = false;
```

Secara default:

```text
true  → 1
false → 0
```

---

## 9. `std::string`

`std::string` digunakan untuk menyimpan teks.

Untuk menggunakannya, masukkan:

```cpp
#include <string>
```

Contoh:

```cpp
#include <iostream>
#include <string>

int main()
{
    std::string nama = "Ilham";

    std::cout << nama;

    return 0;
}
```

Output:

```text
Ilham
```

---

## 10. `const`

`const` digunakan ketika sebuah nilai tidak boleh diubah setelah diberikan nilai awal.

```cpp
const double PI = 3.14159;
```

Kode berikut akan menghasilkan error:

```cpp
PI = 3.14;
```

Gunakan `const` ketika sebuah nilai memang seharusnya tetap.

---

## 11. Input dengan `std::cin`

`std::cin` digunakan untuk menerima input dari pengguna.

```cpp
#include <iostream>

int main()
{
    int umur;

    std::cout << "Masukkan umur: ";
    std::cin >> umur;

    std::cout << "Umur kamu: " << umur << std::endl;

    return 0;
}
```

Contoh:

```text
Masukkan umur: 20
Umur kamu: 20
```

Alurnya:

```text
User memasukkan data
        ↓
     std::cin
        ↓
   Variable umur
        ↓
     Diproses
        ↓
     std::cout
        ↓
   Ditampilkan
```

---

## 12. Input String dengan `std::cin`

Untuk input satu kata:

```cpp
std::string nama;

std::cin >> nama;
```

Jika pengguna memasukkan:

```text
Ilham
```

maka variable `nama` berisi `Ilham`.

Namun jika memasukkan:

```text
Ilham Firmansyah
```

`std::cin >> nama` hanya mengambil `Ilham`.

---

## 13. Input Satu Baris dengan `std::getline()`

Untuk membaca teks yang memiliki spasi, gunakan:

```cpp
std::getline()
```

Contoh:

```cpp
#include <iostream>
#include <string>

int main()
{
    std::string nama;

    std::cout << "Masukkan nama lengkap: ";
    std::getline(std::cin, nama);

    std::cout << "Nama: " << nama << std::endl;

    return 0;
}
```

Input:

```text
Ilham Firmansyah
```

akan dibaca secara utuh.

---

## 14. Perbedaan `std::cin` dan `std::getline()`

| Method | Cocok untuk |
|---|---|
| `std::cin >> nama` | Satu kata |
| `std::getline(std::cin, nama)` | Satu baris teks |

---

## 15. Operator Matematika

C++ menyediakan operator matematika dasar.

| Operator | Fungsi | Contoh |
|---|---|---|
| `+` | Penjumlahan | `10 + 5` |
| `-` | Pengurangan | `10 - 5` |
| `*` | Perkalian | `10 * 5` |
| `/` | Pembagian | `10 / 5` |
| `%` | Sisa pembagian | `10 % 3` |

Contoh:

```cpp
int a = 10;
int b = 5;

std::cout << a + b << std::endl;
std::cout << a - b << std::endl;
std::cout << a * b << std::endl;
std::cout << a / b << std::endl;
```

Output:

```text
15
5
50
2
```

---

## 16. Operator `%`

Operator `%` digunakan untuk mendapatkan sisa hasil pembagian.

```cpp
int hasil = 10 % 3;
```

Hasil:

```text
1
```

Karena:

```text
10 ÷ 3 = 3 sisa 1
```

Operator `%` nantinya sangat berguna untuk pengecekan bilangan genap dan ganjil.

---

## 17. Pembagian Integer

Perhatikan:

```cpp
int a = 10;
int b = 3;

std::cout << a / b;
```

Hasilnya:

```text
3
```

Bukan:

```text
3.33333
```

Karena kedua variable bertipe `int`.

---

## 18. Type Casting

Type casting adalah proses mengubah sebuah nilai dari satu tipe data ke tipe data lainnya.

Contoh:

```cpp
int angka = 10;

double hasil = static_cast<double>(angka) / 3;

std::cout << hasil;
```

Output:

```text
3.33333
```

Bagian:

```cpp
static_cast<double>(angka)
```

mengubah `angka` menjadi `double`.

---

## 19. Contoh Program Lengkap

```cpp
#include <iostream>
#include <string>

int main()
{
    std::string nama;
    int umur;
    double nilai;

    std::cout << "Masukkan nama: ";
    std::getline(std::cin, nama);

    std::cout << "Masukkan umur: ";
    std::cin >> umur;

    std::cout << "Masukkan nilai: ";
    std::cin >> nilai;

    std::cout << "\n=== DATA MAHASISWA ===" << std::endl;
    std::cout << "Nama  : " << nama << std::endl;
    std::cout << "Umur  : " << umur << std::endl;
    std::cout << "Nilai : " << nilai << std::endl;

    return 0;
}
```

Contoh output:

```text
Masukkan nama: Ilham Firmansyah
Masukkan umur: 20
Masukkan nilai: 90.5

=== DATA MAHASISWA ===
Nama  : Ilham Firmansyah
Umur  : 20
Nilai : 90.5
```

---

# 🧪 Mini Challenge

## Challenge 01 — Biodata

Buat program yang meminta:

```text
Nama:
Umur:
Tinggi:
```

Kemudian tampilkan kembali data tersebut.

---

## Challenge 02 — Luas Persegi Panjang

Buat program yang meminta:

```text
Panjang:
Lebar:
```

Gunakan rumus:

```text
Luas = panjang × lebar
```

---

## Challenge 03 — Rata-rata Nilai

Buat program yang meminta tiga nilai dan menghitung rata-ratanya.

Rumus:

```text
Rata-rata = (nilai1 + nilai2 + nilai3) / 3
```

---

# 💡 Tips Belajar

Jangan hanya membaca source code.

Coba ubah:

```cpp
int umur = 20;
```

menjadi:

```cpp
int umur = 25;
```

Kemudian jalankan kembali program.

Coba juga mengubah nilai `double` dan melihat hasilnya.

---

# ✅ Checklist

- [ ] Memahami variable.
- [ ] Memahami deklarasi dan inisialisasi.
- [ ] Dapat mengubah nilai variable.
- [ ] Memahami `int`.
- [ ] Memahami `float`.
- [ ] Memahami `double`.
- [ ] Memahami `char`.
- [ ] Memahami `bool`.
- [ ] Memahami `std::string`.
- [ ] Memahami `const`.
- [ ] Dapat menggunakan `std::cin`.
- [ ] Dapat menggunakan `std::getline()`.
- [ ] Memahami operator `+`, `-`, `*`, `/`, `%`.
- [ ] Memahami pembagian integer.
- [ ] Mengenal `static_cast`.

---

# 🧠 Kesimpulan

Pada pertemuan ini kita belajar bagaimana program menyimpan dan menerima data.

Konsep utamanya:

```text
Variable
    ↓
Data Type
    ↓
Input
    ↓
Process
    ↓
Output
```

Variable dan tipe data merupakan konsep penting karena hampir semua program membutuhkan data.

---

# 🚀 Next Step

## Pertemuan 03 — Operator & Expression

Pada pertemuan berikutnya kita akan mempelajari:

- Arithmetic Operator
- Assignment Operator
- Comparison Operator
- Logical Operator
- Expression

> Pahami konsep dasar terlebih dahulu karena materi berikutnya akan menggunakan variable dan tipe data yang sudah dipelajari di sini.

---

**Happy Coding! 🚀**
