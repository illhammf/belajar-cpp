# Pertemuan 05 — Looping

> Pada pertemuan ini kita belajar bagaimana menjalankan sebuah kode secara berulang menggunakan looping atau perulangan.

---

## 🎯 Tujuan Pembelajaran

Setelah menyelesaikan pertemuan ini, kita diharapkan mampu:

- Memahami konsep looping.
- Memahami `while`.
- Memahami `do while`.
- Memahami `for`.
- Memahami counter.
- Memahami infinite loop.
- Menggunakan `break`.
- Menggunakan `continue`.
- Membuat nested loop.
- Membuat program sederhana menggunakan looping.

---

# 1. Apa Itu Looping?

Looping atau perulangan adalah proses menjalankan suatu kode secara berulang selama kondisi tertentu terpenuhi.

Misalnya kita ingin menampilkan angka:

    1
    2
    3
    4
    5

Tanpa looping, kita harus menulis:

    cout << 1 << endl;
    cout << 2 << endl;
    cout << 3 << endl;
    cout << 4 << endl;
    cout << 5 << endl;

Bayangkan kalau kita ingin menampilkan angka `1` sampai `1000`.

Tentu tidak efisien jika harus menulis `cout` sebanyak 1000 kali.

Dengan looping:

    for (int i = 1; i <= 1000; i++)
    {
        cout << i << endl;
    }

Kode menjadi jauh lebih singkat.

---

# 2. Konsep Dasar Looping

Secara sederhana, looping bekerja seperti ini:

    Mulai
      ↓
    Cek kondisi
      ↓
    Apakah benar?
      ↓
    ┌───────────────┐
    │               │
    true          false
    │               │
    ↓               ↓
    Jalankan       Selesai
    kode
    │
    ↓
    Kembali cek kondisi
    │
    └───────────────→

Selama kondisi bernilai `true`, program akan terus mengulang.

Ketika kondisi menjadi `false`, looping berhenti.

---

# 3. Jenis Looping dalam C++

C++ memiliki beberapa jenis looping utama:

    while
    do while
    for

Selain itu kita juga akan mengenal:

    nested loop
    break
    continue

Ketiganya memiliki fungsi yang hampir sama, yaitu melakukan perulangan.

Perbedaannya terdapat pada cara penulisan dan kapan kondisi diperiksa.

---

# 4. `while`

`while` digunakan untuk melakukan perulangan selama kondisi bernilai `true`.

Struktur dasarnya:

    while (kondisi)
    {
        // kode yang diulang
    }

Contoh:

    int angka = 1;

    while (angka <= 5)
    {
        cout << angka << endl;

        angka++;
    }

Output:

    1
    2
    3
    4
    5

Program akan terus mengulang selama:

    angka <= 5

bernilai `true`.

---

# 5. Bagaimana `while` Bekerja?

Perhatikan:

    int angka = 1;

    while (angka <= 5)
    {
        cout << angka << endl;

        angka++;
    }

Urutannya:

    angka = 1
       ↓
    1 <= 5?
       ↓
      true
       ↓
    tampilkan 1
       ↓
    angka menjadi 2
       ↓
    2 <= 5?
       ↓
      true
       ↓
    tampilkan 2
       ↓
      ...
       ↓
    5 <= 5?
       ↓
      true
       ↓
    tampilkan 5
       ↓
    angka menjadi 6
       ↓
    6 <= 5?
       ↓
      false
       ↓
    selesai

---

# 6. Counter

Dalam looping kita sering menggunakan variable sebagai penghitung.

Variable tersebut biasa disebut `counter`.

Contoh:

    int i = 1;

    while (i <= 5)
    {
        cout << i << endl;

        i++;
    }

Di sini:

    i

berfungsi sebagai counter.

Nilainya berubah:

    1
    2
    3
    4
    5
    6

Ketika `i` menjadi `6`, kondisi:

    i <= 5

menjadi `false`.

Looping berhenti.

---

# 7. Increment `++`

Operator:

    ++

digunakan untuk menambah nilai sebesar `1`.

Contoh:

    int angka = 1;

    angka++;

Nilai `angka` menjadi:

    2

Jika dilakukan lagi:

    angka++;

menjadi:

    3

dan seterusnya.

Dalam looping, increment sangat sering digunakan:

    i++;

---

# 8. Decrement `--`

Selain menambah nilai, kita juga dapat mengurangi nilai.

Operator:

    --

digunakan untuk mengurangi nilai sebesar `1`.

Contoh:

    int angka = 5;

    angka--;

Nilainya menjadi:

    4

Contoh dalam looping:

    int angka = 5;

    while (angka >= 1)
    {
        cout << angka << endl;

        angka--;
    }

