# Pertemuan 11 — Struct

Pada pertemuan ini kita akan mempelajari **Struct (Structure)** pada C++.

Struct digunakan untuk mengelompokkan beberapa data yang berbeda ke dalam satu kesatuan.

Jika sebelumnya kita menggunakan Array untuk menyimpan banyak data dengan tipe yang sama, Struct memungkinkan kita menggabungkan data dengan tipe yang berbeda.

Contohnya, kita ingin menyimpan data seorang mahasiswa:

- Nama
- Umur
- NIM
- Nilai

Data tersebut memiliki tipe yang berbeda.

Dengan Struct, kita dapat menggabungkan semuanya menjadi satu kesatuan data.

---

## 🎯 Tujuan Pembelajaran

Setelah menyelesaikan pertemuan ini, kita diharapkan mampu:

- Memahami pengertian Struct.
- Membuat Struct.
- Membuat Variable dari Struct.
- Mengisi data Struct.
- Mengakses data Struct.
- Mengubah data Struct.
- Menggunakan Struct dengan Function.
- Menggunakan Array of Struct.
- Menggunakan Struct dengan Pointer.
- Menggunakan Struct dengan Reference.
- Memahami perbedaan Struct dan Array.
- Memahami dasar Struct sebagai fondasi Struktur Data.

---

# 1. Apa Itu Struct?

Struct adalah fitur C++ yang memungkinkan kita membuat tipe data sendiri yang dapat berisi beberapa data dengan tipe berbeda.

Contoh:

    struct Mahasiswa
    {
        string nama;
        int umur;
        float ipk;
    };

Struct `Mahasiswa` memiliki tiga data:

    nama
    umur
    ipk

Tipe datanya juga berbeda:

    string
    int
    float

---

# 2. Kenapa Menggunakan Struct?

Bayangkan kita ingin menyimpan data mahasiswa.

Tanpa Struct:

    string nama = "Ilham";
    int umur = 20;
    float ipk = 3.50;

Data tersebut masih terpisah.

Dengan Struct:

    struct Mahasiswa
    {
        string nama;
        int umur;
        float ipk;
    };

Kemudian kita dapat membuat satu Variable:

    Mahasiswa mahasiswa;

Sekarang ketiga data tersebut berada dalam satu kesatuan.

---

# 3. Membuat Struct

Syntax dasar:

    struct NamaStruct
    {
        tipe_data nama_data;
        tipe_data nama_data;
    };

Contoh:

    struct Mahasiswa
    {
        string nama;
        int umur;
        float ipk;
    };

Di sini kita membuat Struct bernama `Mahasiswa`.

Struct tersebut memiliki:

    string nama;
    int umur;
    float ipk;

---

# 4. Membuat Variable Struct

Setelah Struct dibuat, kita dapat membuat Variable dari Struct tersebut.

Contoh:

    struct Mahasiswa
    {
        string nama;
        int umur;
        float ipk;
    };

Kemudian:

    Mahasiswa mahasiswa;

Sekarang `mahasiswa` merupakan Variable dengan tipe `Mahasiswa`.

Gambaran sederhananya:

    Mahasiswa
        ↓
    ┌─────────────────┐
    │ nama            │
    │ umur            │
    │ ipk             │
    └─────────────────┘

---

# 5. Mengakses Data Struct

Untuk mengakses data di dalam Struct, kita menggunakan operator titik `.`.

Contoh:

    mahasiswa.nama

    mahasiswa.umur

    mahasiswa.ipk

Contoh lengkap:

    #include <iostream>
    #include <string>

    using namespace std;

    struct Mahasiswa
    {
        string nama;
        int umur;
        float ipk;
    };

    int main()
    {
        Mahasiswa mahasiswa;

        mahasiswa.nama = "Ilham";
        mahasiswa.umur = 20;
        mahasiswa.ipk = 3.50;

        cout << "Nama: " << mahasiswa.nama << endl;
        cout << "Umur: " << mahasiswa.umur << endl;
        cout << "IPK : " << mahasiswa.ipk << endl;

        return 0;
    }

Output:

    Nama: Ilham
    Umur: 20
    IPK : 3.5

