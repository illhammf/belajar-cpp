# Pertemuan 01 — Pengenalan C++

> **Roadmap:** Fundamental C++ → Object-Oriented Programming → STL → Struktur Data → Project  
> **Level:** Beginner  
> **Fokus:** Memahami dasar C++ sebelum masuk ke materi yang lebih kompleks.

---

## 📚 Daftar Isi

1. [Tujuan Pembelajaran](#-tujuan-pembelajaran)
2. [Apa Itu C++?](#1-apa-itu-c)
3. [Kenapa Belajar C++?](#2-kenapa-belajar-c)
4. [Hubungan C dan C++](#3-hubungan-c-dan-c)
5. [C++ dan Struktur Data](#4-c-dan-struktur-data)
6. [Program C++ Pertama](#5-program-c-pertama)
7. [Memahami Struktur Program](#6-memahami-struktur-program)
8. [Header dan `#include`](#7-header-dan-include)
9. [Fungsi `main()`](#8-fungsi-main)
10. [Output dengan `std::cout`](#9-output-dengan-stdcout)
11. [Baris Baru: `\n` dan `std::endl`](#10-baris-baru-n-dan-stdendl)
12. [Input dengan `std::cin`](#11-input-dengan-stdcin)
13. [Variable](#12-variable)
14. [Tipe Data Dasar](#13-tipe-data-dasar)
15. [Aturan Penamaan](#14-aturan-penamaan-variable)
16. [Komentar](#15-komentar)
17. [Case Sensitive](#16-case-sensitive)
18. [Statement dan Semicolon](#17-statement-dan-semicolon)
19. [Compile dan Run](#18-compile-dan-run)
20. [Compiler](#19-apa-itu-compiler)
21. [Error Dasar](#20-error-dasar-yang-sering-terjadi)
22. [Perbedaan Dasar C dan C++](#21-perbedaan-dasar-c-dan-c)
23. [Mini Challenge](#22-mini-challenge)
24. [Checklist](#23-checklist-pemahaman)
25. [Kesimpulan](#24-kesimpulan)
26. [Next Step](#25-next-step)

---

# 🎯 Tujuan Pembelajaran

Setelah menyelesaikan pertemuan ini, diharapkan mampu:

- Menjelaskan secara sederhana apa itu C++.
- Menjelaskan hubungan antara C dan C++.
- Memahami struktur dasar program C++.
- Membuat program C++ sederhana.
- Menggunakan `#include <iostream>`.
- Memahami fungsi `main()`.
- Menampilkan output menggunakan `std::cout`.
- Menerima input menggunakan `std::cin`.
- Membuat variable sederhana.
- Mengenal beberapa tipe data dasar.
- Menulis komentar.
- Memahami penggunaan `;`.
- Memahami konsep compile dan run.
- Membaca error sederhana dari compiler.

> **Catatan:** Pada pertemuan ini kita belum membahas Object-Oriented Programming, Array, Pointer, Linked List, dan Struktur Data. Semua materi tersebut akan dipelajari setelah fundamental C++ cukup kuat.

---

# 1. Apa Itu C++?

**C++** adalah bahasa pemrograman general-purpose yang digunakan untuk membuat berbagai macam aplikasi.

C++ dikembangkan dari bahasa C dan tetap mempertahankan banyak konsep dasar yang ada di C.

C++ kemudian menambahkan banyak kemampuan baru, salah satunya adalah **Object-Oriented Programming (OOP)**.

Secara sederhana:

```text
C
│
├── Variable
├── Data Type
├── Function
├── Pointer
├── Struct
└── Procedural Programming
        │
        ▼
       C++
        │
        ├── Class
        ├── Object
        ├── Reference
        ├── Template
        ├── STL
        └── Object-Oriented Programming
```

---

# 2. Kenapa Belajar C++?

C++ digunakan pada banyak bidang, misalnya:

- Software Development
- Game Development
- Desktop Application
- System Programming
- Embedded System
- Competitive Programming
- Data Structure
- Algorithm
- Performance-critical Application

Salah satu alasan C++ sering digunakan untuk mempelajari **Struktur Data dan Algoritma** adalah karena bahasa ini memberikan kontrol yang cukup dekat dengan cara kerja komputer, tetapi juga menyediakan fitur tingkat tinggi untuk membuat program yang lebih terstruktur.

---

# 3. Hubungan C dan C++

C dan C++ memiliki hubungan yang sangat dekat.

Jika sebelumnya sudah belajar C, beberapa konsep akan terasa familiar.

Contoh variable:

### C

```c
int umur = 20;
```

### C++

```cpp
int umur = 20;
```

Konsep dasarnya masih sama.

Namun cara melakukan input dan output dapat berbeda.

### C

```c
printf("Hello World");
```

### C++

```cpp
std::cout << "Hello World";
```

Jadi belajar C sebelumnya bukan sesuatu yang sia-sia.

Justru konsep C seperti:

- Variable
- Tipe data
- Operator
- Function
- Pointer
- Memory

akan menjadi fondasi yang berguna ketika mempelajari C++.

---

# 4. C++ dan Struktur Data

C++ yang dipelajari dalam repository ini akan menjadi **pondasi** sebelum masuk ke repository Struktur Data.

Alur belajarnya:

```text
Fundamental C++
       │
       ▼
Function & Reference
       │
       ▼
Object-Oriented Programming
       │
       ▼
STL
       │
       ▼
Data Structure
       │
       ├── Array
       ├── Linked List
       ├── Stack
       ├── Queue
       ├── Tree
       └── Graph
```

Dengan begitu, ketika masuk ke Struktur Data, kita tidak lagi sibuk memikirkan syntax dasar C++.

Kita bisa lebih fokus pada **logika dan struktur datanya**.

---

# 5. Program C++ Pertama

Program paling sederhana:

```cpp
#include <iostream>

int main()
{
    std::cout << "Hello World";

    return 0;
}
```

Output:

```text
Hello World
```

Walaupun program ini sangat pendek, terdapat beberapa konsep penting di dalamnya.

```text
#include <iostream>
        │
        └── Library

int main()
    │
    └── Titik awal program

std::cout
    │
    └── Menampilkan output

return 0
    │
    └── Program selesai dengan normal
```

---

# 6. Memahami Struktur Program

Mari kita lihat kembali:

```cpp
#include <iostream>

int main()
{
    std::cout << "Hello World";

    return 0;
}
```

Secara sederhana program tersebut dapat dibaca seperti:

```text
1. Siapkan library yang diperlukan.
2. Mulai program dari main().
3. Tampilkan "Hello World".
4. Selesaikan program.
```

---

# 7. Header dan `#include`

Baris:

```cpp
#include <iostream>
```

digunakan untuk memasukkan fasilitas dari library `iostream` ke dalam program.

`iostream` berasal dari:

```text
Input / Output Stream
```

Library ini menyediakan fasilitas yang umum digunakan untuk input dan output, seperti:

```cpp
std::cout
std::cin
```

Tanpa memahami library secara mendalam terlebih dahulu, cukup ingat:

> Jika kita ingin menggunakan `std::cout` dan `std::cin`, kita membutuhkan `<iostream>`.

Contoh:

```cpp
#include <iostream>

int main()
{
    std::cout << "Belajar C++";

    return 0;
}
```

---

# 8. Fungsi `main()`

Bagian:

```cpp
int main()
{
}
```

merupakan fungsi utama program.

Ketika program dijalankan, eksekusi dimulai dari `main()`.

Contoh:

```cpp
#include <iostream>

int main()
{
    std::cout << "Program dimulai";

    return 0;
}
```

Alurnya:

```text
Program dijalankan
       ↓
    main()
       ↓
std::cout dijalankan
       ↓
  return 0
       ↓
Program selesai
```

## Kenapa ada `int`?

`int` menunjukkan bahwa fungsi `main()` mengembalikan nilai berupa integer.

Contoh:

```cpp
int main()
```

dan pada akhir:

```cpp
return 0;
```

Angka `0` secara umum menunjukkan bahwa program selesai dengan sukses.

---

# 9. Output dengan `std::cout`

Untuk menampilkan informasi ke terminal, kita dapat menggunakan:

```cpp
std::cout
```

Contoh:

```cpp
#include <iostream>

int main()
{
    std::cout << "Halo, C++!";

    return 0;
}
```

Output:

```text
Halo, C++!
```

## Operator `<<`

Pada:

```cpp
std::cout << "Halo";
```

simbol:

```text
<<
```

digunakan untuk mengirim data ke output stream.

Contoh:

```cpp
std::cout << "Nama: Ilham";
```

Kita juga dapat menggabungkan beberapa output:

```cpp
std::cout << "Nama: " << "Ilham";
```

Output:

```text
Nama: Ilham
```

---

# 10. Baris Baru: `\n` dan `std::endl`

Ada dua cara umum untuk membuat baris baru.

## Menggunakan `\n`

```cpp
std::cout << "Baris pertama\n";
std::cout << "Baris kedua\n";
```

Output:

```text
Baris pertama
Baris kedua
```

## Menggunakan `std::endl`

```cpp
std::cout << "Baris pertama" << std::endl;
std::cout << "Baris kedua" << std::endl;
```

Output:

```text
Baris pertama
Baris kedua
```

Untuk tahap awal, keduanya boleh digunakan.

Namun perlu diketahui bahwa `std::endl` tidak hanya membuat baris baru; ia juga melakukan flush terhadap output stream. Untuk output biasa, `\n` sering cukup.

---

# 11. Input dengan `std::cin`

Jika `std::cout` digunakan untuk output, maka `std::cin` digunakan untuk menerima input dari pengguna.

Contoh:

```cpp
#include <iostream>

int main()
{
    int umur;

    std::cout << "Masukkan umur: ";
    std::cin >> umur;

    std::cout << "Umur kamu: " << umur;

    return 0;
}
```

Contoh ketika dijalankan:

```text
Masukkan umur: 20
Umur kamu: 20
```

Operator:

```text
>>
```

digunakan untuk mengambil input dari keyboard dan menyimpannya ke variable.

---

# 12. Variable

Variable adalah tempat untuk menyimpan sebuah nilai yang dapat digunakan oleh program.

Contoh:

```cpp
int umur = 20;
```

Kita dapat membacanya sebagai:

```text
int
 ↓
Tipe data

umur
 ↓
Nama variable

20
 ↓
Nilai
```

Contoh lain:

```cpp
double tinggi = 170.5;
char grade = 'A';
```

Variable dapat digunakan kembali:

```cpp
int umur = 20;

std::cout << umur;
```

Output:

```text
20
```

Nilai variable juga dapat berubah:

```cpp
int umur = 20;

umur = 21;

std::cout << umur;
```

Output:

```text
21
```

---

# 13. Tipe Data Dasar

C++ menyediakan berbagai tipe data.

Beberapa yang akan sering digunakan:

| Tipe | Kegunaan | Contoh |
|---|---|---|
| `int` | Bilangan bulat | `20` |
| `float` | Bilangan pecahan | `3.14f` |
| `double` | Bilangan pecahan dengan presisi lebih tinggi | `3.14159` |
| `char` | Satu karakter | `'A'` |
| `bool` | Nilai benar/salah | `true` |
| `std::string` | Teks | `"Ilham"` |

Untuk menggunakan `std::string`, kita dapat menyertakan:

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

---

# 14. Perbedaan `'A'` dan `"A"`

Ini penting untuk pemula.

```cpp
'A'
```

adalah satu karakter (`char`).

Sedangkan:

```cpp
"A"
```

adalah string.

Contoh:

```cpp
char grade = 'A';
std::string nama = "Ilham";
```

Perhatikan:

```text
'A'       → char
"Ilham"   → string
```

---

# 15. Aturan Penamaan Variable

Nama variable sebaiknya dibuat jelas.

Contoh yang baik:

```cpp
int umur;
std::string nama;
double nilaiUjian;
```

Contoh yang kurang jelas:

```cpp
int x;
int a;
int data1;
```

Bukan berarti nama tersebut selalu salah, tetapi nama yang deskriptif lebih mudah dibaca.

## Aturan dasar

Nama variable:

- Tidak boleh diawali angka.
- Tidak boleh menggunakan spasi.
- Tidak boleh menggunakan keyword C++.
- Dapat menggunakan huruf.
- Dapat menggunakan angka setelah karakter pertama.
- Dapat menggunakan `_`.

Contoh valid:

```cpp
int umur;
int umur2;
int nilai_akhir;
```

Contoh tidak valid:

```cpp
int 2umur;
int nilai akhir;
```

---

# 16. Komentar

Komentar digunakan untuk memberikan catatan pada source code.

Compiler tidak menjalankan komentar sebagai instruksi program.

## Single-line comment

```cpp
// Ini adalah komentar
```

Contoh:

```cpp
int umur = 20; // Menyimpan umur
```

## Multi-line comment

```cpp
/*
    Ini adalah komentar
    yang terdiri dari
    beberapa baris.
*/
```

Komentar berguna untuk:

- Menjelaskan kode.
- Memberikan catatan.
- Membantu membaca source code.
- Mendokumentasikan bagian tertentu.

Namun jangan membuat komentar untuk hal yang sudah sangat jelas.

---

# 17. Case Sensitive

C++ bersifat **case-sensitive**.

Artinya:

```text
nama
Nama
NAMA
```

dianggap sebagai nama yang berbeda.

Contoh:

```cpp
int umur = 20;

std::cout << umur;
```

Benar.

Sedangkan:

```cpp
std::cout << Umur;
```

akan menghasilkan error karena `Umur` berbeda dengan `umur`.

Hal yang sama berlaku untuk:

```text
main
Main
MAIN
```

Yang benar untuk fungsi utama adalah:

```cpp
int main()
```

---

# 18. Statement dan Semicolon

Sebagian besar statement dalam C++ diakhiri dengan:

```text
;
```

Contoh:

```cpp
int umur = 20;
```

dan:

```cpp
std::cout << umur;
```

Jika lupa:

```cpp
int umur = 20
```

compiler dapat menghasilkan error.

Jadi biasakan memperhatikan:

```cpp
;
```

di akhir statement.

---

# 19. Compile dan Run

Source code C++ biasanya menggunakan extension:

```text
.cpp
```

Contoh:

```text
hello_world.cpp
```

Source code tersebut belum langsung menjadi program executable.

Secara sederhana:

```text
hello_world.cpp
      │
      ▼
   Compiler
      │
      ▼
Executable
      │
      ▼
Program berjalan
```

---

# 20. Apa Itu Compiler?

**Compiler** adalah program yang menerjemahkan source code menjadi bentuk yang dapat dijalankan komputer.

Salah satu compiler yang umum digunakan untuk C++ adalah:

```text
G++
```

yang biasanya merupakan bagian dari GCC (GNU Compiler Collection).

Untuk mengecek apakah `g++` tersedia:

```bash
g++ --version
```

Jika berhasil, terminal akan menampilkan informasi versi compiler.

---

# 21. Compile Program C++

Misalnya kita mempunyai:

```text
hello_world.cpp
```

Kita dapat melakukan compile dengan:

```bash
g++ hello_world.cpp -o hello_world
```

Penjelasan:

```text
g++
 ↓
Compiler C++

hello_world.cpp
 ↓
Source code

-o hello_world
 ↓
Nama executable
```

---

# 22. Menjalankan Program

Setelah berhasil di-compile:

## Windows

```bash
hello_world.exe
```

## Linux / macOS

```bash
./hello_world
```

---

# 23. Error Dasar yang Sering Terjadi

Error adalah bagian normal dari proses belajar programming.

Jangan langsung takut ketika compiler menampilkan error.

Biasakan membaca:

```text
error
line
file
message
```

---

## Error 1 — Lupa `;`

Salah:

```cpp
int umur = 20
```

Benar:

```cpp
int umur = 20;
```

---

## Error 2 — Salah penulisan `main`

Salah:

```cpp
int Main()
```

Benar:

```cpp
int main()
```

---

## Error 3 — Variable belum dibuat

Salah:

```cpp
std::cout << umur;
```

jika `umur` belum dideklarasikan.

Benar:

```cpp
int umur = 20;

std::cout << umur;
```

---

## Error 4 — Lupa library

Jika menggunakan:

```cpp
std::cout
```

pastikan terdapat:

```cpp
#include <iostream>
```

---

# 24. Perbedaan Dasar C dan C++

Karena C++ memiliki hubungan dekat dengan C, mari lihat perbedaan sederhana.

## Output

### C

```c
printf("Hello World");
```

### C++

```cpp
std::cout << "Hello World";
```

---

## Input

### C

```c
int umur;

scanf("%d", &umur);
```

### C++

```cpp
int umur;

std::cin >> umur;
```

---

## String

C sering menggunakan array karakter:

```c
char nama[50];
```

C++ menyediakan:

```cpp
std::string nama;
```

C++ juga tetap dapat menggunakan array karakter, tetapi `std::string` biasanya lebih nyaman untuk operasi string sehari-hari.

---

# 25. Mini Challenge

Setelah membaca materi, jangan langsung lanjut.

Coba kerjakan beberapa challenge berikut.

---

## Challenge 01 — Hello C++

Buat program yang menghasilkan:

```text
================================
       BELAJAR C++
================================

Hello World!
Saya sedang belajar C++.

================================
```

Gunakan:

- `#include <iostream>`
- `std::cout`

---

## Challenge 02 — Biodata

Buat program yang menampilkan:

```text
================================
        BIODATA MAHASISWA
================================

Nama     : ...
NIM      : ...
Jurusan  : ...
Semester : ...

================================
```

Gunakan variable untuk menyimpan data.

Contoh:

```cpp
std::string nama = "...";
int semester = 1;
```

---

## Challenge 03 — Input Biodata

Buat program yang meminta:

```text
Nama:
Umur:
Jurusan:
```

Kemudian tampilkan kembali data tersebut.

---

## Challenge 04 — Kalkulator Sederhana

Buat program yang menerima dua angka.

Contoh:

```text
Angka pertama : 10
Angka kedua   : 5
```

Kemudian tampilkan:

```text
Penjumlahan : 15
Pengurangan : 5
Perkalian   : 50
```

Pembagian dapat ditambahkan sebagai latihan.

---

# 26. Hal yang Perlu Dipahami, Bukan Dihafalkan

Jangan hanya menghafalkan:

```cpp
#include <iostream>
int main()
std::cout
std::cin
return 0
```

Yang lebih penting adalah memahami fungsi masing-masing.

```text
#include <iostream>
        │
        └── Menyediakan fasilitas input/output

main()
  │
  └── Titik awal program

std::cout
  │
  └── Output

std::cin
  │
  └── Input

return 0
  │
  └── Menandakan program selesai normal
```

---

# 27. Ringkasan Materi

Pada pertemuan pertama kita telah mempelajari:

### Fundamental

- C++
- Hubungan C dan C++
- Compiler
- Source code
- Executable

### Struktur Program

- `#include`
- `<iostream>`
- `main()`
- `return 0`

### Input / Output

- `std::cout`
- `std::cin`
- `\n`
- `std::endl`

### Data

- Variable
- `int`
- `float`
- `double`
- `char`
- `bool`
- `std::string`

### Syntax

- Statement
- Semicolon `;`
- Comment
- Case-sensitive
- Naming convention

---

# 28. Checklist Pemahaman

Sebelum lanjut ke Pertemuan 02, pastikan:

- [ ] Saya tahu apa itu C++.
- [ ] Saya tahu hubungan C dan C++.
- [ ] Saya tahu apa fungsi `#include <iostream>`.
- [ ] Saya tahu fungsi `main()`.
- [ ] Saya tahu fungsi `std::cout`.
- [ ] Saya tahu fungsi `std::cin`.
- [ ] Saya memahami `\n` dan `std::endl`.
- [ ] Saya dapat membuat variable.
- [ ] Saya mengenal tipe data dasar.
- [ ] Saya memahami perbedaan `char` dan `string`.
- [ ] Saya memahami case-sensitive.
- [ ] Saya memahami penggunaan `;`.
- [ ] Saya dapat membuat file `.cpp`.
- [ ] Saya dapat melakukan compile.
- [ ] Saya dapat menjalankan program.
- [ ] Saya dapat membaca error sederhana.
- [ ] Saya sudah mencoba minimal satu challenge.

---

# 29. Kesimpulan

C++ bukan sekadar bahasa pemrograman baru.

Karena sebelumnya sudah mengenal C, kita dapat melihat bahwa banyak konsep dasar C masih digunakan di C++.

Perbedaan besar akan mulai terasa ketika kita masuk ke fitur-fitur C++ seperti:

```text
Reference
   ↓
Class
   ↓
Object
   ↓
Constructor
   ↓
Encapsulation
   ↓
Inheritance
   ↓
Polymorphism
   ↓
Template
   ↓
STL
```

Namun sebelum sampai ke sana, fundamental harus benar-benar dipahami.

Tujuan dari pertemuan pertama bukan membuat program yang rumit.

Tujuannya adalah:

> **Memahami bagaimana sebuah program C++ dibuat, dikompilasi, dan dijalankan.**

---

# 🚀 Next Step

Jika seluruh checklist sudah dipahami, lanjut ke:

## Pertemuan 02 — Variable, Data Type & Input

Kita akan membahas variable dan tipe data lebih dalam, termasuk:

```text
Variable
    ↓
Data Type
    ↓
Constant
    ↓
Input
    ↓
Output
    ↓
Type Conversion
```

Setelah fundamental C++ selesai, pembelajaran akan dilanjutkan ke konsep yang menjadi kekuatan C++.

```text
Fundamental
     ↓
Function
     ↓
Reference
     ↓
OOP
     ↓
STL
     ↓
Data Structure
     ↓
Algorithm
     ↓
Project
```

---

## 📝 Catatan Belajar

> Jangan takut error.

> Jangan hanya copy-paste source code.

> Ketik ulang, jalankan, ubah, dan lihat apa yang terjadi.

Proses belajar programming:

```text
Belajar
  ↓
Mencoba
  ↓
Error
  ↓
Mencari penyebab
  ↓
Memperbaiki
  ↓
Memahami
  ↓
Membangun sendiri
```

**Happy Coding! 🚀**
