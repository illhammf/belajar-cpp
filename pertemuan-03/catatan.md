# Pertemuan 03 — Operator & Expression

> Pada pertemuan ini kita akan mempelajari operator yang digunakan untuk melakukan perhitungan, memberikan nilai, membandingkan data, dan membuat logika sederhana dalam C++.

---

## 🎯 Tujuan Pembelajaran

Setelah menyelesaikan pertemuan ini, kita diharapkan mampu:

* Memahami arithmetic operator.
* Memahami assignment operator.
* Memahami comparison operator.
* Memahami logical operator.
* Memahami increment dan decrement.
* Memahami expression.
* Menggunakan operator dalam program sederhana.
* Memahami perbedaan `=` dan `==`.

---

# 1. Apa Itu Operator?

Operator adalah simbol yang digunakan untuk melakukan suatu operasi terhadap data.

Contoh:

```cpp
int hasil = 10 + 5;
```

Pada kode tersebut:

```text
10
 ↓
Operand

+
 ↓
Operator

5
 ↓
Operand
```

Hasilnya:

```text
15
```

Secara sederhana:

```text
Operand + Operator + Operand
```

---

# 2. Arithmetic Operator

Arithmetic operator digunakan untuk melakukan operasi matematika.

| Operator | Fungsi         | Contoh   |
| -------- | -------------- | -------- |
| `+`      | Penjumlahan    | `10 + 5` |
| `-`      | Pengurangan    | `10 - 5` |
| `*`      | Perkalian      | `10 * 5` |
| `/`      | Pembagian      | `10 / 5` |
| `%`      | Sisa pembagian | `10 % 3` |

Contoh:

```cpp
int a = 10;
int b = 3;

cout << a + b << endl;
cout << a - b << endl;
cout << a * b << endl;
cout << a / b << endl;
cout << a % b << endl;
```

Output:

```text
13
7
30
3
1
```

---

# 3. Operator Penjumlahan `+`

Digunakan untuk menjumlahkan dua nilai.

```cpp
int a = 10;
int b = 5;

int hasil = a + b;

cout << hasil;
```

Output:

```text
15
```

---

# 4. Operator Pengurangan `-`

Digunakan untuk mengurangi nilai.

```cpp
int a = 10;
int b = 5;

int hasil = a - b;

cout << hasil;
```

Output:

```text
5
```

---

# 5. Operator Perkalian `*`

Digunakan untuk mengalikan nilai.

```cpp
int a = 10;
int b = 5;

int hasil = a * b;

cout << hasil;
```

Output:

```text
50
```

---

# 6. Operator Pembagian `/`

Digunakan untuk membagi nilai.

```cpp
int a = 10;
int b = 5;

int hasil = a / b;

cout << hasil;
```

Output:

```text
2
```

Perhatikan tipe data yang digunakan.

Jika:

```cpp
int a = 10;
int b = 3;
```

maka:

```cpp
cout << a / b;
```

menghasilkan:

```text
3
```

bukan:

```text
3.33333
```

Karena kedua operand bertipe `int`.

Jika ingin mendapatkan hasil desimal:

```cpp
double hasil = static_cast<double>(a) / b;
```

---

# 7. Operator Sisa Pembagian `%`

Operator `%` digunakan untuk mendapatkan sisa dari pembagian.

Contoh:

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

Contoh lain:

```cpp
int hasil = 10 % 2;
```

Hasil:

```text
0
```

Operator `%` sangat berguna untuk mengecek bilangan genap dan ganjil.

Contoh:

```cpp
int angka = 10;

cout << angka % 2;
```

Output:

```text
0
```

Artinya `10` habis dibagi `2`.

---

# 8. Assignment Operator

Assignment operator digunakan untuk memberikan nilai kepada variable.

Operator paling dasar adalah:

```cpp
=
```

Contoh:

```cpp
int umur = 20;
```

Artinya variable `umur` diberikan nilai `20`.

---

## Assignment dengan Operasi

C++ juga menyediakan bentuk singkat untuk melakukan operasi sekaligus assignment.

