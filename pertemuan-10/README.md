# Pertemuan 10 — Reference

Pada pertemuan ini kita akan mempelajari **Reference** pada C++.

Reference adalah salah satu konsep penting dalam C++ yang berhubungan erat dengan Variable, Function, dan Pointer.

Pada Pertemuan 09 kita sudah belajar tentang Pointer, yaitu bagaimana sebuah Variable dapat diakses melalui alamat memory-nya.

Sekarang kita akan mempelajari cara membuat **alias atau nama lain dari sebuah Variable** menggunakan Reference.

---

## 🎯 Tujuan Pembelajaran

Setelah menyelesaikan pertemuan ini, kita diharapkan mampu:

- Memahami pengertian Reference.
- Membuat Reference.
- Memahami hubungan Reference dengan Variable.
- Mengubah nilai Variable melalui Reference.
- Menggunakan Reference dengan Function.
- Menggunakan Reference sebagai parameter Function.
- Memahami perbedaan Pointer dan Reference.
- Memahami `const Reference`.
- Menggunakan Reference dengan Array.
- Menggunakan Reference dengan String.
- Membuat program sederhana menggunakan Reference.

---

# 1. Apa Itu Reference?

Reference adalah **alias atau nama lain** dari sebuah Variable.

Contohnya:

    int angka = 10;

Kita dapat membuat Reference dari Variable tersebut:

    int& ref = angka;

Sekarang `ref` merupakan nama lain dari `angka`.

Gambaran sederhananya:

    angka
      ↓
    [ 10 ]
      ↑
     ref

Artinya `angka` dan `ref` mengacu pada data yang sama.

---

# 2. Membuat Reference

Syntax dasar Reference adalah:

    tipe_data& nama_reference = variable;

Contoh:

    int angka = 10;

    int& ref = angka;

Kita dapat menggunakan `angka` maupun `ref`:

    cout << angka << endl;
    cout << ref << endl;

Output:

    10
    10

Reference tidak membuat salinan baru dari data.

Reference hanya menjadi nama lain dari Variable yang sudah ada.

---

# 3. Reference sebagai Alias

Perhatikan kode berikut:

    int angka = 10;

    int& ref = angka;

Secara sederhana kita dapat membayangkannya seperti ini:

            Data
             ↓
          ┌─────┐
          │  10 │
          └─────┘
           ↑   ↑
           │   │
         angka ref

`angka` adalah nama asli.

`ref` adalah nama lain atau alias.

Keduanya mengakses data yang sama.

---

# 4. Mengakses Nilai melalui Reference

Kita dapat membaca nilai melalui Reference secara langsung.

Contoh:

    #include <iostream>

    using namespace std;

    int main()
    {
        int angka = 10;

        int& ref = angka;

        cout << "Nilai angka: " << angka << endl;
        cout << "Nilai ref  : " << ref << endl;

        return 0;
    }

Output:

    Nilai angka: 10
    Nilai ref  : 10

Berbeda dengan Pointer, Reference tidak membutuhkan operator `*` ketika kita ingin mendapatkan nilainya.

---

# 5. Mengubah Nilai melalui Reference

Reference juga dapat digunakan untuk mengubah nilai Variable.

Contoh:

    #include <iostream>

    using namespace std;

    int main()
    {
        int angka = 10;

        int& ref = angka;

        cout << "Sebelum: " << angka << endl;

        ref = 100;

        cout << "Sesudah: " << angka << endl;

        return 0;
    }

Output:

    Sebelum: 10
    Sesudah: 100

Ketika kita menulis:

    ref = 100;

sebenarnya nilai `angka` juga berubah.

Karena `ref` adalah alias dari `angka`.

---

# 6. Reference dan Variable

Perhatikan:

    int angka = 10;

    int& ref = angka;

Kemudian:

    ref = 50;

Maka:

    angka = 50
    ref   = 50

Keduanya tetap mengacu pada data yang sama.

