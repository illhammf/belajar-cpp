# Pertemuan 06 — Function

> Pada pertemuan ini kita belajar bagaimana membuat function di C++ untuk memecah program menjadi bagian-bagian yang lebih kecil, terstruktur, dan mudah digunakan kembali.

---

## 🎯 Tujuan Pembelajaran

Setelah menyelesaikan pertemuan ini, kita diharapkan mampu:

- Memahami konsep function.
- Membuat function sederhana.
- Memahami `void`.
- Memahami parameter.
- Memahami argument.
- Menggunakan lebih dari satu parameter.
- Menggunakan `return`.
- Membuat function yang menghasilkan nilai.
- Menggunakan function dengan `if`.
- Menggunakan function dengan looping.
- Memahami perbedaan function dengan dan tanpa parameter.
- Memahami perbedaan function dengan dan tanpa return.

---

# 1. Apa Itu Function?

Function adalah sekumpulan kode yang dibuat untuk melakukan tugas tertentu.

Daripada menulis kode yang sama berkali-kali, kita bisa memasukkannya ke dalam sebuah function.

Contoh:

    void sapa()
    {
        cout << "Halo!" << endl;
    }

Kemudian kita dapat memanggilnya:

    sapa();

Output:

    Halo!

---

# 2. Kenapa Function Dibutuhkan?

Bayangkan kita memiliki program seperti ini:

    cout << "Halo Ilham" << endl;
    cout << "Selamat belajar C++" << endl;

    // kode lain

    cout << "Halo Ilham" << endl;
    cout << "Selamat belajar C++" << endl;

    // kode lain

    cout << "Halo Ilham" << endl;
    cout << "Selamat belajar C++" << endl;

Kode yang sama ditulis berkali-kali.

Dengan function:

    void sapa()
    {
        cout << "Halo Ilham" << endl;
        cout << "Selamat belajar C++" << endl;
    }

Kita cukup memanggil:

    sapa();

    sapa();

    sapa();

Kode menjadi lebih rapi.

---

# 3. Struktur Dasar Function

Bentuk dasar function:

    returnType namaFunction()
    {
        // kode
    }

Contoh:

    void sapa()
    {
        cout << "Halo!" << endl;
    }

Ada beberapa bagian:

    void
      ↓
    return type

    sapa
      ↓
    nama function

    ()
      ↓
    parameter

    {}
      ↓
    isi function

---

# 4. Function Sederhana

Contoh:

    #include <iostream>
    using namespace std;

    void sapa()
    {
        cout << "Halo, selamat belajar C++!" << endl;
    }

    int main()
    {
        sapa();

        return 0;
    }

Output:

    Halo, selamat belajar C++!

Perhatikan bahwa function:

    sapa()

dipanggil dari:

    main()

---

# 5. Function Tidak Otomatis Dijalankan

Membuat function tidak berarti function tersebut langsung dijalankan.

Contoh:

    void sapa()
    {
        cout << "Halo!" << endl;
    }

Program di atas belum menampilkan apa pun jika `sapa()` tidak dipanggil.

Untuk menjalankannya:

    sapa();

Jadi:

    Membuat function
          ↓
    Memanggil function
          ↓
    Function dijalankan

---

# 6. Function `void`

`void` berarti function tidak mengembalikan nilai.

Contoh:

    void tampilkanNama()
    {
        cout << "Ilham" << endl;
    }

Function tersebut hanya melakukan sebuah tindakan.

Contoh lain:

    void cetakGaris()
    {
        cout << "====================" << endl;
    }

Kita dapat memanggil:

    cetakGaris();

---

# 7. Memanggil Function Berkali-kali

Salah satu keuntungan function adalah dapat digunakan berulang kali.

Contoh:

    #include <iostream>
    using namespace std;

    void cetakGaris()
    {
        cout << "====================" << endl;
    }

    int main()
    {
        cetakGaris();

        cout << "PROGRAM C++" << endl;

        cetakGaris();

        return 0;
    }

Output:

    ====================
    PROGRAM C++
    ====================

---

# 8. Parameter

Parameter adalah data yang diterima oleh sebuah function.

Contoh:

    void sapa(string nama)
    {
        cout << "Halo " << nama << endl;
    }

Function tersebut memiliki parameter:

    string nama

Kita dapat memberikan nilai saat memanggil function:

    sapa("Ilham");

Output:

    Halo Ilham

---

# 9. Argument

Nilai yang kita berikan ketika memanggil function disebut argument.

Contoh:

    sapa("Ilham");

Pada contoh tersebut:

    "Ilham"

adalah argument.

Sedangkan:

    void sapa(string nama)

memiliki:

    nama

sebagai parameter.

Sederhananya:

    Parameter
    ↓
    Tempat menerima data

    Argument
    ↓
    Data yang dikirim