| Operator | Arti                     |
| -------- | ------------------------ |
| `=`      | Memberikan nilai         |
| `+=`     | Menambahkan nilai        |
| `-=`     | Mengurangi nilai         |
| `*=`     | Mengalikan nilai         |
| `/=`     | Membagi nilai            |
| `%=`     | Menyimpan sisa pembagian |

Contoh:

```cpp
int angka = 10;

angka += 5;
```

Sama dengan:

```cpp
angka = angka + 5;
```

Nilai akhirnya:

```text
15
```

---

# 9. Contoh Assignment Operator

```cpp
int angka = 10;

angka += 5;
cout << angka << endl;

angka -= 3;
cout << angka << endl;

angka *= 2;
cout << angka << endl;

angka /= 4;
cout << angka << endl;
```

Perubahan nilainya:

```text
10
 ↓
+5
 ↓
15
 ↓
-3
 ↓
12
 ↓
×2
 ↓
24
 ↓
÷4
 ↓
6
```

---

# 10. Comparison Operator

Comparison operator digunakan untuk membandingkan dua nilai.

Hasil perbandingan adalah:

```text
true
```

atau:

```text
false
```

Operator yang tersedia:

| Operator | Arti                         |
| -------- | ---------------------------- |
| `>`      | Lebih besar                  |
| `<`      | Lebih kecil                  |
| `>=`     | Lebih besar atau sama dengan |
| `<=`     | Lebih kecil atau sama dengan |
| `==`     | Sama dengan                  |
| `!=`     | Tidak sama dengan            |

Contoh:

```cpp
int a = 10;
int b = 5;

cout << (a > b);
```

Hasil:

```text
1
```

Karena `10` memang lebih besar dari `5`.

---

# 11. Perbedaan `=` dan `==`

Ini adalah salah satu hal yang sangat penting dalam C++.

## `=`

Digunakan untuk memberikan nilai.

```cpp
int umur = 20;
```

Artinya:

```text
umur diberi nilai 20
```

## `==`

Digunakan untuk membandingkan.

```cpp
umur == 20
```

Artinya:

```text
Apakah umur sama dengan 20?
```

Jadi:

```text
=
Assignment

==
Comparison
```

Jangan sampai tertukar.

---

# 12. Contoh Comparison

```cpp
int umur = 20;

cout << (umur > 17) << endl;
cout << (umur < 17) << endl;
cout << (umur >= 20) << endl;
cout << (umur <= 20) << endl;
cout << (umur == 20) << endl;
cout << (umur != 20) << endl;
```

Hasil:

```text
1
0
1
1
1
0
```

Secara konsep:

```text
20 > 17   → true
20 < 17   → false
20 >= 20  → true
20 <= 20  → true
20 == 20  → true
20 != 20  → false
```

---

# 13. Logical Operator

Logical operator digunakan untuk menggabungkan atau membalik kondisi.

Ada tiga operator utama:

| Operator | Nama | Arti             |    |      |
| -------- | ---- | ---------------- | -- | ---- |
| `&&`     | AND  | Dan              |    |      |
| `        |      | `                | OR | Atau |
| `!`      | NOT  | Membalik kondisi |    |      |

---

# 14. Logical AND `&&`

`&&` akan menghasilkan `true` jika **semua kondisi benar**.

Contoh:

```cpp
int umur = 20;

cout << (umur >= 17 && umur <= 30);
```

Kondisinya:

```text
umur >= 17
    ↓
  true

umur <= 30
    ↓
  true
```

Karena keduanya benar:

```text
true && true
     ↓
   true
```

---

# 15. Logical OR `||`

`||` menghasilkan `true` jika **minimal salah satu kondisi benar**.

Contoh:

```cpp
int umur = 20;

cout << (umur < 17 || umur >= 20);
```

Kondisinya:

```text
umur < 17
   ↓
 false

umur >= 20
   ↓
 true
```

Maka:

```text
false || true
      ↓
    true
```

---

# 16. Logical NOT `!`

`!` digunakan untuk membalik nilai boolean.

Contoh:

```cpp
bool lulus = true;

cout << !lulus;
```

Hasil:

```text
0
```

Karena:

```text
true
 ↓
!
 ↓
false
```

Sebaliknya:

```cpp
bool lulus = false;

cout << !lulus;
```

hasilnya:

```text
1
```

---

# 17. Increment `++`

