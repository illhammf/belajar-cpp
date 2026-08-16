# Pertemuan 04 — Conditional Statement

> Pada pertemuan ini kita mulai belajar membuat program yang dapat mengambil keputusan berdasarkan suatu kondisi.

---

## 🎯 Tujuan Pembelajaran

Setelah menyelesaikan pertemuan ini, kita diharapkan mampu:

- Memahami konsep conditional statement.
- Menggunakan `if`.
- Menggunakan `if - else`.
- Menggunakan `if - else if - else`.
- Memahami nested `if`.
- Menggabungkan kondisi menggunakan logical operator.
- Memahami penggunaan `&&`, `||`, dan `!`.
- Mengenal ternary operator.
- Membuat program sederhana menggunakan conditional statement.

---

# 1. Apa Itu Conditional Statement?

Conditional statement adalah pernyataan yang digunakan untuk membuat program mengambil keputusan berdasarkan suatu kondisi.

Contoh sederhana:

    if (umur >= 17)
    {
        cout << "Sudah cukup umur";
    }

Program akan mengecek:

    Apakah umur >= 17?
            ↓
         ┌───────┐
         │       │
        true   false
         ↓       ↓
      Jalankan  Lewati
       kode      kode

Jika kondisi bernilai `true`, kode di dalam `{}` dijalankan.

Jika kondisi bernilai `false`, kode tersebut tidak dijalankan.

---

# 2. `if`

`if` merupakan conditional statement paling dasar dalam C++.

Strukturnya:

    if (kondisi)
    {
        // kode yang dijalankan
        // jika kondisi benar
    }

Contoh:

    #include <iostream>
    using namespace std;

    int main()
    {
        int umur = 20;

        if (umur >= 17)
        {
            cout << "Sudah cukup umur" << endl;
        }

        return 0;
    }

Output:

    Sudah cukup umur

Karena:

    20 >= 17

bernilai `true`.

---

# 3. Kondisi dalam `if`

Kondisi biasanya menggunakan comparison operator yang sudah kita pelajari pada Pertemuan 03.

Contoh:

    if (nilai > 75)
    {
        cout << "Nilai lebih dari 75";
    }

Kita juga dapat menggunakan:

    if (nilai >= 75)

atau:

    if (nilai == 75)

atau:

    if (nilai != 75)

Operator yang sering digunakan:

| Operator | Arti |
|---|---|
| `>` | Lebih besar |
| `<` | Lebih kecil |
| `>=` | Lebih besar atau sama |
| `<=` | Lebih kecil atau sama |
| `==` | Sama dengan |
| `!=` | Tidak sama dengan |

---

# 4. `if - else`

Bagaimana jika kita ingin menjalankan kode lain ketika kondisi `if` bernilai `false`?

Gunakan `else`.

Struktur:

    if (kondisi)
    {
        // jika kondisi true
    }
    else
    {
        // jika kondisi false
    }

Contoh:

    #include <iostream>
    using namespace std;

    int main()
    {
        int umur;

        cout << "Masukkan umur: ";
        cin >> umur;

        if (umur >= 17)
        {
            cout << "Sudah cukup umur" << endl;
        }
        else
        {
            cout << "Belum cukup umur" << endl;
        }

        return 0;
    }

Jika input:

    20

Output:

    Sudah cukup umur

Jika input:

    15

Output:

    Belum cukup umur

---

# 5. Alur `if - else`

Secara sederhana:

    Kondisi
       ↓
    Benar?
      / \
    true false
      ↓   ↓
     if  else
      ↓   ↓
    Kode A Kode B

Hanya salah satu blok yang akan dijalankan.

---

# 6. `if - else if - else`

Bagaimana jika kita memiliki lebih dari dua kemungkinan?

Gunakan:

    if
    else if
    else