Contoh:

    #include <iostream>

    using namespace std;

    int main()
    {
        int angka = 10;

        int& ref = angka;

        ref = 50;

        cout << "angka: " << angka << endl;
        cout << "ref  : " << ref << endl;

        return 0;
    }

Output:

    angka: 50
    ref  : 50

---

# 7. Reference dengan Function

Salah satu penggunaan Reference yang paling penting adalah sebagai parameter Function.

Contoh:

    #include <iostream>

    using namespace std;

    void ubahNilai(int& angka)
    {
        angka = 100;
    }

    int main()
    {
        int angka = 10;

        cout << "Sebelum: " << angka << endl;

        ubahNilai(angka);

        cout << "Sesudah: " << angka << endl;

        return 0;
    }

Output:

    Sebelum: 10
    Sesudah: 100

Function dapat mengubah Variable asli karena parameter Function menggunakan Reference.

---

# 8. Reference sebagai Parameter Function

Perhatikan bagian berikut:

    void ubahNilai(int& angka)

Bagian:

    int& angka

berarti parameter `angka` merupakan Reference.

Saat Function dipanggil:

    ubahNilai(angka);

kita cukup memberikan Variable secara langsung.

Tidak perlu menulis:

    ubahNilai(&angka);

seperti yang dilakukan ketika menggunakan Pointer.

---

# 9. Pointer vs Reference

Pada Pertemuan 09 kita sudah mempelajari Pointer.

Contoh Pointer:

    int angka = 10;

    int* pointer = &angka;

Contoh Reference:

    int angka = 10;

    int& ref = angka;

Secara sederhana:

    Pointer
    ↓
    menyimpan alamat Variable

    Reference
    ↓
    alias dari Variable

---

# 10. Pointer Menggunakan Dereference

Pada Pointer kita menggunakan `*` untuk mendapatkan nilai dari alamat yang ditunjuk.

Contoh:

    int angka = 10;

    int* pointer = &angka;

    cout << *pointer;

Output:

    10

Sedangkan Reference tidak membutuhkan `*`.

Contoh:

    int angka = 10;

    int& ref = angka;

    cout << ref;

Output:

    10

---

# 11. Perbandingan Syntax

## Pointer

    int angka = 10;

    int* pointer = &angka;

    *pointer = 100;

## Reference

    int angka = 10;

    int& ref = angka;

    ref = 100;

Keduanya dapat mengubah nilai `angka`.

Perbedaannya adalah cara penggunaannya.

Pointer bekerja dengan alamat memory.

Reference bekerja sebagai alias dari Variable.

---

# 12. Reference untuk Tukar Nilai

Reference sangat cocok digunakan untuk membuat Function yang dapat menukar nilai dua Variable.

Contoh:

    #include <iostream>

    using namespace std;

    void tukar(int& a, int& b)
    {
        int temp = a;

        a = b;
        b = temp;
    }

    int main()
    {
        int angka1 = 10;
        int angka2 = 20;

        cout << "Sebelum ditukar:" << endl;
        cout << "Angka 1: " << angka1 << endl;
        cout << "Angka 2: " << angka2 << endl;

        tukar(angka1, angka2);

        cout << endl;

        cout << "Setelah ditukar:" << endl;
        cout << "Angka 1: " << angka1 << endl;
        cout << "Angka 2: " << angka2 << endl;

        return 0;
    }

Output:

    Sebelum ditukar:
    Angka 1: 10
    Angka 2: 20

    Setelah ditukar:
    Angka 1: 20
    Angka 2: 10

Perhatikan pemanggilan Function:

    tukar(angka1, angka2);

Kita tidak perlu menggunakan `&` saat memanggil Function.

---

# 13. Reference Tidak Membuat Salinan

Misalnya:

    int angka = 10;

    int& ref = angka;

Reference tidak membuat Variable baru yang berisi nilai `10`.

Reference hanya menjadi alias.

Gambaran:

    angka ────────┐
                  ↓
                [ 10 ]
                  ↑
                  │
    ref ──────────┘

Dengan kata lain:

    angka dan ref
         ↓
    data yang sama