---

# 6. Operator Titik `.`

Operator titik digunakan untuk mengakses Member dari Struct.

Contoh:

    mahasiswa.nama

Artinya:

    Variable mahasiswa
          ↓
    Member nama

Begitu juga:

    mahasiswa.umur

dan:

    mahasiswa.ipk

Gambaran:

    mahasiswa
        │
        ├── nama
        ├── umur
        └── ipk

---

# 7. Struct dengan Banyak Data

Struct dapat memiliki banyak Member.

Contoh:

    struct Mahasiswa
    {
        string nama;
        string nim;
        string jurusan;
        int umur;
        float ipk;
    };

Kemudian:

    Mahasiswa mahasiswa;

Kita dapat mengisi semua datanya:

    mahasiswa.nama = "Ilham";
    mahasiswa.nim = "123456";
    mahasiswa.jurusan = "Informatika";
    mahasiswa.umur = 20;
    mahasiswa.ipk = 3.50;

---

# 8. Contoh Program Data Mahasiswa

    #include <iostream>
    #include <string>

    using namespace std;

    struct Mahasiswa
    {
        string nama;
        string nim;
        string jurusan;
        int umur;
        float ipk;
    };

    int main()
    {
        Mahasiswa mahasiswa;

        mahasiswa.nama = "Ilham";
        mahasiswa.nim = "123456";
        mahasiswa.jurusan = "Informatika";
        mahasiswa.umur = 20;
        mahasiswa.ipk = 3.50;

        cout << "=== Data Mahasiswa ===" << endl;
        cout << "Nama    : " << mahasiswa.nama << endl;
        cout << "NIM     : " << mahasiswa.nim << endl;
        cout << "Jurusan : " << mahasiswa.jurusan << endl;
        cout << "Umur    : " << mahasiswa.umur << endl;
        cout << "IPK     : " << mahasiswa.ipk << endl;

        return 0;
    }

Output:

    === Data Mahasiswa ===
    Nama    : Ilham
    NIM     : 123456
    Jurusan : Informatika
    Umur    : 20
    IPK     : 3.5

---

# 9. Struct dengan Input User

Struct juga dapat digunakan bersama `cin`.

Contoh:

    #include <iostream>
    #include <string>

    using namespace std;

    struct Mahasiswa
    {
        string nama;
        int umur;
        float ipk;
    };

    int main()
    {
        Mahasiswa mahasiswa;

        cout << "Masukkan nama: ";
        cin >> mahasiswa.nama;

        cout << "Masukkan umur: ";
        cin >> mahasiswa.umur;

        cout << "Masukkan IPK: ";
        cin >> mahasiswa.ipk;

        cout << endl;

        cout << "=== Data Mahasiswa ===" << endl;
        cout << "Nama: " << mahasiswa.nama << endl;
        cout << "Umur: " << mahasiswa.umur << endl;
        cout << "IPK : " << mahasiswa.ipk << endl;

        return 0;
    }

---

# 10. Inisialisasi Struct

Struct dapat langsung diberikan nilai ketika dibuat.

Contoh:

    struct Mahasiswa
    {
        string nama;
        int umur;
        float ipk;
    };

Kemudian:

    Mahasiswa mahasiswa = {
        "Ilham",
        20,
        3.50
    };

Data akan diisi berdasarkan urutan Member.

Urutannya:

    nama
    umur
    ipk

Sehingga:

    nama = "Ilham"
    umur = 20
    ipk = 3.50

---

# 11. Contoh Inisialisasi Struct

    #include <iostream>
    #include <string>

    using namespace std;

    struct Mahasiswa
    {
        string nama;
        int umur;
        float ipk;
    };

    int main()
    {
        Mahasiswa mahasiswa = {
            "Ilham",
            20,
            3.50
        };

        cout << "Nama: " << mahasiswa.nama << endl;
        cout << "Umur: " << mahasiswa.umur << endl;
        cout << "IPK : " << mahasiswa.ipk << endl;

        return 0;
    }

---

# 12. Membuat Banyak Variable Struct

Kita dapat membuat lebih dari satu Variable dari Struct yang sama.