Output:

    5
    4
    3
    2
    1

---

# 9. `do while`

`do while` mirip dengan `while`.

Perbedaannya adalah:

    while

mengecek kondisi terlebih dahulu.

Sedangkan:

    do while

menjalankan kode terlebih dahulu, kemudian mengecek kondisi.

Struktur:

    do
    {
        // kode yang dijalankan
    }
    while (kondisi);

Contoh:

    int angka = 1;

    do
    {
        cout << angka << endl;

        angka++;
    }
    while (angka <= 5);

Output:

    1
    2
    3
    4
    5

---

# 10. Perbedaan `while` dan `do while`

`while`:

    cek kondisi
        ↓
    true?
      ↓
    jalankan kode

`do while`:

    jalankan kode
        ↓
    cek kondisi
        ↓
    true?
      ↓
    ulangi

Perbedaan penting:

`while` bisa saja tidak menjalankan kode sama sekali.

`do while` minimal menjalankan kode satu kali.

---

# 11. Contoh Perbedaan

Dengan `while`:

    int angka = 10;

    while (angka < 5)
    {
        cout << angka << endl;
    }

Tidak ada output karena:

    10 < 5

bernilai `false`.

Dengan `do while`:

    int angka = 10;

    do
    {
        cout << angka << endl;
    }
    while (angka < 5);

Output:

    10

Walaupun kondisi `10 < 5` bernilai `false`, kode tetap dijalankan satu kali.

---

# 12. `for`

`for` merupakan salah satu looping yang paling sering digunakan.

Strukturnya:

    for (inisialisasi; kondisi; increment)
    {
        // kode yang diulang
    }

Contoh:

    for (int i = 1; i <= 5; i++)
    {
        cout << i << endl;
    }

Output:

    1
    2
    3
    4
    5

---

# 13. Bagian-Bagian `for`

Perhatikan:

    for (int i = 1; i <= 5; i++)

Terdapat tiga bagian:

    int i = 1
         ↓
    Inisialisasi

    i <= 5
         ↓
    Kondisi

    i++
         ↓
    Increment

Jadi:

    for (inisialisasi; kondisi; increment)

---

# 14. Alur `for`

Contoh:

    for (int i = 1; i <= 5; i++)
    {
        cout << i << endl;
    }

Urutannya:

    int i = 1
       ↓
    i <= 5?
       ↓
      true
       ↓
    jalankan kode
       ↓
    i++
       ↓
    cek kondisi lagi
       ↓
      ...
       ↓
    kondisi false
       ↓
    selesai

---

# 15. `for` Mundur

Kita juga dapat melakukan perulangan dari angka besar ke kecil.

Contoh:

    for (int i = 5; i >= 1; i--)
    {
        cout << i << endl;
    }

Output:

    5
    4
    3
    2
    1

Perhatikan bahwa kita menggunakan:

    i--

karena nilainya ingin berkurang.

---

# 16. Perbandingan `while` dan `for`

Contoh menggunakan `while`:

    int i = 1;

    while (i <= 5)
    {
        cout << i << endl;

        i++;
    }

Dengan `for`:

    for (int i = 1; i <= 5; i++)
    {
        cout << i << endl;
    }

Keduanya menghasilkan:

    1
    2
    3
    4
    5

Perbedaannya adalah `for` biasanya lebih praktis ketika jumlah perulangan atau pola counter sudah jelas.

---

# 17. Infinite Loop

Infinite loop adalah perulangan yang tidak pernah berhenti.

Contoh:

    int i = 1;

    while (i <= 5)
    {
        cout << i << endl;
    }

Program tersebut bermasalah karena nilai `i` tidak pernah berubah.

Kondisi:

    i <= 5

akan terus bernilai `true`.

Seharusnya:

    int i = 1;

    while (i <= 5)
    {
        cout << i << endl;

        i++;
    }

Sekarang `i` berubah setiap perulangan.

---

# 18. `break`

`break` digunakan untuk menghentikan looping lebih awal.

Contoh:

    for (int i = 1; i <= 10; i++)
    {
        if (i == 5)
        {
            break;
        }

        cout << i << endl;
    }

Output:

    1
    2
    3
    4

Ketika:

    i == 5

maka:

    break

dijalankan dan looping langsung berhenti.

---

# 19. `continue`

`continue` digunakan untuk melewati satu iterasi dan melanjutkan ke iterasi berikutnya.

Contoh:

    for (int i = 1; i <= 5; i++)
    {
        if (i == 3)
        {
            continue;
        }

        cout << i << endl;
    }

Output:

    1
    2
    4
    5

Ketika `i` bernilai `3`, program melewati bagian:

    cout << i << endl;

Kemudian lanjut ke iterasi berikutnya.