Contoh:

    #include <iostream>
    using namespace std;

    int main()
    {
        int nilai;

        cout << "Masukkan nilai: ";
        cin >> nilai;

        if (nilai >= 90)
        {
            cout << "Grade A" << endl;
        }
        else if (nilai >= 80)
        {
            cout << "Grade B" << endl;
        }
        else if (nilai >= 70)
        {
            cout << "Grade C" << endl;
        }
        else
        {
            cout << "Grade D" << endl;
        }

        return 0;
    }

Jika input:

    85

Output:

    Grade B

---

# 7. Bagaimana `else if` Bekerja?

Program mengecek kondisi dari atas ke bawah.

Misalnya:

    nilai = 85

Program mengecek:

    85 >= 90
    ↓
    false

Lanjut:

    85 >= 80
    ↓
    true

Karena sudah menemukan kondisi `true`, program menjalankan:

    Grade B

Kemudian kondisi berikutnya tidak diperiksa lagi.

---

# 8. Urutan Kondisi Sangat Penting

Perhatikan kode berikut:

    if (nilai >= 70)
    {
        cout << "C";
    }
    else if (nilai >= 80)
    {
        cout << "B";
    }
    else if (nilai >= 90)
    {
        cout << "A";
    }

Kode tersebut bermasalah secara logika.

Misalnya:

    nilai = 90

Kondisi pertama:

    90 >= 70

sudah `true`.

Maka program langsung menghasilkan:

    C

Padahal seharusnya:

    A

Urutan yang lebih tepat:

    if (nilai >= 90)
    {
        cout << "A";
    }
    else if (nilai >= 80)
    {
        cout << "B";
    }
    else if (nilai >= 70)
    {
        cout << "C";
    }
    else
    {
        cout << "D";
    }

Biasakan menyusun kondisi dari batas yang paling tinggi atau paling spesifik sesuai kebutuhan program.

---

# 9. Nested `if`

Nested `if` adalah `if` yang berada di dalam `if` lainnya.

Contoh:

    if (umur >= 17)
    {
        if (memilikiKTP)
        {
            cout << "Memenuhi syarat";
        }
    }

Strukturnya:

    if pertama
       ↓
    true?
       ↓
    if kedua
       ↓
    true?
       ↓
    jalankan program

Nested `if` berguna ketika suatu kondisi hanya perlu diperiksa setelah kondisi lainnya terpenuhi.

---

# 10. Contoh Nested `if`

    #include <iostream>
    using namespace std;

    int main()
    {
        int umur;
        bool memilikiKTP;

        cout << "Masukkan umur: ";
        cin >> umur;

        cout << "Apakah memiliki KTP? (1 = Ya, 0 = Tidak): ";
        cin >> memilikiKTP;

        if (umur >= 17)
        {
            if (memilikiKTP)
            {
                cout << "Data memenuhi kondisi." << endl;
            }
        }

        return 0;
    }

Perhatikan bahwa:

    if (memilikiKTP)

hanya diperiksa jika:

    if (umur >= 17)

bernilai `true`.

---

# 11. Logical Operator dalam Conditional

Kita dapat menggabungkan beberapa kondisi menggunakan logical operator.

Tiga operator utama:

| Operator | Nama | Keterangan |
|---|---|---|
| `&&` | AND | Semua kondisi harus benar |
| `||` | OR | Salah satu kondisi benar |
| `!` | NOT | Membalik kondisi |

---

# 12. Logical AND `&&`

`&&` digunakan jika semua kondisi harus benar.

Contoh:

    if (umur >= 17 && umur <= 30)
    {
        cout << "Umur berada dalam rentang 17-30";
    }

Ada dua kondisi:

    umur >= 17

dan:

    umur <= 30

Keduanya harus `true`.

Contoh:

    umur = 20

Maka:

    20 >= 17 → true
    20 <= 30 → true

Hasil:

    true && true
         ↓
       true

---

# 13. Logical OR `||`

`||` digunakan ketika cukup salah satu kondisi yang benar.

Contoh:

    int hari = 6;

    if (hari == 6 || hari == 7)
    {
        cout << "Weekend";
    }