---

# 14. Reference Harus Memiliki Acuan

Reference harus langsung mengacu kepada Variable.

Contoh yang benar:

    int angka = 10;

    int& ref = angka;

Reference seperti ini tidak diperbolehkan:

    int& ref;

Karena Reference harus memiliki Variable yang menjadi acuannya.

---

# 15. Reference Tidak Dapat Diganti Acuannya

Perhatikan kode:

    int angka1 = 10;
    int angka2 = 20;

    int& ref = angka1;

Kemudian:

    ref = angka2;

Hal ini bukan berarti `ref` berpindah ke `angka2`.

Yang terjadi adalah nilai `angka2` diberikan kepada `angka1`.

Hasil:

    angka1 = 20
    angka2 = 20

Reference `ref` tetap mengacu kepada `angka1`.

Jadi Reference tidak dapat dipindahkan untuk mengacu ke Variable lain setelah dibuat.

---

# 16. `const Reference`

Reference juga dapat digunakan bersama `const`.

Contoh:

    const int& ref = angka;

Artinya Reference tersebut hanya dapat digunakan untuk membaca data.

Contoh:

    #include <iostream>

    using namespace std;

    int main()
    {
        int angka = 100;

        const int& ref = angka;

        cout << "Nilai: " << ref << endl;

        return 0;
    }

Output:

    Nilai: 100

---

# 17. Tidak Dapat Mengubah `const Reference`

Contoh berikut tidak diperbolehkan:

    int angka = 100;

    const int& ref = angka;

    ref = 200;

Karena `ref` merupakan `const Reference`.

`const` membuat Reference tersebut tidak dapat digunakan untuk mengubah data.

---

# 18. `const Reference` dengan Function

`const Reference` sering digunakan sebagai parameter Function ketika Function hanya perlu membaca data.

Contoh:

    #include <iostream>
    #include <string>

    using namespace std;

    void tampilkanNama(const string& nama)
    {
        cout << "Nama: " << nama << endl;
    }

    int main()
    {
        string nama = "Ilham";

        tampilkanNama(nama);

        return 0;
    }

Output:

    Nama: Ilham

Function dapat membaca `nama`, tetapi tidak dapat mengubahnya melalui parameter tersebut.

---

# 19. Kenapa Menggunakan `const Reference`?

Misalnya kita mempunyai data yang cukup besar.

Kita tidak selalu ingin membuat salinan data ketika mengirim data tersebut ke Function.

Dengan:

    const string& nama

Function dapat membaca data tanpa membuat salinan object dan tidak dapat mengubah data tersebut melalui parameter.

Untuk sekarang cukup ingat:

    const Reference
    ↓
    bisa membaca
    ↓
    tidak bisa mengubah

---

# 20. Reference dengan String

Reference juga dapat digunakan dengan `string`.

Contoh:

    #include <iostream>
    #include <string>

    using namespace std;

    int main()
    {
        string nama = "Ilham";

        string& ref = nama;

        cout << "Nama: " << ref << endl;

        return 0;
    }

Output:

    Nama: Ilham

Kita juga dapat mengubah String melalui Reference:

    ref = "Budi";

Maka:

    nama = "Budi"

Karena `ref` merupakan alias dari `nama`.

---

# 21. Reference dengan Array

Reference juga dapat digunakan bersama Array.

Contoh:

    #include <iostream>

    using namespace std;

    void tampilkanArray(int (&angka)[5])
    {
        for (int i = 0; i < 5; i++)
        {
            cout << angka[i] << endl;
        }
    }

    int main()
    {
        int angka[5] = {
            10,
            20,
            30,
            40,
            50
        };

        tampilkanArray(angka);

        return 0;
    }

Output:

    10
    20
    30
    40
    50

Untuk sekarang kita tidak perlu terlalu fokus pada syntax:

    int (&angka)[5]

Cukup pahami bahwa Array juga dapat digunakan bersama Reference.

---

# 22. Mengubah Array melalui Reference