Contoh:

    Mahasiswa mahasiswa1;
    Mahasiswa mahasiswa2;

Kemudian:

    mahasiswa1.nama = "Ilham";
    mahasiswa1.umur = 20;

    mahasiswa2.nama = "Budi";
    mahasiswa2.umur = 21;

Masing-masing memiliki data sendiri.

Gambaran:

    Mahasiswa
        │
        ├── mahasiswa1
        │     ├── nama
        │     └── umur
        │
        └── mahasiswa2
              ├── nama
              └── umur

---

# 13. Contoh Dua Mahasiswa

    #include <iostream>
    #include <string>

    using namespace std;

    struct Mahasiswa
    {
        string nama;
        int umur;
    };

    int main()
    {
        Mahasiswa mahasiswa1;
        Mahasiswa mahasiswa2;

        mahasiswa1.nama = "Ilham";
        mahasiswa1.umur = 20;

        mahasiswa2.nama = "Budi";
        mahasiswa2.umur = 21;

        cout << "Mahasiswa 1" << endl;
        cout << "Nama: " << mahasiswa1.nama << endl;
        cout << "Umur: " << mahasiswa1.umur << endl;

        cout << endl;

        cout << "Mahasiswa 2" << endl;
        cout << "Nama: " << mahasiswa2.nama << endl;
        cout << "Umur: " << mahasiswa2.umur << endl;

        return 0;
    }

---

# 14. Array of Struct

Struct menjadi semakin menarik ketika digabungkan dengan Array.

Kita dapat membuat Array yang berisi banyak Struct.

Contoh:

    Mahasiswa mahasiswa[3];

Artinya kita memiliki tiga data `Mahasiswa`.

Gambaran:

    mahasiswa[0]
        ↓
        nama
        umur
        ipk

    mahasiswa[1]
        ↓
        nama
        umur
        ipk

    mahasiswa[2]
        ↓
        nama
        umur
        ipk

---

# 15. Contoh Array of Struct

    #include <iostream>
    #include <string>

    using namespace std;

    struct Mahasiswa
    {
        string nama;
        int umur;
        float ipk;
    };

    int main()
    {
        Mahasiswa mahasiswa[3];

        mahasiswa[0].nama = "Ilham";
        mahasiswa[0].umur = 20;
        mahasiswa[0].ipk = 3.50;

        mahasiswa[1].nama = "Budi";
        mahasiswa[1].umur = 21;
        mahasiswa[1].ipk = 3.70;

        mahasiswa[2].nama = "Andi";
        mahasiswa[2].umur = 19;
        mahasiswa[2].ipk = 3.40;

        for (int i = 0; i < 3; i++)
        {
            cout << "Mahasiswa ke-" << i + 1 << endl;
            cout << "Nama: " << mahasiswa[i].nama << endl;
            cout << "Umur: " << mahasiswa[i].umur << endl;
            cout << "IPK : " << mahasiswa[i].ipk << endl;
            cout << endl;
        }

        return 0;
    }

---

# 16. Array of Struct dengan Input

Kita juga dapat meminta user mengisi banyak data.

Contoh:

    #include <iostream>
    #include <string>

    using namespace std;

    struct Mahasiswa
    {
        string nama;
        int umur;
        float ipk;
    };

    int main()
    {
        Mahasiswa mahasiswa[3];

        for (int i = 0; i < 3; i++)
        {
            cout << "Mahasiswa ke-" << i + 1 << endl;

            cout << "Nama: ";
            cin >> mahasiswa[i].nama;

            cout << "Umur: ";
            cin >> mahasiswa[i].umur;

            cout << "IPK: ";
            cin >> mahasiswa[i].ipk;

            cout << endl;
        }

        cout << "=== Data Mahasiswa ===" << endl;

        for (int i = 0; i < 3; i++)
        {
            cout << "Mahasiswa ke-" << i + 1 << endl;
            cout << "Nama: " << mahasiswa[i].nama << endl;
            cout << "Umur: " << mahasiswa[i].umur << endl;
            cout << "IPK : " << mahasiswa[i].ipk << endl;
            cout << endl;
        }

        return 0;
    }