Artinya:

    hari == 6
       ATAU
    hari == 7

Jika:

    hari = 6

maka kondisi benar.

Jika:

    hari = 7

kondisi juga benar.

---

# 14. Logical NOT `!`

`!` digunakan untuk membalik kondisi.

Contoh:

    bool hujan = false;

    if (!hujan)
    {
        cout << "Tidak hujan";
    }

Karena:

    hujan = false

maka:

    !false
      ↓
    true

Sehingga kode di dalam `if` dijalankan.

---

# 15. Menggabungkan Comparison dan Logical Operator

Contoh:

    int nilai = 85;

    if (nilai >= 75 && nilai <= 100)
    {
        cout << "Nilai valid";
    }

Kita menggunakan:

    >=
    <=
    &&

dalam satu kondisi.

Ini menunjukkan bahwa materi Pertemuan 03 mulai digunakan dalam conditional statement.

---

# 16. Conditional dengan `bool`

Variable `bool` dapat langsung digunakan sebagai kondisi.

Contoh:

    bool login = true;

    if (login)
    {
        cout << "Selamat datang!";
    }

Karena:

    login = true

maka kode dijalankan.

Contoh lainnya:

    bool login = false;

    if (login)
    {
        cout << "Selamat datang!";
    }
    else
    {
        cout << "Silakan login terlebih dahulu.";
    }

---

# 17. Ternary Operator

C++ memiliki bentuk singkat dari `if - else`, yaitu ternary operator.

Strukturnya:

    kondisi ? nilai_jika_true : nilai_jika_false;

Contoh:

    #include <iostream>
    #include <string>
    using namespace std;

    int main()
    {
        int nilai = 80;

        string hasil = (nilai >= 75)
            ? "Lulus"
            : "Tidak Lulus";

        cout << hasil << endl;

        return 0;
    }

Output:

    Lulus

Secara konsep:

    nilai >= 75?
         ↓
       true
         ↓
      "Lulus"

Ternary cocok untuk kondisi sederhana.

Jika logikanya mulai panjang, lebih baik menggunakan `if - else`.

---

# 18. Perbandingan `if - else` dan Ternary

Dengan `if - else`:

    string hasil;

    if (nilai >= 75)
    {
        hasil = "Lulus";
    }
    else
    {
        hasil = "Tidak Lulus";
    }

Dengan ternary:

    string hasil = (nilai >= 75)
        ? "Lulus"
        : "Tidak Lulus";

Keduanya menghasilkan hasil yang sama.

---

# 19. Contoh Program Cek Nilai

Sekarang kita gabungkan input dan conditional.

    #include <iostream>
    using namespace std;

    int main()
    {
        int nilai;

        cout << "Masukkan nilai: ";
        cin >> nilai;

        if (nilai >= 75)
        {
            cout << "Lulus" << endl;
        }
        else
        {
            cout << "Tidak lulus" << endl;
        }

        return 0;
    }

Contoh:

    Masukkan nilai: 80
    Lulus

---

# 20. Contoh Program Grade

Kita dapat membuat beberapa kategori nilai.

    #include <iostream>
    using namespace std;

    int main()
    {
        int nilai;

        cout << "Masukkan nilai: ";
        cin >> nilai;

        if (nilai >= 90)
        {
            cout << "Grade A" << endl;
        }
        else if (nilai >= 80)
        {
            cout << "Grade B" << endl;
        }
        else if (nilai >= 70)
        {
            cout << "Grade C" << endl;
        }
        else if (nilai >= 60)
        {
            cout << "Grade D" << endl;
        }
        else
        {
            cout << "Grade E" << endl;
        }

        return 0;
    }

---

# 21. Validasi Input Sederhana

Conditional juga dapat digunakan untuk memeriksa apakah input berada dalam rentang tertentu.

Contoh:

    int nilai;

    cout << "Masukkan nilai: ";
    cin >> nilai;

    if (nilai >= 0 && nilai <= 100)
    {
        cout << "Nilai valid";
    }
    else
    {
        cout << "Nilai tidak valid";
    }