---

# 20. Perbedaan `break` dan `continue`

`break`:

    Hentikan seluruh looping.

`continue`:

    Lewati iterasi saat ini.

Gambaran sederhananya:

    break
      ↓
    STOP LOOPING

    continue
      ↓
    Lewati iterasi
      ↓
    Lanjut ke iterasi berikutnya

---

# 21. Nested Loop

Nested loop adalah looping yang berada di dalam looping lainnya.

Contoh:

    for (int i = 1; i <= 3; i++)
    {
        for (int j = 1; j <= 3; j++)
        {
            cout << "* ";
        }

        cout << endl;
    }

Output:

    * * *
    * * *
    * * *

Loop luar:

    i

Loop dalam:

    j

Setiap satu kali loop `i`, loop `j` akan dijalankan sampai selesai.

---

# 22. Cara Kerja Nested Loop

Misalnya:

    for (int i = 1; i <= 2; i++)
    {
        for (int j = 1; j <= 3; j++)
        {
            cout << "* ";
        }

        cout << endl;
    }

Ketika:

    i = 1

loop `j` berjalan:

    j = 1
    j = 2
    j = 3

Kemudian:

    i = 2

loop `j` berjalan lagi:

    j = 1
    j = 2
    j = 3

Hasilnya:

    * * *
    * * *

---

# 23. Looping dan Conditional

Looping dapat digabungkan dengan conditional statement.

Contoh:

    for (int i = 1; i <= 10; i++)
    {
        if (i % 2 == 0)
        {
            cout << i << " adalah genap" << endl;
        }
    }

Output:

    2 adalah genap
    4 adalah genap
    6 adalah genap
    8 adalah genap
    10 adalah genap

Di sini kita menggabungkan:

    for
    +
    if
    +
    %

Ini mulai membuat program menjadi lebih powerful.

---

# 24. Contoh Menampilkan Angka 1 sampai 10

    #include <iostream>
    using namespace std;

    int main()
    {
        for (int i = 1; i <= 10; i++)
        {
            cout << i << endl;
        }

        return 0;
    }

Output:

    1
    2
    3
    4
    5
    6
    7
    8
    9
    10

---

# 25. Contoh Menampilkan Angka Genap

    #include <iostream>
    using namespace std;

    int main()
    {
        for (int i = 1; i <= 10; i++)
        {
            if (i % 2 == 0)
            {
                cout << i << endl;
            }
        }

        return 0;
    }

Output:

    2
    4
    6
    8
    10

---

# 26. Contoh Menampilkan Angka Ganjil

    #include <iostream>
    using namespace std;

    int main()
    {
        for (int i = 1; i <= 10; i++)
        {
            if (i % 2 != 0)
            {
                cout << i << endl;
            }
        }

        return 0;
    }

Output:

    1
    3
    5
    7
    9

---

# 27. Contoh Menjumlahkan Angka

Looping juga dapat digunakan untuk melakukan perhitungan.

Misalnya kita ingin menghitung:

    1 + 2 + 3 + 4 + 5

Kita dapat membuat:

    int total = 0;

    for (int i = 1; i <= 5; i++)
    {
        total += i;
    }

    cout << total << endl;

Hasil:

    15

---

# 28. Apa Itu `total += i`?

Kode:

    total += i;

merupakan bentuk singkat dari:

    total = total + i;

Misalnya:

    total = 0
    i = 1

Maka:

    total = 0 + 1
    total = 1

Iterasi berikutnya:

    total = 1 + 2
    total = 3

Kemudian:

    total = 3 + 3
    total = 6

Dan seterusnya.

---

# 29. Looping dengan Input

Looping juga dapat digunakan untuk meminta input berkali-kali.

Contoh:

    #include <iostream>
    using namespace std;

    int main()
    {
        int angka;

        for (int i = 1; i <= 3; i++)
        {
            cout << "Masukkan angka ke-" << i << ": ";
            cin >> angka;
        }

        return 0;
    }

Program akan meminta input sebanyak tiga kali.

---

# 30. Kesalahan yang Sering Terjadi

## 30.1 Lupa mengubah counter

Contoh yang salah:

    int i = 1;

    while (i <= 5)
    {
        cout << i << endl;
    }

`i` tidak pernah berubah sehingga looping tidak berhenti.

Yang benar:

    int i = 1;

    while (i <= 5)
    {
        cout << i << endl;

        i++;
    }

---

## 30.2 Salah kondisi

Contoh:

    for (int i = 1; i >= 10; i++)
    {
        cout << i << endl;
    }

Program tidak akan berjalan karena:

    1 >= 10

bernilai `false`.

Jika ingin naik dari `1` sampai `10`:

    for (int i = 1; i <= 10; i++)
    {
        cout << i << endl;
    }