---

# 17. Struct dengan Function

Struct juga dapat dikirim ke Function.

Contoh:

    void tampilkanMahasiswa(Mahasiswa mahasiswa)
    {
        cout << mahasiswa.nama << endl;
    }

Kemudian:

    tampilkanMahasiswa(mahasiswa);

Function menerima satu data Struct.

---

# 18. Contoh Struct dengan Function

    #include <iostream>
    #include <string>

    using namespace std;

    struct Mahasiswa
    {
        string nama;
        int umur;
        float ipk;
    };

    void tampilkanMahasiswa(Mahasiswa mahasiswa)
    {
        cout << "Nama: " << mahasiswa.nama << endl;
        cout << "Umur: " << mahasiswa.umur << endl;
        cout << "IPK : " << mahasiswa.ipk << endl;
    }

    int main()
    {
        Mahasiswa mahasiswa;

        mahasiswa.nama = "Ilham";
        mahasiswa.umur = 20;
        mahasiswa.ipk = 3.50;

        tampilkanMahasiswa(mahasiswa);

        return 0;
    }

---

# 19. Struct dengan Reference

Struct juga dapat dikirim menggunakan Reference.

Contoh:

    void tampilkanMahasiswa(const Mahasiswa& mahasiswa)
    {
        cout << mahasiswa.nama << endl;
    }

Kita menggunakan:

    const Mahasiswa& mahasiswa

Artinya Function menerima Reference tetapi tidak boleh mengubah data Struct.

---

# 20. Contoh Struct dengan `const Reference`

    #include <iostream>
    #include <string>

    using namespace std;

    struct Mahasiswa
    {
        string nama;
        int umur;
        float ipk;
    };

    void tampilkanMahasiswa(const Mahasiswa& mahasiswa)
    {
        cout << "Nama: " << mahasiswa.nama << endl;
        cout << "Umur: " << mahasiswa.umur << endl;
        cout << "IPK : " << mahasiswa.ipk << endl;
    }

    int main()
    {
        Mahasiswa mahasiswa;

        mahasiswa.nama = "Ilham";
        mahasiswa.umur = 20;
        mahasiswa.ipk = 3.50;

        tampilkanMahasiswa(mahasiswa);

        return 0;
    }

---

# 21. Mengubah Struct melalui Reference

Reference juga memungkinkan Function mengubah Struct asli.

Contoh:

    void ubahUmur(Mahasiswa& mahasiswa)
    {
        mahasiswa.umur++;
    }

Jika umur awal:

    20

Setelah Function dijalankan:

    21

---

# 22. Contoh Mengubah Struct

    #include <iostream>
    #include <string>

    using namespace std;

    struct Mahasiswa
    {
        string nama;
        int umur;
    };

    void tambahUmur(Mahasiswa& mahasiswa)
    {
        mahasiswa.umur++;
    }

    int main()
    {
        Mahasiswa mahasiswa;

        mahasiswa.nama = "Ilham";
        mahasiswa.umur = 20;

        cout << "Sebelum: " << mahasiswa.umur << endl;

        tambahUmur(mahasiswa);

        cout << "Sesudah: " << mahasiswa.umur << endl;

        return 0;
    }

Output:

    Sebelum: 20
    Sesudah: 21

---

# 23. Struct dengan Pointer

Struct juga dapat digunakan bersama Pointer.

Contoh:

    Mahasiswa mahasiswa;

    Mahasiswa* pointer = &mahasiswa;

Sekarang Pointer menunjuk ke Struct `mahasiswa`.

Untuk mengakses Member melalui Pointer, kita dapat menggunakan operator `->`.

Contoh:

    pointer->nama

    pointer->umur

---

# 24. Operator `->`

Ketika menggunakan Variable Struct biasa:

    mahasiswa.nama

Ketika menggunakan Pointer ke Struct:

    pointer->nama

Gambaran:

    Struct biasa
        ↓
    mahasiswa.nama

    Pointer Struct
        ↓
    pointer->nama

Operator `->` digunakan untuk mengakses Member Struct melalui Pointer.

---