---

# 10. Function dengan Parameter

Contoh:

    #include <iostream>
    using namespace std;

    void sapa(string nama)
    {
        cout << "Halo, " << nama << "!" << endl;
    }

    int main()
    {
        sapa("Ilham");
        sapa("Budi");
        sapa("Andi");

        return 0;
    }

Output:

    Halo, Ilham!
    Halo, Budi!
    Halo, Andi!

Satu function dapat digunakan untuk banyak data berbeda.

---

# 11. Lebih dari Satu Parameter

Sebuah function dapat memiliki lebih dari satu parameter.

Contoh:

    void perkenalan(string nama, int umur)
    {
        cout << "Nama: " << nama << endl;
        cout << "Umur: " << umur << endl;
    }

Pemanggilan:

    perkenalan("Ilham", 20);

Output:

    Nama: Ilham
    Umur: 20

Urutan argument harus sesuai dengan parameter.

    string nama
    int umur

Maka:

    "Ilham"
    20

---

# 12. Parameter dengan Tipe Data Berbeda

Parameter tidak harus memiliki tipe data yang sama.

Contoh:

    void tampilkanData(string nama, int umur, double tinggi)
    {
        cout << "Nama   : " << nama << endl;
        cout << "Umur   : " << umur << endl;
        cout << "Tinggi : " << tinggi << endl;
    }

Pemanggilan:

    tampilkanData("Ilham", 20, 170.5);

Function menerima:

    string
    int
    double

---

# 13. Function dengan `return`

Tidak semua function hanya menampilkan sesuatu.

Function juga dapat menghasilkan dan mengembalikan sebuah nilai.

Untuk itu kita menggunakan:

    return

Contoh:

    int tambah(int a, int b)
    {
        return a + b;
    }

Function tersebut menghasilkan sebuah nilai `int`.

---

# 14. Function `return` Sederhana

Contoh lengkap:

    #include <iostream>
    using namespace std;

    int tambah(int a, int b)
    {
        return a + b;
    }

    int main()
    {
        int hasil = tambah(10, 20);

        cout << "Hasil: " << hasil << endl;

        return 0;
    }

Output:

    Hasil: 30

Alurnya:

    tambah(10, 20)
          ↓
       10 + 20
          ↓
         30
          ↓
        return
          ↓
        hasil

---

# 15. Perbedaan `void` dan `return`

Function `void`:

    void sapa()
    {
        cout << "Halo";
    }

Function tersebut melakukan tindakan tetapi tidak mengembalikan nilai.

Sedangkan:

    int tambah(int a, int b)
    {
        return a + b;
    }

Function tersebut menghasilkan nilai.

Sederhananya:

    void
      ↓
    melakukan sesuatu

    return
      ↓
    menghasilkan sesuatu

---

# 16. Menyimpan Hasil `return`

Nilai yang dikembalikan function dapat disimpan ke variable.

Contoh:

    int hasil = tambah(10, 20);

Kemudian:

    cout << hasil;

Output:

    30

Kita juga dapat langsung menggunakannya:

    cout << tambah(10, 20);

Output:

    30

---

# 17. Function Perkalian

Contoh:

    int kali(int a, int b)
    {
        return a * b;
    }

Pemanggilan:

    int hasil = kali(5, 4);

Hasil:

    20

---

# 18. Function Pengurangan

    int kurang(int a, int b)
    {
        return a - b;
    }

Pemanggilan:

    int hasil = kurang(10, 3);

Hasil:

    7

---

# 19. Function Pembagian

    double bagi(double a, double b)
    {
        return a / b;
    }

Pemanggilan:

    double hasil = bagi(10, 2);

Hasil:

    5

Perhatikan bahwa kita menggunakan:

    double

karena hasil pembagian dapat berupa bilangan desimal.

---

# 20. Function dengan Conditional

Function dapat berisi `if`.

Contoh:

    string cekKelulusan(int nilai)
    {
        if (nilai >= 75)
        {
            return "Lulus";
        }
        else
        {
            return "Tidak Lulus";
        }
    }

Pemanggilan:

    cout << cekKelulusan(80);

Output:

    Lulus

Di sini kita menggabungkan:

    Function
        +
    Parameter
        +
    if
        +
    return

---

# 21. Function dengan Looping

Function juga dapat berisi looping.

Contoh:

    void tampilkanAngka()
    {
        for (int i = 1; i <= 5; i++)
        {
            cout << i << endl;
        }
    }

Kemudian:

    tampilkanAngka();

Output:

    1
    2
    3
    4
    5

---

# 22. Function dengan Parameter dan Looping

Kita dapat membuat function yang menerima jumlah perulangan.

Contoh:

    void tampilkanAngka(int batas)
    {
        for (int i = 1; i <= batas; i++)
        {
            cout << i << endl;
        }
    }

