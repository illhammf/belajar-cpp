# Pertemuan 07 — Array

> Pada pertemuan ini kita belajar bagaimana menyimpan banyak data menggunakan Array di C++.

---

## 🎯 Tujuan Pembelajaran

Setelah menyelesaikan pertemuan ini, kita diharapkan mampu:

- Memahami konsep Array.
- Membuat Array.
- Memahami index Array.
- Mengakses data Array.
- Mengubah data Array.
- Menggunakan Array dengan looping.
- Mengisi Array melalui input user.
- Menghitung jumlah data Array.
- Mencari nilai terbesar dan terkecil.
- Mencari data di dalam Array.
- Menghitung rata-rata data.
- Menggunakan Array bersama Function.

---

# 1. Apa Itu Array?

Array adalah struktur data yang digunakan untuk menyimpan beberapa data dengan tipe data yang sama dalam satu variable.

Tanpa Array:

    int nilai1 = 80;
    int nilai2 = 90;
    int nilai3 = 75;
    int nilai4 = 88;
    int nilai5 = 92;

Kita harus membuat banyak variable.

Dengan Array:

    int nilai[5] = {80, 90, 75, 88, 92};

Sekarang lima data tersebut disimpan dalam satu variable:

    nilai

---

# 2. Kenapa Menggunakan Array?

Bayangkan kita memiliki 100 nilai mahasiswa.

Tanpa Array:

    int nilai1;
    int nilai2;
    int nilai3;
    ...
    int nilai100;

Cara tersebut tentu tidak praktis.

Dengan Array:

    int nilai[100];

Kita dapat menyimpan 100 nilai dalam satu Array.

Array sangat berguna ketika kita memiliki banyak data yang memiliki tipe yang sama.

---

# 3. Struktur Dasar Array

Bentuk dasar Array:

    tipeData namaArray[jumlahData];

Contoh:

    int nilai[5];

Artinya kita membuat Array bernama:

    nilai

yang dapat menyimpan:

    5 data integer

---

# 4. Membuat Array dan Memberikan Nilai

Kita dapat langsung memberikan nilai ketika membuat Array.

Contoh:

    int nilai[5] = {80, 90, 75, 88, 92};

Data tersebut tersimpan secara berurutan.

    80
    90
    75
    88
    92

Tetapi Array memiliki konsep penting yaitu:

    Index

---

# 5. Apa Itu Index?

Index adalah nomor posisi yang digunakan untuk mengakses data dalam Array.

Hal yang sangat penting:

> Index Array di C++ dimulai dari `0`, bukan `1`.

Contoh:

    int nilai[5] = {80, 90, 75, 88, 92};

Index-nya:

    Index    Data

      0       80
      1       90
      2       75
      3       88
      4       92

Jadi:

    nilai[0] → 80
    nilai[1] → 90
    nilai[2] → 75
    nilai[3] → 88
    nilai[4] → 92

---

# 6. Mengakses Data Array

Untuk mengambil data Array, gunakan index.

Contoh:

    #include <iostream>
    using namespace std;

    int main()
    {
        int nilai[5] = {80, 90, 75, 88, 92};

        cout << nilai[0] << endl;
        cout << nilai[1] << endl;
        cout << nilai[2] << endl;

        return 0;
    }

Output:

    80
    90
    75

---

# 7. Index Terakhir

Jika Array memiliki 5 data:

    int nilai[5];

Maka index-nya adalah:

    0
    1
    2
    3
    4

Index terakhir bukan:

    5

melainkan:

    4

Karena index dimulai dari `0`.

Secara umum:

    index terakhir = jumlah data - 1

Contoh:

    5 data
    ↓
    index terakhir = 5 - 1
    ↓
    4

---

# 8. Mengubah Data Array

Data Array dapat diubah menggunakan index.

Contoh:

    int nilai[5] = {80, 90, 75, 88, 92};

    nilai[0] = 100;

Sekarang Array menjadi:

    100
    90
    75
    88
    92

Kita mengubah data pada index `0`.

---

# 9. Array dengan Looping

Array sangat sering digunakan bersama looping.

Daripada:

    cout << nilai[0] << endl;
    cout << nilai[1] << endl;
    cout << nilai[2] << endl;
    cout << nilai[3] << endl;
    cout << nilai[4] << endl;

Kita dapat menggunakan:

    for (int i = 0; i < 5; i++)
    {
        cout << nilai[i] << endl;
    }

Loop akan berjalan:

    i = 0
    i = 1
    i = 2
    i = 3
    i = 4

Kemudian `nilai[i]` digunakan untuk mengambil data.

---

# 10. Hubungan Looping dan Index

Misalnya:

    int nilai[5] = {80, 90, 75, 88, 92};

Loop:

    for (int i = 0; i < 5; i++)
    {
        cout << nilai[i] << endl;
    }