Dengan cara ini:

    0 sampai 100
         ↓
       Valid

    di luar rentang
         ↓
    Tidak valid

---

# 22. Program Cek Bilangan

Kita bisa menggunakan operator `%` yang dipelajari pada Pertemuan 03.

    #include <iostream>
    using namespace std;

    int main()
    {
        int angka;

        cout << "Masukkan angka: ";
        cin >> angka;

        if (angka % 2 == 0)
        {
            cout << "Bilangan genap" << endl;
        }
        else
        {
            cout << "Bilangan ganjil" << endl;
        }

        return 0;
    }

Jika input:

    10

hasil:

    Bilangan genap

Jika input:

    7

hasil:

    Bilangan ganjil

Perhatikan kondisi:

    angka % 2 == 0

Di sini kita menggunakan dua konsep sekaligus:

    %
    ↓
    Arithmetic Operator

    ==
    ↓
    Comparison Operator

Kemudian hasilnya digunakan oleh:

    if

---

# 23. Kesalahan yang Sering Terjadi

## 23.1 Salah menggunakan `=` untuk perbandingan

Jangan:

    if (nilai = 75)

Gunakan:

    if (nilai == 75)

Ingat:

    =   → assignment
    ==  → comparison

---

## 23.2 Lupa menggunakan `{}`

C++ memang mengizinkan:

    if (nilai >= 75)
        cout << "Lulus";

Namun untuk pembelajaran dan konsistensi, kita akan menggunakan:

    if (nilai >= 75)
    {
        cout << "Lulus";
    }

Ini lebih mudah dibaca dan mengurangi kesalahan ketika nanti ada beberapa statement.

---

## 23.3 Kondisi `else if` salah urutan

Jangan:

    if (nilai >= 70)
    {
        cout << "C";
    }
    else if (nilai >= 90)
    {
        cout << "A";
    }

Karena nilai `90` sudah memenuhi kondisi pertama.

Gunakan:

    if (nilai >= 90)
    {
        cout << "A";
    }
    else if (nilai >= 70)
    {
        cout << "C";
    }

---

# 🧪 Mini Challenge

## Challenge 01 — Cek Kelulusan

Buat program yang menerima nilai.

Aturan:

    Nilai >= 75
    → Lulus

    Nilai < 75
    → Tidak Lulus

---

## Challenge 02 — Cek Genap dan Ganjil

Buat program yang menerima sebuah angka.

Aturan:

    Sisa pembagian 2 = 0
    → Genap

    Selain itu
    → Ganjil

Gunakan:

    %

---

## Challenge 03 — Grade Nilai

Buat program dengan aturan:

    90 - 100 → A
    80 - 89  → B
    70 - 79  → C
    60 - 69  → D
    0  - 59  → E

Gunakan:

    if
    else if
    else

---

## Challenge 04 — Validasi Nilai

Buat program yang menerima nilai dari `0` sampai `100`.

Jika:

    0 <= nilai <= 100

tampilkan:

    Nilai valid

Jika di luar rentang:

    Nilai tidak valid

Gunakan logical operator:

    &&

---

## Challenge 05 — Rentang Umur

Buat program yang menerima umur.

Tampilkan:

    17 - 30      → Rentang A
    31 - 50      → Rentang B
    51 ke atas   → Rentang C

Gunakan:

    if
    else if
    else

---

# 💡 Tips Belajar

Jangan hanya menghafalkan bentuk:

    if (kondisi)
    {
    }
    else
    {
    }

Pahami alurnya:

    Input
      ↓
    Kondisi
      ↓
    Apakah true?
      ↓
    ┌───────────────┐
    │               │
    true          false
    │               │
    ↓               ↓
    if            else
    │               │
    └───────┬───────┘
            ↓
          Output

---

# 🔗 Hubungan dengan Pertemuan Sebelumnya

Pada Pertemuan 02 kita belajar:

    Variable
    Data Type
    Input / Output