# 25. Contoh Struct dengan Pointer

    #include <iostream>
    #include <string>

    using namespace std;

    struct Mahasiswa
    {
        string nama;
        int umur;
    };

    int main()
    {
        Mahasiswa mahasiswa;

        mahasiswa.nama = "Ilham";
        mahasiswa.umur = 20;

        Mahasiswa* pointer = &mahasiswa;

        cout << "Nama: " << pointer->nama << endl;
        cout << "Umur: " << pointer->umur << endl;

        return 0;
    }

Output:

    Nama: Ilham
    Umur: 20

---

# 26. Perbedaan `.` dan `->`

Ketika kita mempunyai Struct biasa:

    Mahasiswa mahasiswa;

Gunakan:

    mahasiswa.nama

Ketika kita mempunyai Pointer ke Struct:

    Mahasiswa* pointer = &mahasiswa;

Gunakan:

    pointer->nama

Ringkasnya:

    Struct biasa
    .
    ↓
    mahasiswa.nama

    Pointer ke Struct
    ->
    ↓
    pointer->nama

---

# 27. Struct di Dalam Struct

Struct dapat memiliki Struct lain sebagai Member.

Contoh:

    struct Alamat
    {
        string kota;
        string provinsi;
    };

    struct Mahasiswa
    {
        string nama;
        Alamat alamat;
    };

Sekarang `Mahasiswa` memiliki Struct `Alamat`.

---

# 28. Contoh Struct Bersarang

    #include <iostream>
    #include <string>

    using namespace std;

    struct Alamat
    {
        string kota;
        string provinsi;
    };

    struct Mahasiswa
    {
        string nama;
        Alamat alamat;
    };

    int main()
    {
        Mahasiswa mahasiswa;

        mahasiswa.nama = "Ilham";
        mahasiswa.alamat.kota = "Bogor";
        mahasiswa.alamat.provinsi = "Jawa Barat";

        cout << "Nama     : " << mahasiswa.nama << endl;
        cout << "Kota     : " << mahasiswa.alamat.kota << endl;
        cout << "Provinsi : " << mahasiswa.alamat.provinsi << endl;

        return 0;
    }

---

# 29. Struct dan Array

Kita juga dapat memasukkan Array ke dalam Struct.

Contoh:

    struct Mahasiswa
    {
        string nama;
        int nilai[3];
    };

Sekarang setiap Mahasiswa memiliki tiga nilai.

Contoh:

    mahasiswa.nilai[0] = 80;
    mahasiswa.nilai[1] = 90;
    mahasiswa.nilai[2] = 85;

---

# 30. Contoh Struct dengan Array

    #include <iostream>
    #include <string>

    using namespace std;

    struct Mahasiswa
    {
        string nama;
        int nilai[3];
    };

    int main()
    {
        Mahasiswa mahasiswa;

        mahasiswa.nama = "Ilham";

        mahasiswa.nilai[0] = 80;
        mahasiswa.nilai[1] = 90;
        mahasiswa.nilai[2] = 85;

        cout << "Nama: " << mahasiswa.nama << endl;

        for (int i = 0; i < 3; i++)
        {
            cout << "Nilai " << i + 1 << ": "
                 << mahasiswa.nilai[i] << endl;
        }

        return 0;
    }

Output:

    Nama: Ilham
    Nilai 1: 80
    Nilai 2: 90
    Nilai 3: 85

---

# 31. Struct vs Array

Array digunakan untuk menyimpan banyak data dengan tipe yang sama.

Contoh:

    int nilai[5];

Semua datanya bertipe `int`.

Struct dapat menyimpan beberapa data dengan tipe berbeda.

Contoh:

    struct Mahasiswa
    {
        string nama;
        int umur;
        float ipk;
    };

Perbandingan:

    Array
    ↓
    banyak data
    ↓
    tipe biasanya sama

    Struct
    ↓
    beberapa data
    ↓
    tipe dapat berbeda

---

# 32. Array of Struct

Ketika Array digabungkan dengan Struct, kita dapat membuat kumpulan object/data yang memiliki struktur sama.

Contoh:

    Mahasiswa mahasiswa[3];