Saat:

    i = 0

maka:

    nilai[i]
    ↓
    nilai[0]
    ↓
    80

Saat:

    i = 1

maka:

    nilai[i]
    ↓
    nilai[1]
    ↓
    90

Begitu seterusnya.

Jadi:

    i

digunakan sebagai index.

---

# 11. Mengisi Array dengan Input

Array juga dapat diisi melalui input user.

Contoh:

    int nilai[5];

    for (int i = 0; i < 5; i++)
    {
        cout << "Nilai ke-" << i + 1 << ": ";
        cin >> nilai[i];
    }

Jika user memasukkan:

    80
    90
    75
    88
    92

Maka Array berisi:

    nilai[0] = 80
    nilai[1] = 90
    nilai[2] = 75
    nilai[3] = 88
    nilai[4] = 92

---

# 12. Menampilkan Seluruh Data Array

Setelah data dimasukkan, kita dapat menampilkannya kembali.

Contoh:

    for (int i = 0; i < 5; i++)
    {
        cout << "Nilai ke-" << i + 1
             << ": " << nilai[i] << endl;
    }

Perhatikan perbedaan:

    i

digunakan untuk index.

Sedangkan:

    i + 1

digunakan agar tampilan lebih mudah dipahami manusia.

Contoh:

    index 0
    ditampilkan sebagai
    Nilai ke-1

---

# 13. Menjumlahkan Data Array

Array dapat digunakan untuk melakukan perhitungan.

Misalnya:

    int nilai[5] = {80, 90, 75, 88, 92};

Kita ingin mendapatkan total.

Gunakan variable:

    int total = 0;

Kemudian:

    for (int i = 0; i < 5; i++)
    {
        total += nilai[i];
    }

Hasil:

    425

Alurnya:

    total = 0

    0 + 80 = 80
    80 + 90 = 170
    170 + 75 = 245
    245 + 88 = 333
    333 + 92 = 425

---

# 14. Menghitung Rata-Rata

Setelah mendapatkan total, kita dapat menghitung rata-rata.

Rumus:

    rata-rata = total / jumlah data

Contoh:

    int total = 425;
    int jumlahData = 5;

    double rataRata = (double) total / jumlahData;

Hasil:

    85

Kenapa menggunakan `double`?

Karena rata-rata bisa menghasilkan angka desimal.

---

# 15. Mencari Nilai Terbesar

Kita dapat mencari nilai terbesar menggunakan looping.

Contoh:

    int nilai[5] = {80, 90, 75, 88, 92};

    int terbesar = nilai[0];

    for (int i = 1; i < 5; i++)
    {
        if (nilai[i] > terbesar)
        {
            terbesar = nilai[i];
        }
    }

Hasil:

    92

Kenapa dimulai dari:

    nilai[0]

Karena kita membutuhkan nilai awal sebagai pembanding.

---

# 16. Mencari Nilai Terkecil

Konsepnya sama seperti mencari nilai terbesar.

Contoh:

    int nilai[5] = {80, 90, 75, 88, 92};

    int terkecil = nilai[0];

    for (int i = 1; i < 5; i++)
    {
        if (nilai[i] < terkecil)
        {
            terkecil = nilai[i];
        }
    }

Hasil:

    75

---

# 17. Mencari Data dalam Array

Kita juga dapat mencari apakah suatu nilai terdapat dalam Array.

Contoh:

    int nilai[5] = {80, 90, 75, 88, 92};

    int cari = 75;
    bool ditemukan = false;

    for (int i = 0; i < 5; i++)
    {
        if (nilai[i] == cari)
        {
            ditemukan = true;
            break;
        }
    }

Jika ditemukan:

    ditemukan = true

Jika tidak:

    ditemukan = false

---

# 18. Mengetahui Posisi Data

Kita tidak hanya dapat mengetahui apakah data ditemukan, tetapi juga index-nya.

Contoh:

    int nilai[5] = {80, 90, 75, 88, 92};

    int cari = 75;
    int posisi = -1;

    for (int i = 0; i < 5; i++)
    {
        if (nilai[i] == cari)
        {
            posisi = i;
            break;
        }
    }

Jika ditemukan:

    posisi = 2

Karena:

    nilai[2] = 75

Kenapa menggunakan:

    -1

sebagai nilai awal?

Karena index Array tidak menggunakan `-1`, sehingga `-1` dapat digunakan sebagai tanda bahwa data belum ditemukan.

---

# 19. Array dengan Function

Array dapat dikirim ke function.

Contoh:

    void tampilkanArray(int nilai[], int ukuran)
    {
        for (int i = 0; i < ukuran; i++)
        {
            cout << nilai[i] << endl;
        }
    }