Pemanggilan:

    tampilkanAngka(5);

Output:

    1
    2
    3
    4
    5

Jika:

    tampilkanAngka(10);

maka:

    1
    2
    3
    ...
    10

---

# 23. Function dengan Boolean

Function juga dapat mengembalikan `bool`.

Contoh:

    bool isGenap(int angka)
    {
        return angka % 2 == 0;
    }

Pemanggilan:

    if (isGenap(10))
    {
        cout << "Genap";
    }

Output:

    Genap

Function tersebut mengembalikan:

    true

atau:

    false

---

# 24. Function dengan Beberapa Kondisi

Contoh function untuk menentukan grade:

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

Pemanggilan:

    char grade = tentukanGrade(85);

Hasil:

    B

---

# 25. Function Membuat Program Lebih Terstruktur

Tanpa function:

    int main()
    {
        // kode input

        // kode validasi

        // kode perhitungan

        // kode output

        // kode lainnya

        return 0;
    }

Jika program semakin besar, `main()` dapat menjadi sangat panjang.

Dengan function:

    int main()
    {
        inputData();

        validasiData();

        hitungData();

        tampilkanHasil();

        return 0;
    }

Program menjadi lebih mudah dibaca.

---

# 26. Function sebagai Pembagian Tugas

Sebaiknya satu function memiliki tugas yang jelas.

Contoh:

    void inputData()
    {
        // menerima input
    }

    void hitungData()
    {
        // melakukan perhitungan
    }

    void tampilkanHasil()
    {
        // menampilkan hasil
    }

Kita dapat membayangkan program seperti sebuah tim:

    inputData()
        ↓
    Bertugas menerima data

    hitungData()
        ↓
    Bertugas menghitung

    tampilkanHasil()
        ↓
    Bertugas menampilkan

---

# 27. Deklarasi Function

Function dapat dideklarasikan terlebih dahulu menggunakan prototype.

Contoh:

    #include <iostream>
    using namespace std;

    int tambah(int a, int b);

    int main()
    {
        cout << tambah(10, 20);

        return 0;
    }

    int tambah(int a, int b)
    {
        return a + b;
    }

Baris:

    int tambah(int a, int b);

disebut function declaration atau function prototype.

---

# 28. Kenapa Function Prototype Dibutuhkan?

C++ membaca kode dari atas ke bawah.

Jika function ditulis setelah `main()`, compiler perlu mengetahui terlebih dahulu bahwa function tersebut ada.

Contoh:

    int tambah(int a, int b);

Kemudian function dapat ditulis setelah `main()`:

    int tambah(int a, int b)
    {
        return a + b;
    }

Dengan prototype, C++ mengetahui:

    Ada function bernama tambah
    ↓
    Menerima dua int
    ↓
    Mengembalikan int

---

# 29. Function Sebelum `main()`

Untuk program sederhana, kita juga dapat menulis function langsung sebelum `main()`.

Contoh:

    #include <iostream>
    using namespace std;

    int tambah(int a, int b)
    {
        return a + b;
    }

    int main()
    {
        cout << tambah(10, 20);

        return 0;
    }

Cara ini cukup mudah digunakan ketika kita masih belajar.

---

# 30. Contoh Program Lengkap

Sekarang kita gabungkan beberapa function.

    #include <iostream>
    using namespace std;

    int tambah(int a, int b)
    {
        return a + b;
    }

    int kurang(int a, int b)
    {
        return a - b;
    }

    int kali(int a, int b)
    {
        return a * b;
    }

    int main()
    {
        int a = 10;
        int b = 5;

        cout << "Penjumlahan: " << tambah(a, b) << endl;
        cout << "Pengurangan: " << kurang(a, b) << endl;
        cout << "Perkalian  : " << kali(a, b) << endl;

        return 0;
    }

Output:

    Penjumlahan: 15
    Pengurangan: 5
    Perkalian  : 50

---

# 31. Kesalahan yang Sering Terjadi

## 31.1 Lupa Memanggil Function

Membuat:

    void sapa()
    {
        cout << "Halo";
    }

tidak akan menghasilkan output jika tidak ada:

    sapa();

---

## 31.2 Tipe `return` Tidak Sesuai

Contoh:

    int nama()
    {
        return "Ilham";
    }

Ini salah karena function mengatakan akan mengembalikan:

    int

tetapi yang dikembalikan:

    string

Tipe data return harus sesuai.

---

## 31.3 Lupa `return`

Contoh:

    int tambah(int a, int b)
    {
        a + b;
    }

Function bertipe `int` seharusnya mengembalikan nilai:

    int tambah(int a, int b)
    {
        return a + b;
    }

---

## 31.4 Jumlah Parameter Tidak Sesuai