Increment digunakan untuk menambahkan nilai sebesar `1`.

Contoh:

```cpp
int angka = 10;

angka++;

cout << angka;
```

Output:

```text
11
```

Sama seperti:

```cpp
angka = angka + 1;
```

---

# 18. Decrement `--`

Decrement digunakan untuk mengurangi nilai sebesar `1`.

```cpp
int angka = 10;

angka--;

cout << angka;
```

Output:

```text
9
```

Sama seperti:

```cpp
angka = angka - 1;
```

---

# 19. Prefix dan Postfix

Increment dan decrement memiliki dua bentuk.

### Postfix

```cpp
angka++;
angka--;
```

### Prefix

```cpp
++angka;
--angka;
```

Untuk perubahan nilai sederhana, keduanya sama-sama mengubah nilai sebesar `1`.

Perbedaannya akan terasa ketika operator digunakan sebagai bagian dari sebuah expression.

Contoh:

```cpp
int angka = 10;

int hasil = angka++;
```

Setelah kode tersebut:

```text
hasil = 10
angka = 11
```

Sedangkan:

```cpp
int angka = 10;

int hasil = ++angka;
```

Hasil:

```text
hasil = 11
angka = 11
```

Intinya:

```text
angka++
→ gunakan nilai terlebih dahulu, kemudian tambah 1

++angka
→ tambah 1 terlebih dahulu, kemudian gunakan nilainya
```

---

# 20. Apa Itu Expression?

Expression adalah kombinasi dari variable, nilai, operator, atau fungsi yang menghasilkan sebuah nilai.

Contoh:

```cpp
10 + 5
```

merupakan expression.

Contoh:

```cpp
int hasil = 10 + 5;
```

Expression-nya:

```cpp
10 + 5
```

Hasilnya:

```text
15
```

---

# 21. Expression dengan Variable

Expression juga dapat menggunakan variable.

```cpp
int a = 10;
int b = 5;

int hasil = a + b;
```

Expression:

```cpp
a + b
```

menghasilkan:

```text
15
```

Contoh yang lebih kompleks:

```cpp
int a = 10;
int b = 5;

int hasil = (a + b) * 2;
```

Perhitungannya:

```text
(10 + 5) × 2
      ↓
     15 × 2
      ↓
      30
```

---

# 22. Urutan Operasi

C++ mengikuti aturan prioritas operator.

Contoh:

```cpp
int hasil = 10 + 5 * 2;
```

Hasilnya:

```text
20
```

Bukan:

```text
30
```

Karena perkalian dilakukan terlebih dahulu:

```text
5 × 2 = 10

10 + 10 = 20
```

Jika ingin menentukan urutan sendiri, gunakan tanda kurung:

```cpp
int hasil = (10 + 5) * 2;
```

Hasil:

```text
30
```

Untuk tahap awal, biasakan menggunakan tanda kurung jika expression mulai kompleks agar lebih mudah dibaca.

---

# 23. Contoh Program Operator

Sekarang kita gabungkan beberapa operator.

```cpp
#include <iostream>
using namespace std;

int main()
{
    int a;
    int b;

    cout << "Masukkan angka pertama: ";
    cin >> a;

    cout << "Masukkan angka kedua: ";
    cin >> b;

    cout << endl;
    cout << "=== HASIL ===" << endl;

    cout << "Penjumlahan : " << a + b << endl;
    cout << "Pengurangan : " << a - b << endl;
    cout << "Perkalian   : " << a * b << endl;
    cout << "Pembagian   : " << a / b << endl;
    cout << "Sisa        : " << a % b << endl;

    return 0;
}
```

Contoh:

```text
Masukkan angka pertama: 10
Masukkan angka kedua: 3

=== HASIL ===
Penjumlahan : 13
Pengurangan : 7
Perkalian   : 30
Pembagian   : 3
Sisa        : 1
```

---

# 24. Contoh Program Comparison

Kita juga dapat membandingkan input pengguna.

```cpp
#include <iostream>
using namespace std;

int main()
{
    int umur;

    cout << "Masukkan umur: ";
    cin >> umur;

    cout << "Umur >= 17 : " << (umur >= 17) << endl;
    cout << "Umur < 17  : " << (umur < 17) << endl;
    cout << "Umur == 20 : " << (umur == 20) << endl;

    return 0;
}
```