Kemudian:

    int nilai[5] = {80, 90, 75, 88, 92};

    tampilkanArray(nilai, 5);

Function akan menerima:

    nilai
    ↓
    Array

dan:

    5
    ↓
    jumlah data

---

# 20. Function untuk Menghitung Total Array

Contoh:

    int hitungTotal(int nilai[], int ukuran)
    {
        int total = 0;

        for (int i = 0; i < ukuran; i++)
        {
            total += nilai[i];
        }

        return total;
    }

Pemanggilan:

    int hasil = hitungTotal(nilai, 5);

---

# 21. Kenapa Array Cocok dengan Function?

Bayangkan kita mempunyai program besar.

Kita bisa membuat function:

    tampilkanArray()
    hitungTotal()
    hitungRataRata()
    cariTerbesar()
    cariTerkecil()
    cariData()

Masing-masing function mempunyai tugas sendiri.

Contohnya:

    main()
       │
       ├── inputArray()
       │
       ├── tampilkanArray()
       │
       ├── hitungTotal()
       │
       ├── hitungRataRata()
       │
       ├── cariTerbesar()
       │
       └── cariTerkecil()

Program menjadi lebih terstruktur.

---

# 22. Ukuran Array

Ketika membuat:

    int nilai[5];

Array memiliki kapasitas:

    5 data

Index yang tersedia:

    0
    1
    2
    3
    4

Jangan mengakses:

    nilai[5]

karena index `5` berada di luar Array.

---

# 23. Out of Bounds

Kesalahan ketika mengakses index di luar batas Array disebut:

    Out of Bounds

Contoh:

    int nilai[5] = {80, 90, 75, 88, 92};

    cout << nilai[5];

Ini salah.

Index yang valid hanya:

    0
    1
    2
    3
    4

Bukan:

    5

Kesalahan seperti ini dapat menyebabkan program menghasilkan data yang tidak terduga.

---

# 24. Array dengan `const`

Jika ukuran Array tidak ingin berubah, kita dapat menggunakan `const`.

Contoh:

    const int JUMLAH = 5;

    int nilai[JUMLAH];

Kemudian:

    for (int i = 0; i < JUMLAH; i++)
    {
        cin >> nilai[i];
    }

Cara ini lebih baik daripada menulis angka `5` berkali-kali.

---

# 25. Array String

Array tidak hanya dapat menyimpan integer.

Contoh:

    string nama[3] = {
        "Ilham",
        "Budi",
        "Andi"
    };

Kita dapat mengakses:

    nama[0]
    nama[1]
    nama[2]

Output:

    Ilham
    Budi
    Andi

---

# 26. Array Double

Kita juga dapat menggunakan `double`.

Contoh:

    double harga[3] = {
        10000.5,
        15000.0,
        20000.5
    };

Array tersebut menyimpan data desimal.

---

# 27. Array Character

Kita juga dapat membuat Array `char`.

Contoh:

    char grade[5] = {
        'A',
        'B',
        'A',
        'C',
        'B'
    };

Index:

    grade[0] → A
    grade[1] → B
    grade[2] → A
    grade[3] → C
    grade[4] → B

---

# 28. Array + Conditional

Array dapat dikombinasikan dengan `if`.

Contoh kita ingin menghitung berapa nilai yang lulus.

    int nilai[5] = {80, 60, 75, 50, 90};

    int jumlahLulus = 0;

    for (int i = 0; i < 5; i++)
    {
        if (nilai[i] >= 75)
        {
            jumlahLulus++;
        }
    }

Hasil:

    3

Karena nilai yang lulus:

    80
    75
    90

---

# 29. Array + Looping + Function

Sekarang kita gabungkan materi sebelumnya.

    void tampilkanLulus(int nilai[], int ukuran)
    {
        for (int i = 0; i < ukuran; i++)
        {
            if (nilai[i] >= 75)
            {
                cout << nilai[i] << endl;
            }
        }
    }

Di sini kita menggunakan:

    Array
       +
    Function
       +
    Looping
       +
    Conditional

Ini adalah kombinasi penting sebelum masuk ke materi yang lebih kompleks.

---

# 30. Contoh Program Lengkap

Contoh program sederhana untuk mengolah nilai:

    #include <iostream>
    using namespace std;

    int main()
    {
        const int JUMLAH = 5;

        int nilai[JUMLAH];

        for (int i = 0; i < JUMLAH; i++)
        {
            cout << "Masukkan nilai ke-" << i + 1 << ": ";
            cin >> nilai[i];
        }

        cout << endl;
        cout << "Data nilai:" << endl;

        for (int i = 0; i < JUMLAH; i++)
        {
            cout << nilai[i] << endl;
        }

        return 0;
    }

Contoh input:

    80
    90
    75
    88
    92

Output:

    Data nilai:
    80
    90
    75
    88
    92

---