Reference juga dapat digunakan untuk mengubah isi Array.

Contoh:

    #include <iostream>

    using namespace std;

    void ubahArray(int (&angka)[5])
    {
        for (int i = 0; i < 5; i++)
        {
            angka[i] *= 2;
        }
    }

    int main()
    {
        int angka[5] = {
            10,
            20,
            30,
            40,
            50
        };

        ubahArray(angka);

        for (int i = 0; i < 5; i++)
        {
            cout << angka[i] << endl;
        }

        return 0;
    }

Output:

    20
    40
    60
    80
    100

---

# 23. Contoh Program Reference Sederhana

    #include <iostream>

    using namespace std;

    int main()
    {
        int angka = 50;

        int& ref = angka;

        cout << "Nilai awal : " << angka << endl;

        ref = 100;

        cout << "Nilai akhir: " << angka << endl;

        return 0;
    }

Output:

    Nilai awal : 50
    Nilai akhir: 100

---

# 24. Contoh Reference dengan Function

    #include <iostream>

    using namespace std;

    void tambahSepuluh(int& angka)
    {
        angka += 10;
    }

    int main()
    {
        int angka = 50;

        cout << "Sebelum: " << angka << endl;

        tambahSepuluh(angka);

        cout << "Sesudah: " << angka << endl;

        return 0;
    }

Output:

    Sebelum: 50
    Sesudah: 60

---

# 25. Perbedaan Cara Memanggil Function

## Menggunakan Pointer

Function:

    void ubah(int* angka)
    {
        *angka = 100;
    }

Pemanggilan:

    ubah(&nilai);

Kita mengirim alamat Variable menggunakan `&`.

---

## Menggunakan Reference

Function:

    void ubah(int& angka)
    {
        angka = 100;
    }

Pemanggilan:

    ubah(nilai);

Kita cukup mengirim Variable secara langsung.

---

# 26. Tabel Perbandingan Pointer dan Reference

| Pointer | Reference |
|---|---|
| Menyimpan alamat | Alias dari Variable |
| Menggunakan `*` untuk dereference | Tidak membutuhkan `*` |
| Menggunakan `&variable` saat mengirim alamat | Langsung mengirim Variable |
| Dapat menggunakan `nullptr` | Tidak seperti Pointer |
| Dapat diarahkan ke object lain | Tidak dapat mengganti acuan |
| Mendukung pointer arithmetic | Tidak mendukung pointer arithmetic |
| Cocok untuk manipulasi alamat | Cocok untuk parameter dan alias |

---

# 27. Analogi Sederhana

Bayangkan kita mempunyai sebuah rumah.

Rumah tersebut mempunyai alamat:

    Jl. Contoh No. 10

Pointer dapat kita bayangkan seperti sesuatu yang menyimpan alamat rumah tersebut.

    Pointer
       ↓
    Alamat rumah
       ↓
      Rumah

Sedangkan Reference seperti nama lain untuk rumah yang sama.

Misalnya:

    Nama resmi : Rumah Ilham
    Nama lain  : Rumah Utama

Keduanya mengacu pada rumah yang sama.

Jadi:

    Pointer
    ↓
    alamat

    Reference
    ↓
    alias / nama lain

---

# 28. Syntax Penting

## Membuat Variable

    int angka = 10;

## Membuat Reference

    int& ref = angka;

## Membaca Reference

    cout << ref;

## Mengubah nilai melalui Reference

    ref = 100;

## Reference sebagai parameter Function

    void ubah(int& angka)
    {
        angka = 100;
    }

## Memanggil Function

    ubah(angka);

## Membuat Const Reference

    const int& ref = angka;

---

# 🧪 Mini Challenge

Setelah memahami materi, coba kerjakan beberapa Challenge berikut.

---

## Challenge 01 — Reference Sederhana

Buat Variable:

    int angka = 50;

Kemudian buat Reference yang mengacu pada `angka`.

Ubah nilai `angka` melalui Reference menjadi:

    100

Target output:

    Sebelum: 50
    Sesudah: 100