Gambaran:

    mahasiswa[0]
    ├── nama
    ├── umur
    └── ipk

    mahasiswa[1]
    ├── nama
    ├── umur
    └── ipk

    mahasiswa[2]
    ├── nama
    ├── umur
    └── ipk

Ini merupakan konsep yang sangat penting karena akan sering digunakan dalam pemrograman dan Struktur Data.

---

# 33. Contoh Data Barang

Struct tidak hanya digunakan untuk Mahasiswa.

Kita juga dapat membuat Struct untuk Barang.

Contoh:

    struct Barang
    {
        string nama;
        int harga;
        int stok;
    };

Kemudian:

    Barang barang;

    barang.nama = "Keyboard";
    barang.harga = 150000;
    barang.stok = 10;

---

# 34. Contoh Program Data Barang

    #include <iostream>
    #include <string>

    using namespace std;

    struct Barang
    {
        string nama;
        int harga;
        int stok;
    };

    int main()
    {
        Barang barang;

        barang.nama = "Keyboard";
        barang.harga = 150000;
        barang.stok = 10;

        cout << "=== Data Barang ===" << endl;
        cout << "Nama  : " << barang.nama << endl;
        cout << "Harga : " << barang.harga << endl;
        cout << "Stok  : " << barang.stok << endl;

        return 0;
    }

---

# 35. Struct sebagai Tipe Data Sendiri

Ketika kita membuat:

    struct Mahasiswa
    {
        string nama;
        int umur;
    };

Kita sebenarnya membuat sebuah tipe data baru bernama:

    Mahasiswa

Setelah itu kita dapat membuat Variable:

    Mahasiswa mahasiswa1;
    Mahasiswa mahasiswa2;
    Mahasiswa mahasiswa3;

Ini salah satu alasan Struct sangat berguna.

Kita dapat membuat tipe data yang sesuai dengan kebutuhan program.

---

# 36. Gambaran Konsep Struct

Secara sederhana:

    struct Mahasiswa
    {
        string nama;
        int umur;
        float ipk;
    };

Dapat dibayangkan sebagai sebuah wadah:

    Mahasiswa
    ┌──────────────────────┐
    │ nama  → "Ilham"      │
    │ umur  → 20           │
    │ ipk   → 3.50         │
    └──────────────────────┘

Kemudian kita dapat membuat banyak wadah:

    mahasiswa1
    mahasiswa2
    mahasiswa3

Masing-masing memiliki struktur yang sama.

---

# 🧪 Mini Challenge

Setelah memahami materi, coba kerjakan Challenge berikut.

---

## Challenge 01 — Struct Sederhana

Buat Struct bernama `Buku`.

Struct memiliki:

    judul
    penulis
    tahun

Gunakan tipe data yang sesuai.

Kemudian buat satu Variable:

    Buku buku;

Isi datanya dan tampilkan.

Target output:

    === Data Buku ===
    Judul   : ...
    Penulis : ...
    Tahun   : ...

---

## Challenge 02 — Data Mahasiswa

Buat Struct:

    Mahasiswa

Dengan Member:

    nama
    nim
    umur
    ipk

Kemudian tampilkan seluruh data.

---

## Challenge 03 — Array of Struct

Buat Struct `Mahasiswa`.

Kemudian buat:

    Mahasiswa mahasiswa[3];

Isi tiga data mahasiswa dan tampilkan menggunakan Looping.

---

## Challenge 04 — Function Struct

Buat Function:

    void tampilkanMahasiswa(...)

Function tersebut menerima Struct Mahasiswa dan menampilkan datanya.

---

## Challenge 05 — Reference Struct

Buat Function:

    void tambahUmur(...)

Function menerima Struct menggunakan Reference.

Kemudian tambahkan umur mahasiswa sebanyak `1`.

Contoh:

    Sebelum: 20
    Sesudah: 21

---

# 📁 Struktur Folder Pertemuan 11