# 🧠 Pola Penting Array

Ketika melihat:

    int data[5];

langsung pikirkan:

    5 data

Kemudian:

    data[0]
    data[1]
    data[2]
    data[3]
    data[4]

Jika ingin memproses semuanya:

    for (int i = 0; i < 5; i++)
    {
        data[i];
    }

Pola ini akan sangat sering digunakan.

---

# 🔗 Hubungan dengan Pertemuan Sebelumnya

Pertemuan 04:

    Conditional
        ↓
    if
    else
    else if

Pertemuan 05:

    Looping
        ↓
    for
    while
    do while

Pertemuan 06:

    Function
        ↓
    Parameter
    Return

Pertemuan 07:

    Array
        ↓
    Index
        ↓
    Looping
        ↓
    Function

Sekarang kita mulai menggabungkan materi:

    Array
      +
    Looping
      +
    Conditional
      +
    Function
      ↓
    Pengolahan Data

---

# 🧪 Mini Challenge

## Challenge 01 — Array Sederhana

Buat Array:

    int angka[5] = {
        10,
        20,
        30,
        40,
        50
    };

Tampilkan seluruh datanya menggunakan `for`.

---

## Challenge 02 — Input Array

Buat Array dengan ukuran 5.

Minta user memasukkan 5 angka.

Kemudian tampilkan kembali semua angka tersebut.

---

## Challenge 03 — Total Array

Buat program untuk menghitung total seluruh angka.

Contoh:

    10
    20
    30
    40
    50

Hasil:

    Total = 150

---

## Challenge 04 — Nilai Terbesar

Buat program untuk mencari nilai terbesar dari Array.

Contoh:

    80
    90
    75
    95
    85

Hasil:

    Nilai terbesar = 95

---

## Challenge 05 — Nilai Terkecil

Buat program untuk mencari nilai terkecil.

Contoh:

    80
    90
    75
    95
    85

Hasil:

    Nilai terkecil = 75

---

## Challenge 06 — Mencari Data

Minta user memasukkan angka yang ingin dicari.

Contoh:

    Data:
    10 20 30 40 50

    Cari:
    30

Output:

    Data ditemukan pada index 2.

Jika tidak ditemukan:

    Data tidak ditemukan.

---

## Challenge 07 — Rata-Rata Nilai

Buat program yang menerima 5 nilai mahasiswa.

Kemudian tampilkan:

    Total nilai
    Rata-rata
    Nilai terbesar
    Nilai terkecil

---

## Challenge 08 — Array + Function

Buat beberapa function:

    tampilkanArray()
    hitungTotal()
    hitungRataRata()
    cariTerbesar()
    cariTerkecil()

Kemudian gunakan semuanya di dalam `main()`.

---

# 📁 Struktur Folder Pertemuan 07

    pertemuan-07/
    │
    ├── catatan.md
    │
    ├── 01_array_sederhana.cpp
    ├── 02_mengakses_array.cpp
    ├── 03_mengubah_array.cpp
    ├── 04_array_dengan_loop.cpp
    ├── 05_input_array.cpp
    ├── 06_menjumlahkan_array.cpp
    ├── 07_mencari_nilai_terbesar.cpp
    ├── 08_mencari_nilai_terkecil.cpp
    ├── 09_mencari_data.cpp
    ├── 10_menghitung_rata_rata.cpp
    ├── 11_array_dengan_function.cpp
    ├── 12_function_menampilkan_array.cpp
    └── 13_program_nilai_siswa.cpp

---

# ✅ Checklist

- [ ] Memahami konsep Array.
- [ ] Memahami index.
- [ ] Mengetahui bahwa index dimulai dari `0`.
- [ ] Dapat membuat Array.
- [ ] Dapat mengakses Array.
- [ ] Dapat mengubah data Array.
- [ ] Dapat menggunakan Array dengan `for`.
- [ ] Dapat menerima input ke dalam Array.
- [ ] Dapat menghitung total Array.
- [ ] Dapat menghitung rata-rata.
- [ ] Dapat mencari nilai terbesar.
- [ ] Dapat mencari nilai terkecil.
- [ ] Dapat mencari data.
- [ ] Memahami Out of Bounds.
- [ ] Dapat menggunakan Array dengan Function.

---

# 🚀 Next Step

## Pertemuan 08 — String

Setelah memahami Array, kita akan belajar mengolah teks menggunakan `string`.

Kita akan belajar:

    String
      ↓
    Input teks
      ↓
    Panjang String
      ↓
    Mengakses karakter
      ↓
    Menggabungkan String
      ↓
    Mencari teks
      ↓
    String + Function

Setelah itu kita akan mulai memiliki bekal yang semakin kuat untuk membuat program yang lebih kompleks.

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
    Program semakin kompleks

---

**Happy Coding!**