---

## 30.3 Salah menggunakan `i--`

Contoh:

    for (int i = 1; i <= 10; i--)
    {
        cout << i << endl;
    }

Ini juga bermasalah karena:

    i

semakin kecil, sedangkan kondisi membutuhkan:

    i <= 10

Untuk naik:

    i++

Untuk turun:

    i--

---

# 🧪 Mini Challenge

## Challenge 01 — Angka 1 sampai 100

Buat program yang menampilkan:

    1
    2
    3
    ...
    100

Gunakan `for`.

---

## Challenge 02 — Angka Genap

Tampilkan semua angka genap dari:

    1 sampai 50

Gunakan:

    for
    if
    %

---

## Challenge 03 — Angka Ganjil

Tampilkan semua angka ganjil dari:

    1 sampai 50

---

## Challenge 04 — Jumlah Angka

Hitung:

    1 + 2 + 3 + ... + 100

Kemudian tampilkan hasilnya.

---

## Challenge 05 — Tabel Perkalian

Buat program yang menampilkan tabel perkalian sebuah angka.

Misalnya input:

    5

Output:

    5 x 1 = 5
    5 x 2 = 10
    5 x 3 = 15
    ...
    5 x 10 = 50

---

## Challenge 06 — Countdown

Buat program yang menampilkan:

    10
    9
    8
    7
    6
    5
    4
    3
    2
    1

Kemudian:

    Selesai!

---

# 🔗 Hubungan dengan Pertemuan Sebelumnya

Pada Pertemuan 04 kita belajar:

    if
    else
    else if
    logical operator

Sekarang kita menggabungkannya dengan looping.

Contoh:

    for (int i = 1; i <= 10; i++)
    {
        if (i % 2 == 0)
        {
            cout << i << endl;
        }
    }

Alurnya:

    for
     ↓
    angka
     ↓
    if
     ↓
    cek kondisi
     ↓
    output

Jadi konsep yang kita pelajari sebelumnya tidak dibuang.

Justru kita mulai menggabungkannya untuk membuat program yang lebih kompleks.

---

# 🧠 Kesimpulan

Looping digunakan untuk menjalankan kode secara berulang.

Jenis utama:

    while
    do while
    for

Konsep tambahan:

    counter
    nested loop
    break
    continue

Gambaran sederhananya:

    Conditional
         ↓
    Program bisa memilih

    Looping
         ↓
    Program bisa mengulang

Jika keduanya digabungkan:

    Input
      ↓
    Looping
      ↓
    Conditional
      ↓
    Process
      ↓
    Output

Maka kita sudah mulai memiliki dasar untuk membuat program yang jauh lebih kompleks.

---

# 📁 Struktur Folder Pertemuan 05

    pertemuan-05/
    │
    ├── catatan.md
    │
    ├── 01_while.cpp
    ├── 02_while_counter.cpp
    ├── 03_do_while.cpp
    ├── 04_for.cpp
    ├── 05_for_counter.cpp
    ├── 06_nested_loop.cpp
    ├── 07_break.cpp
    ├── 08_continue.cpp
    ├── 09_tabel_perkalian.cpp
    ├── 10_jumlah_angka.cpp
    └── 11_tebak_angka.cpp

---

# ✅ Checklist

- [ ] Memahami konsep looping.
- [ ] Memahami `while`.
- [ ] Memahami `do while`.
- [ ] Memahami `for`.
- [ ] Memahami counter.
- [ ] Memahami increment `++`.
- [ ] Memahami decrement `--`.
- [ ] Memahami infinite loop.
- [ ] Memahami `break`.
- [ ] Memahami `continue`.
- [ ] Memahami nested loop.
- [ ] Dapat menggabungkan looping dengan `if`.
- [ ] Dapat membuat perulangan angka.
- [ ] Dapat menghitung total menggunakan looping.
- [ ] Dapat membuat tabel perkalian sederhana.

---

# 🚀 Next Step

## Pertemuan 06 — Function

Setelah memahami looping, kita akan belajar bagaimana memecah program menjadi bagian-bagian yang lebih kecil menggunakan `function`.

Contoh masalah:

    Program terlalu panjang
          ↓
    Pecah menjadi function
          ↓
    function 1
    function 2
    function 3
          ↓
    Program lebih terstruktur

Materi berikutnya akan membahas:

    function
       ↓
    parameter
       ↓
    argument
       ↓
    return
       ↓
    void
       ↓
    function dengan looping
       ↓
    function dengan conditional

---

## 🎯 Perjalanan Belajar

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
    Pertemuan 06
    Function
          ↓
    Program semakin kompleks

---

**Happy Coding! 🚀**