Misalnya:

    void sapa(string nama, int umur)
    {
        // ...
    }

Kemudian dipanggil:

    sapa("Ilham");

Ini salah karena function membutuhkan dua argument:

    string
    int

Pemanggilan yang benar:

    sapa("Ilham", 20);

---

# 🧪 Mini Challenge

## Challenge 01 — Function Sapa

Buat function:

    void sapa(string nama)

Function harus menghasilkan:

    Halo, [nama]!

Contoh:

    sapa("Ilham");

Output:

    Halo, Ilham!

---

## Challenge 02 — Function Penjumlahan

Buat function:

    int tambah(int a, int b)

Function harus mengembalikan hasil penjumlahan.

Contoh:

    tambah(10, 20)

Hasil:

    30

---

## Challenge 03 — Function Genap

Buat function:

    bool isGenap(int angka)

Function mengembalikan:

    true

jika angka genap.

Dan:

    false

jika angka ganjil.

---

## Challenge 04 — Function Nilai

Buat function:

    string cekNilai(int nilai)

Aturan:

    >= 75
    → "Lulus"

    < 75
    → "Tidak Lulus"

---

## Challenge 05 — Function Tampilkan Angka

Buat function:

    void tampilkanAngka(int batas)

Jika dipanggil:

    tampilkanAngka(5);

Output:

    1
    2
    3
    4
    5

Gunakan looping.

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
    while
    do while
    for

Pertemuan 06:

    Function
        ↓
    Parameter
        ↓
    Return

Sekarang kita dapat menggabungkan semuanya:

    Function
       ↓
    Parameter
       ↓
    Looping
       ↓
    Conditional
       ↓
    Return
       ↓
    Output

Contohnya:

    bool cekGenap(int angka)
    {
        if (angka % 2 == 0)
        {
            return true;
        }

        return false;
    }

Di sini sudah terdapat:

    Function
    Parameter
    if
    %
    return
    bool

---

# 🧠 Kesimpulan

Function digunakan untuk membagi program menjadi bagian-bagian yang lebih kecil.

Konsep utama:

    Function
       ↓
    Parameter
       ↓
    Argument
       ↓
    Return

Ada dua bentuk dasar:

    void
    ↓
    tidak mengembalikan nilai

    int / double / string / bool / dll.
    ↓
    dapat mengembalikan nilai

Function membuat program:

- Lebih rapi.
- Lebih mudah dibaca.
- Lebih mudah digunakan kembali.
- Lebih mudah diperbaiki.
- Lebih mudah dikembangkan.

---

# 📁 Struktur Folder Pertemuan 06

    pertemuan-06/
    │
    ├── catatan.md
    │
    ├── 01_function_sederhana.cpp
    ├── 02_function_void.cpp
    ├── 03_function_parameter.cpp
    ├── 04_multiple_parameter.cpp
    ├── 05_function_return.cpp
    ├── 06_return_dengan_perhitungan.cpp
    ├── 07_function_boolean.cpp
    ├── 08_function_dengan_if.cpp
    ├── 09_function_dengan_loop.cpp
    ├── 10_function_dan_loop.cpp
    └── 11_kalkulator_sederhana.cpp

---

# ✅ Checklist

- [ ] Memahami konsep function.
- [ ] Dapat membuat function.
- [ ] Memahami `void`.
- [ ] Memahami parameter.
- [ ] Memahami argument.
- [ ] Dapat membuat function dengan parameter.
- [ ] Dapat membuat function dengan beberapa parameter.
- [ ] Memahami `return`.
- [ ] Dapat membuat function yang mengembalikan `int`.
- [ ] Dapat membuat function yang mengembalikan `string`.
- [ ] Dapat membuat function yang mengembalikan `bool`.
- [ ] Dapat menggunakan function dengan `if`.
- [ ] Dapat menggunakan function dengan looping.
- [ ] Memahami function prototype.
- [ ] Dapat memecah program menjadi beberapa function.

---

# 🚀 Next Step

## Pertemuan 07 — Array

Setelah memahami function, kita akan belajar menyimpan banyak data dengan menggunakan `array`.

Contoh:

    int nilai1 = 80;
    int nilai2 = 90;
    int nilai3 = 75;
    int nilai4 = 88;
    int nilai5 = 92;

Daripada membuat banyak variable, kita dapat menggunakan:

    int nilai[5] = {80, 90, 75, 88, 92};

Kemudian data dapat diproses menggunakan looping.

Materi berikutnya:

    Array
       ↓
    Index
       ↓
    Mengakses data
       ↓
    Mengubah data
       ↓
    Array + Looping
       ↓
    Array + Function

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
    Pertemuan 07
    Array
          ↓
    Program semakin kompleks

---

**Happy Coding! 🚀**