---

## Challenge 02 — Function Tambah

Buat Function:

    void tambah(...)

Function tersebut harus menerima sebuah angka menggunakan Reference.

Kemudian tambahkan angka tersebut dengan `10`.

Contoh:

    Sebelum: 50
    Sesudah: 60

---

## Challenge 03 — Tukar Nilai

Buat Function:

    void tukar(...)

Gunakan Reference untuk menukar dua Variable.

Data awal:

    A = 10
    B = 20

Setelah Function dijalankan:

    A = 20
    B = 10

---

## Challenge 04 — Ubah Array

Buat Array:

    int angka[5] = {
        10,
        20,
        30,
        40,
        50
    };

Buat Function menggunakan Reference untuk mengalikan seluruh nilai dengan `2`.

Target output:

    20
    40
    60
    80
    100

---

# 📁 Struktur Folder Pertemuan 10

Source code Pertemuan 10 dapat disusun seperti berikut:

    pertemuan-10/
    │
    ├── catatan.md
    │
    ├── 01_reference_sederhana.cpp
    ├── 02_mengubah_nilai_reference.cpp
    ├── 03_reference_dengan_function.cpp
    ├── 04_reference_parameter.cpp
    ├── 05_pointer_vs_reference.cpp
    ├── 06_tukar_nilai_reference.cpp
    ├── 07_const_reference.cpp
    ├── 08_const_reference_function.cpp
    ├── 09_reference_array.cpp
    ├── 10_reference_string.cpp
    └── 11_challenge_reference.cpp

---

# 🧠 Checklist Pembelajaran

- [ ] Memahami pengertian Reference.
- [ ] Memahami Reference sebagai alias.
- [ ] Dapat membuat Reference.
- [ ] Dapat membaca nilai melalui Reference.
- [ ] Dapat mengubah nilai melalui Reference.
- [ ] Memahami Reference sebagai parameter Function.
- [ ] Dapat menggunakan Reference untuk menukar nilai.
- [ ] Memahami perbedaan Pointer dan Reference.
- [ ] Memahami `const Reference`.
- [ ] Memahami Reference dengan String.
- [ ] Memahami dasar Reference dengan Array.
- [ ] Dapat membuat program sederhana menggunakan Reference.
- [ ] Dapat mengerjakan Challenge Reference.

---

# 📚 Alur Pembelajaran

Perjalanan pembelajaran C++ kita sampai saat ini:

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
    Pointer
            ↓
    Pertemuan 10
    Reference

Reference merupakan materi yang sangat berkaitan dengan Pointer.

Jika Pointer berfokus pada alamat memory, Reference lebih berfokus pada alias atau nama lain dari sebuah Variable.

---

# 🎯 Kesimpulan

Reference adalah alias atau nama lain dari sebuah Variable.

Contoh:

    int angka = 10;

    int& ref = angka;

Kemudian:

    ref = 100;

akan membuat:

    angka = 100

karena `ref` dan `angka` mengacu pada data yang sama.

Konsep utama yang perlu diingat:

    & pada Reference
    ↓
    membuat alias

    Reference
    ↓
    nama lain dari Variable

Sedangkan Pointer:

    & pada Pointer
    ↓
    mengambil alamat

    Pointer
    ↓
    menyimpan alamat

    *
    ↓
    mengakses nilai dari alamat

Jangan sampai tertukar antara penggunaan `&` pada Reference dan penggunaan `&` untuk mengambil alamat pada Pointer.

---

# 🚀 Penutup

Pada Pertemuan 10 kita sudah mengenal Reference dan bagaimana Reference dapat digunakan bersama Variable, Function, Array, dan String.

Konsep ini akan menjadi bekal penting untuk memahami materi C++ yang lebih lanjut, terutama ketika kita mulai masuk ke konsep yang lebih dekat dengan **Object-Oriented Programming dan Struktur Data**.

Tetap latihan dengan membuat program kecil dan jangan hanya menghafalkan syntax.

**Keep Learning, Keep Coding! 🚀**