Jika memasukkan:

```text
20
```

hasilnya:

```text
Umur >= 17 : 1
Umur < 17  : 0
Umur == 20 : 1
```

---

# 🧪 Mini Challenge

## Challenge 01 — Kalkulator Sederhana

Buat program yang meminta dua angka:

```text
Angka pertama:
Angka kedua:
```

Kemudian tampilkan:

```text
Penjumlahan:
Pengurangan:
Perkalian:
Pembagian:
Sisa:
```

---

## Challenge 02 — Cek Genap atau Ganjil

Buat program yang menerima satu angka.

Gunakan operator:

```cpp
%
```

Petunjuk:

```text
angka % 2
```

Jika hasilnya:

```text
0
```

maka angka tersebut genap.

Jika bukan `0`, maka angka tersebut ganjil.

> Pada challenge ini kita belum menggunakan `if`. Coba pahami dulu bagaimana operator `%` bekerja.

---

## Challenge 03 — Perbandingan Nilai

Buat program yang meminta dua nilai:

```text
Nilai pertama:
Nilai kedua:
```

Kemudian tampilkan hasil perbandingan:

```text
Nilai pertama > nilai kedua
Nilai pertama < nilai kedua
Nilai pertama == nilai kedua
```

---

## Challenge 04 — Operator Assignment

Buat variable:

```cpp
int angka = 10;
```

Kemudian gunakan:

```cpp
+=
-=
*=
/=
```

Tampilkan nilai `angka` setelah setiap operasi.

---

# 💡 Tips Belajar

Operator akan menjadi fondasi penting untuk materi berikutnya.

Jangan hanya menghafalkan simbolnya.

Pahami maksudnya:

```text
+   → menghitung
-   → menghitung
*   → menghitung
/   → menghitung
%   → mencari sisa

=   → memberikan nilai

>   → membandingkan
<   → membandingkan
==  → membandingkan
!=  → membandingkan

&&  → semua kondisi harus benar
||  → salah satu kondisi benar
!   → membalik kondisi

++  → tambah 1
--  → kurang 1
```

---

# ✅ Checklist

* [ ] Memahami operator.
* [ ] Memahami operand.
* [ ] Memahami arithmetic operator.
* [ ] Memahami assignment operator.
* [ ] Memahami `+=`, `-=`, `*=`, `/=`, `%=`.
* [ ] Memahami comparison operator.
* [ ] Memahami perbedaan `=` dan `==`.
* [ ] Memahami logical operator.
* [ ] Memahami `&&`.
* [ ] Memahami `||`.
* [ ] Memahami `!`.
* [ ] Memahami `++`.
* [ ] Memahami `--`.
* [ ] Memahami prefix dan postfix.
* [ ] Memahami expression.
* [ ] Memahami dasar prioritas operator.

---

# 🧠 Kesimpulan

Pada pertemuan sebelumnya kita belajar menyimpan data menggunakan variable.

Sekarang kita sudah belajar bagaimana data tersebut dapat diproses:

```text
Variable
    ↓
Operator
    ↓
Expression
    ↓
Hasil
```

Contohnya:

```cpp
int a = 10;
int b = 5;

int hasil = (a + b) * 2;
```

Alurnya:

```text
a + b
 ↓
10 + 5
 ↓
15
 ↓
15 × 2
 ↓
30
```

Operator adalah salah satu fondasi utama dalam pemrograman karena hampir semua program membutuhkan operasi terhadap data.

---

# 🚀 Next Step

## Pertemuan 04 — Conditional Statement

Pada pertemuan berikutnya kita akan mulai membuat program yang **bisa mengambil keputusan**.

Materi:

```text
if
 ↓
else
 ↓
else if
 ↓
nested if
 ↓
conditional logic
```

Contohnya nanti program dapat melakukan:

```text
Jika nilai >= 75
        ↓
     LULUS

Jika nilai < 75
        ↓
     TIDAK LULUS
```

Di sinilah operator perbandingan dan logical operator yang kita pelajari pada pertemuan ini mulai benar-benar terasa kegunaannya.

---

**Happy Coding! 🚀**