Pada Pertemuan 03 kita belajar:

    Arithmetic Operator
    Comparison Operator
    Logical Operator
    Expression

Sekarang semuanya mulai digabungkan:

    Variable
        ↓
    Input
        ↓
    Operator
        ↓
    Condition
        ↓
    if / else
        ↓
    Output

Contoh:

    #include <iostream>
    using namespace std;

    int main()
    {
        int nilai;

        cout << "Masukkan nilai: ";
        cin >> nilai;

        if (nilai >= 75)
        {
            cout << "Lulus";
        }
        else
        {
            cout << "Tidak lulus";
        }

        return 0;
    }

Program sekarang sudah mampu **mengambil keputusan**.

---

# 🧠 Kesimpulan

Conditional statement membuat program mampu mengambil keputusan.

Konsep dasarnya:

    if
    ↓
    Jika kondisi benar

    else
    ↓
    Jika kondisi salah

    else if
    ↓
    Jika memiliki beberapa kondisi

Dengan conditional statement, program tidak lagi hanya melakukan:

    Input → Proses → Output

tetapi mulai menjadi:

    Input
      ↓
    Proses
      ↓
    Periksa kondisi
      ↓
    ┌──────────────┐
    │   Keputusan  │
    └──────────────┘
       ↓        ↓
      A          B
       ↓        ↓
    Output     Output

Ini merupakan salah satu fondasi terpenting sebelum kita belajar membuat program yang lebih kompleks.

---

# 📁 Struktur Folder Pertemuan 04

Setelah source code selesai, folder kita akan memiliki struktur:

    pertemuan-04/
    │
    ├── catatan.md
    │
    ├── 01_if.cpp
    ├── 02_if_else.cpp
    ├── 03_if_else_if.cpp
    ├── 04_nested_if.cpp
    ├── 05_logical_condition.cpp
    ├── 06_ternary_operator.cpp
    ├── 07_cek_nilai.cpp
    ├── 08_cek_umur.cpp
    ├── 09_cek_bilangan.cpp
    └── 10_sistem_kelulusan.cpp

---

# ✅ Checklist

- [ ] Memahami konsep conditional statement.
- [ ] Memahami `if`.
- [ ] Memahami `if - else`.
- [ ] Memahami `else if`.
- [ ] Memahami `if - else if - else`.
- [ ] Memahami nested `if`.
- [ ] Memahami penggunaan `&&`.
- [ ] Memahami penggunaan `||`.
- [ ] Memahami penggunaan `!`.
- [ ] Memahami conditional dengan `bool`.
- [ ] Mengenal ternary operator.
- [ ] Dapat membuat program cek nilai.
- [ ] Dapat membuat program cek genap/ganjil.
- [ ] Dapat melakukan validasi input sederhana.

---

# 🚀 Next Step

## Pertemuan 05 — Looping

Pada pertemuan berikutnya kita akan belajar bagaimana menjalankan kode **berulang kali** tanpa harus menulis kode yang sama berkali-kali.

Materi yang akan dipelajari:

    while
      ↓
    do while
      ↓
    for
      ↓
    nested loop
      ↓
    break
      ↓
    continue
      ↓
    program dengan perulangan

Contoh masalah yang nantinya bisa kita selesaikan:

    Tampilkan angka 1 sampai 10

Tanpa looping kita harus menulis:

    cout << 1;
    cout << 2;
    cout << 3;
    // ...
    cout << 10;

Dengan looping, kita bisa membuat proses tersebut jauh lebih sederhana.

---

## 🎯 Perjalanan Belajar Sejauh Ini

    Pertemuan 01
    Dasar-Dasar C++
           ↓
    Pertemuan 02
    Variable + Input/Output
           ↓
    Pertemuan 03
    Operator + Expression
           ↓
    Pertemuan 04
    Conditional Statement
           ↓
    Pertemuan 05
    Looping
           ↓
    Program semakin kompleks 🚀

---

**Happy Coding! 🚀**