Source code Pertemuan 11 dapat disusun seperti berikut:

    pertemuan-11/
    │
    ├── catatan.md
    │
    ├── 01_struct_sederhana.cpp
    ├── 02_mengakses_struct.cpp
    ├── 03_input_struct.cpp
    ├── 04_inisialisasi_struct.cpp
    ├── 05_banyak_struct.cpp
    ├── 06_array_of_struct.cpp
    ├── 07_struct_dengan_function.cpp
    ├── 08_struct_dengan_reference.cpp
    ├── 09_struct_dengan_pointer.cpp
    ├── 10_struct_bersarang.cpp
    └── 11_challenge_struct.cpp

---

# 🧠 Checklist Pembelajaran

- [ ] Memahami pengertian Struct.
- [ ] Dapat membuat Struct.
- [ ] Dapat membuat Variable dari Struct.
- [ ] Dapat mengisi data Struct.
- [ ] Dapat mengakses Member Struct.
- [ ] Memahami operator `.`
- [ ] Dapat mengubah data Struct.
- [ ] Dapat menggunakan Struct dengan Input.
- [ ] Dapat membuat Array of Struct.
- [ ] Dapat menggunakan Struct dengan Function.
- [ ] Dapat menggunakan Struct dengan Reference.
- [ ] Memahami Pointer pada Struct.
- [ ] Memahami operator `->`.
- [ ] Memahami Struct bersarang.
- [ ] Memahami Struct yang memiliki Array.
- [ ] Memahami perbedaan Array dan Struct.
- [ ] Dapat membuat program sederhana menggunakan Struct.

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
            ↓
    Pertemuan 11
    Struct

---

# 🔗 Hubungan Materi

Pada pertemuan sebelumnya:

    Pointer
       ↓
    Reference
       ↓
    Struct

Sekarang kita mulai menggabungkan beberapa konsep yang sudah dipelajari.

Contohnya:

    Struct
       +
    Array
       ↓
    Array of Struct

Kemudian:

    Struct
       +
    Function
       ↓
    Function dengan Struct

Kemudian:

    Struct
       +
    Reference
       ↓
    Struct dengan Reference

Dan:

    Struct
       +
    Pointer
       ↓
    Pointer ke Struct

Konsep-konsep tersebut akan menjadi dasar penting untuk materi Struktur Data.

---

# 🎯 Kesimpulan

Struct adalah fitur C++ yang memungkinkan kita membuat tipe data sendiri dengan menggabungkan beberapa Member.

Contoh:

    struct Mahasiswa
    {
        string nama;
        int umur;
        float ipk;
    };

Kemudian kita dapat membuat Variable:

    Mahasiswa mahasiswa;

Mengisi data:

    mahasiswa.nama = "Ilham";
    mahasiswa.umur = 20;
    mahasiswa.ipk = 3.50;

Mengakses data:

    cout << mahasiswa.nama;

Operator `.` digunakan untuk mengakses Member dari Struct biasa.

Jika Struct digunakan melalui Pointer, kita menggunakan operator `->`.

Contoh:

    Mahasiswa* pointer = &mahasiswa;

    cout << pointer->nama;

Struct juga dapat digabungkan dengan Array:

    Mahasiswa mahasiswa[3];

Dan dapat digunakan bersama Function:

    void tampilkanMahasiswa(const Mahasiswa& mahasiswa)
    {
        cout << mahasiswa.nama;
    }

Dengan memahami Struct, kita sudah mulai masuk ke konsep yang lebih dekat dengan **Struktur Data**.

---

# 🚀 Penutup

Pada Pertemuan 11 kita telah mempelajari Struct sebagai cara untuk membuat tipe data yang dapat menggabungkan beberapa data berbeda dalam satu kesatuan.

Konsep penting yang perlu diingat:

    Struct
    ↓
    membuat tipe data sendiri
    ↓
    memiliki beberapa Member
    ↓
    dapat berisi tipe data berbeda

Kemudian Struct dapat dikombinasikan dengan:

    Array
    Function
    Reference
    Pointer

Jangan hanya menghafalkan syntax.

Cobalah membuat Struct dengan berbagai kasus sederhana seperti:

    Mahasiswa
    Buku
    Barang
    Produk
    Kendaraan

Semakin sering membuat Struct sendiri, semakin mudah memahami konsepnya.

**Keep Learning, Keep Coding! 🚀**