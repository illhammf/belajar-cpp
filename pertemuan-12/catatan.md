# Pertemuan 12 — Class & Object Dasar

Pada pertemuan ini kita mulai masuk ke konsep **Object-Oriented Programming (OOP)** menggunakan C++.

Sebelumnya kita sudah mempelajari `Struct` yang digunakan untuk mengelompokkan beberapa data menjadi satu kesatuan.

Sekarang kita akan melangkah lebih jauh dengan mempelajari **Class dan Object**.

---

## 🎯 Tujuan Pembelajaran

Setelah menyelesaikan pertemuan ini, kita diharapkan mampu:

- Memahami pengertian Class.
- Memahami pengertian Object.
- Membuat Class sederhana.
- Membuat Object dari sebuah Class.
- Memahami Attribute.
- Memahami Method.
- Memahami `public`.
- Memahami `private`.
- Memahami Constructor.
- Membuat Method di dalam Class.
- Membuat Method di luar Class.
- Menggunakan Parameter pada Method.
- Memahami Getter dan Setter.
- Menggunakan Array of Object.
- Membuat program sederhana menggunakan Class.

---

# 1. Apa Itu Class?

**Class** adalah sebuah blueprint atau cetakan yang digunakan untuk membuat Object.

Class dapat berisi:

- Data
- Function

Data yang berada di dalam Class biasanya disebut **Attribute**.

Function yang berada di dalam Class biasanya disebut **Method**.

Contoh:

```cpp
class Mahasiswa
{
public:
    string nama;
    int umur;

    void perkenalan()
    {
        cout << "Halo, saya " << nama << endl;
    }
};
```

Class di atas bernama `Mahasiswa`.

Class tersebut memiliki:

```text
Attribute:
    nama
    umur

Method:
    perkenalan()
```

---

# 2. Apa Itu Object?

Jika Class adalah blueprint atau cetakan, maka **Object adalah hasil yang dibuat dari Class tersebut**.

Contoh:

```cpp
Mahasiswa mahasiswa;
```

`Mahasiswa` adalah Class.

`mahasiswa` adalah Object.

Gambaran sederhananya:

```text
Class
  ↓
Blueprint / cetakan
  ↓
Object
  ↓
Mahasiswa mahasiswa;
```

Satu Class juga dapat digunakan untuk membuat banyak Object.

Contoh:

```cpp
Mahasiswa mahasiswa1;
Mahasiswa mahasiswa2;
Mahasiswa mahasiswa3;
```

Ketiga Object tersebut berasal dari Class yang sama.

---

# 3. Class dan Object dalam Kehidupan Nyata

Misalnya kita memiliki konsep:

```text
Class = Mahasiswa
```

Class tersebut memiliki Attribute:

```text
nama
umur
nim
jurusan
```

dan Method:

```text
perkenalan()
belajar()
```

Kemudian kita membuat Object:

```text
mahasiswa1
mahasiswa2
mahasiswa3
```

Masing-masing Object dapat memiliki data yang berbeda.

Contoh:

```text
mahasiswa1
    nama = Ilham
    umur = 20

mahasiswa2
    nama = Budi
    umur = 21

mahasiswa3
    nama = Andi
    umur = 19
```

Namun semuanya berasal dari Class `Mahasiswa`.

---

# 4. Membuat Class

Syntax dasar:

```cpp
class NamaClass
{
    // Attribute
    // Method
};
```

Contoh:

```cpp
class Mahasiswa
{
public:
    string nama;
    int umur;
};
```

Perhatikan bahwa setelah `}` terdapat tanda:

```text
;
```

Tanda tersebut wajib digunakan ketika mendefinisikan Class.

---

# 5. Membuat Object

Setelah Class dibuat, kita dapat membuat Object.

Contoh:

```cpp
class Mahasiswa
{
public:
    string nama;
    int umur;
};

int main()
{
    Mahasiswa mahasiswa;

    return 0;
}
```

Di sini:

```cpp
Mahasiswa mahasiswa;
```

berarti kita membuat Object bernama `mahasiswa`.

---

# 6. Attribute

Attribute adalah data atau Variable yang dimiliki oleh Object.

Contoh:

```cpp
class Mahasiswa
{
public:
    string nama;
    int umur;
    float ipk;
};
```

Class tersebut memiliki tiga Attribute:

```text
nama
umur
ipk
```

Attribute dapat diakses melalui Object.

Contoh:

```cpp
mahasiswa.nama
mahasiswa.umur
mahasiswa.ipk
```

---

# 7. Mengakses Attribute

Untuk mengakses Attribute dari Object, kita menggunakan operator titik `.`.

Contoh:

```cpp
mahasiswa.nama = "Ilham";
mahasiswa.umur = 20;
mahasiswa.ipk = 3.50;
```

Kemudian kita dapat menampilkannya:

```cpp
cout << mahasiswa.nama << endl;
cout << mahasiswa.umur << endl;
cout << mahasiswa.ipk << endl;
```

---

# 8. Contoh Class Sederhana

```cpp
#include <iostream>
#include <string>

using namespace std;

class Mahasiswa
{
public:
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
```

Output:

```text
Nama: Ilham
Umur: 20
IPK : 3.5
```

---

# 9. Method

**Method** adalah Function yang berada di dalam Class.

Contoh:

```cpp
class Mahasiswa
{
public:

    void perkenalan()
    {
        cout << "Halo, saya mahasiswa." << endl;
    }
};
```

Method di atas bernama:

```text
perkenalan()
```

Kita dapat memanggilnya melalui Object:

```cpp
mahasiswa.perkenalan();
```

---

# 10. Class dengan Method

Contoh lengkap:

```cpp
#include <iostream>

using namespace std;

class Mahasiswa
{
public:

    void perkenalan()
    {
        cout << "Halo, saya seorang mahasiswa." << endl;
    }
};

int main()
{
    Mahasiswa mahasiswa;

    mahasiswa.perkenalan();

    return 0;
}
```

Output:

```text
Halo, saya seorang mahasiswa.
```

---

# 11. Method Menggunakan Attribute

Method dapat menggunakan Attribute yang berada di dalam Class.

Contoh:

```cpp
class Mahasiswa
{
public:
    string nama;

    void perkenalan()
    {
        cout << "Halo, nama saya " << nama << endl;
    }
};
```

Kemudian:

```cpp
Mahasiswa mahasiswa;

mahasiswa.nama = "Ilham";

mahasiswa.perkenalan();
```

Output:

```text
Halo, nama saya Ilham
```

Method `perkenalan()` dapat mengakses Attribute `nama`.

---

# 12. `public`

Keyword `public` menentukan bahwa Member di bawahnya dapat diakses dari luar Class.

Contoh:

```cpp
class Mahasiswa
{
public:
    string nama;
    int umur;
};
```

Karena menggunakan `public`, kita dapat melakukan:

```cpp
mahasiswa.nama = "Ilham";
mahasiswa.umur = 20;
```

---

# 13. `private`

Keyword `private` digunakan untuk membatasi akses terhadap Member Class.

Contoh:

```cpp
class Mahasiswa
{
private:
    int umur;
};
```

Member `umur` tidak dapat diakses secara langsung dari luar Class.

Contoh seperti ini tidak diperbolehkan:

```cpp
mahasiswa.umur = 20;
```

Karena `umur` bersifat `private`.

---

# 14. Kenapa Menggunakan `private`?

Salah satu konsep penting dalam OOP adalah **Encapsulation**.

Encapsulation berarti kita dapat membatasi akses langsung terhadap data dan mengatur bagaimana data tersebut dapat digunakan.

Contohnya:

```cpp
class Mahasiswa
{
private:
    int umur;

public:
    void setUmur(int nilai)
    {
        umur = nilai;
    }

    int getUmur()
    {
        return umur;
    }
};
```

Sekarang `umur` tidak diubah secara langsung dari luar Class.

Kita menggunakan Method untuk mengaksesnya.

---

# 15. Getter dan Setter

Getter dan Setter digunakan untuk mengakses atau mengubah data `private`.

### Getter

Getter digunakan untuk mengambil nilai.

Contoh:

```cpp
int getUmur()
{
    return umur;
}
```

### Setter

Setter digunakan untuk mengubah nilai.

Contoh:

```cpp
void setUmur(int nilai)
{
    umur = nilai;
}
```

---

# 16. Contoh Getter dan Setter

```cpp
#include <iostream>

using namespace std;

class Mahasiswa
{
private:
    int umur;

public:

    void setUmur(int nilai)
    {
        umur = nilai;
    }

    int getUmur()
    {
        return umur;
    }
};

int main()
{
    Mahasiswa mahasiswa;

    mahasiswa.setUmur(20);

    cout << "Umur: " << mahasiswa.getUmur() << endl;

    return 0;
}
```

Output:

```text
Umur: 20
```

Alurnya:

```text
setUmur()
    ↓
mengubah data

getUmur()
    ↓
mengambil data
```

---

# 17. Method dengan Parameter

Method dapat menerima Parameter seperti Function biasa.

Contoh:

```cpp
class Kalkulator
{
public:

    void tambah(int a, int b)
    {
        cout << a + b << endl;
    }
};
```

Kemudian:

```cpp
Kalkulator kalkulator;

kalkulator.tambah(10, 20);
```

Output:

```text
30
```

---

# 18. Method dengan Return Value

Method juga dapat mengembalikan nilai.

Contoh:

```cpp
class Kalkulator
{
public:

    int tambah(int a, int b)
    {
        return a + b;
    }
};
```

Kemudian:

```cpp
Kalkulator kalkulator;

int hasil = kalkulator.tambah(10, 20);

cout << hasil << endl;
```

Output:

```text
30
```

---

# 19. Constructor

**Constructor** adalah Method khusus yang otomatis dijalankan ketika Object dibuat.

Ciri-ciri Constructor:

- Namanya sama dengan nama Class.
- Tidak memiliki return type.
- Dipanggil otomatis ketika Object dibuat.

Contoh:

```cpp
class Mahasiswa
{
public:

    Mahasiswa()
    {
        cout << "Object dibuat." << endl;
    }
};
```

Ketika:

```cpp
Mahasiswa mahasiswa;
```

Constructor otomatis dijalankan.

---

# 20. Contoh Constructor

```cpp
#include <iostream>

using namespace std;

class Mahasiswa
{
public:

    Mahasiswa()
    {
        cout << "Constructor dijalankan." << endl;
    }
};

int main()
{
    Mahasiswa mahasiswa;

    return 0;
}
```

Output:

```text
Constructor dijalankan.
```

Kita tidak perlu memanggil:

```cpp
mahasiswa.Mahasiswa();
```

Constructor dipanggil otomatis ketika Object dibuat.

---

# 21. Constructor dengan Parameter

Constructor juga dapat menerima Parameter.

Contoh:

```cpp
class Mahasiswa
{
public:
    string nama;
    int umur;

    Mahasiswa(string nama, int umur)
    {
        this->nama = nama;
        this->umur = umur;
    }
};
```

Kemudian:

```cpp
Mahasiswa mahasiswa("Ilham", 20);
```

Data langsung diberikan ketika Object dibuat.

---

# 22. Contoh Constructor dengan Parameter

```cpp
#include <iostream>
#include <string>

using namespace std;

class Mahasiswa
{
public:
    string nama;
    int umur;

    Mahasiswa(string nama, int umur)
    {
        this->nama = nama;
        this->umur = umur;
    }
};

int main()
{
    Mahasiswa mahasiswa("Ilham", 20);

    cout << "Nama: " << mahasiswa.nama << endl;
    cout << "Umur: " << mahasiswa.umur << endl;

    return 0;
}
```

Output:

```text
Nama: Ilham
Umur: 20
```

---

# 23. Apa Itu `this`?

Keyword `this` merupakan Pointer yang menunjuk ke Object saat ini.

Pada contoh:

```cpp
Mahasiswa(string nama, int umur)
{
    this->nama = nama;
    this->umur = umur;
}
```

Kita memiliki dua nama:

```text
this->nama
nama
```

`this->nama` adalah Attribute milik Object.

Sedangkan:

```text
nama
```

adalah Parameter Constructor.

Gambaran:

```text
this->nama = nama;
     ↑       ↑
     |       |
 Attribute  Parameter
```

---

# 24. Method di Dalam Class

Method dapat langsung ditulis di dalam Class.

Contoh:

```cpp
class Mahasiswa
{
public:

    void tampilkan()
    {
        cout << "Data mahasiswa" << endl;
    }
};
```

Cara ini cocok untuk Function yang sederhana.

---

# 25. Method di Luar Class

Method juga dapat didefinisikan di luar Class.

Contoh:

```cpp
class Mahasiswa
{
public:
    void tampilkan();
};
```

Kemudian di luar Class:

```cpp
void Mahasiswa::tampilkan()
{
    cout << "Data mahasiswa" << endl;
}
```

Operator:

```text
::
```

disebut **Scope Resolution Operator**.

---

# 26. Contoh Method di Luar Class

```cpp
#include <iostream>

using namespace std;

class Mahasiswa
{
public:
    void perkenalan();
};

void Mahasiswa::perkenalan()
{
    cout << "Halo, saya mahasiswa." << endl;
}

int main()
{
    Mahasiswa mahasiswa;

    mahasiswa.perkenalan();

    return 0;
}
```

Output:

```text
Halo, saya mahasiswa.
```

---

# 27. Banyak Object

Satu Class dapat digunakan untuk membuat banyak Object.

Contoh:

```cpp
class Mahasiswa
{
public:
    string nama;
};
```

Kemudian:

```cpp
Mahasiswa mahasiswa1;
Mahasiswa mahasiswa2;
Mahasiswa mahasiswa3;
```

Masing-masing Object dapat memiliki data berbeda.

```cpp
mahasiswa1.nama = "Ilham";
mahasiswa2.nama = "Budi";
mahasiswa3.nama = "Andi";
```

---

# 28. Array of Object

Kita juga dapat membuat Array yang berisi Object.

Contoh:

```cpp
Mahasiswa mahasiswa[3];
```

Artinya kita memiliki tiga Object `Mahasiswa`.

Gambaran:

```text
mahasiswa[0]
    ↓
Object Mahasiswa

mahasiswa[1]
    ↓
Object Mahasiswa

mahasiswa[2]
    ↓
Object Mahasiswa
```

---

# 29. Contoh Array of Object

```cpp
#include <iostream>
#include <string>

using namespace std;

class Mahasiswa
{
public:
    string nama;
    int umur;
};

int main()
{
    Mahasiswa mahasiswa[3];

    mahasiswa[0].nama = "Ilham";
    mahasiswa[0].umur = 20;

    mahasiswa[1].nama = "Budi";
    mahasiswa[1].umur = 21;

    mahasiswa[2].nama = "Andi";
    mahasiswa[2].umur = 19;

    for (int i = 0; i < 3; i++)
    {
        cout << "Mahasiswa ke-" << i + 1 << endl;
        cout << "Nama: " << mahasiswa[i].nama << endl;
        cout << "Umur: " << mahasiswa[i].umur << endl;
        cout << endl;
    }

    return 0;
}
```

---

# 30. Class vs Struct

Pada C++, `class` dan `struct` memiliki banyak kesamaan.

Keduanya dapat memiliki:

- Attribute
- Method
- Constructor
- Access Modifier
- Object

Perbedaan dasar yang paling penting adalah **default access modifier**.

Pada `struct`, default-nya:

```text
public
```

Pada `class`, default-nya:

```text
private
```

Contoh:

```cpp
struct Mahasiswa
{
    string nama;
};
```

`nama` secara default bersifat `public`.

Sedangkan:

```cpp
class Mahasiswa
{
    string nama;
};
```

`nama` secara default bersifat `private`.

---

# 31. Struct dan Class

Secara sederhana:

```text
Struct
    ↓
sering digunakan untuk mengelompokkan data

Class
    ↓
sering digunakan untuk membuat Object
    dengan data + perilaku
```

Namun dalam C++, Struct juga dapat memiliki Method dan fitur OOP lainnya.

Jadi perbedaannya tidak sesederhana "Struct hanya data dan Class hanya Object".

---

# 32. Contoh Program Class Lengkap

Sekarang kita gabungkan beberapa konsep yang sudah dipelajari.

```cpp
#include <iostream>
#include <string>

using namespace std;

class Mahasiswa
{
private:
    string nama;
    int umur;

public:

    Mahasiswa(string nama, int umur)
    {
        this->nama = nama;
        this->umur = umur;
    }

    void tampilkanData()
    {
        cout << "Nama: " << nama << endl;
        cout << "Umur: " << umur << endl;
    }

    string getNama()
    {
        return nama;
    }

    int getUmur()
    {
        return umur;
    }
};

int main()
{
    Mahasiswa mahasiswa("Ilham", 20);

    mahasiswa.tampilkanData();

    return 0;
}
```

Output:

```text
Nama: Ilham
Umur: 20
```

Pada program ini kita sudah menggunakan:

```text
Class
Object
Private
Public
Attribute
Method
Constructor
this
Getter
```

---

# 33. Konsep OOP yang Mulai Kita Kenal

Dari materi ini kita mulai mengenal beberapa konsep OOP.

```text
Class
Object
Encapsulation
Attribute
Method
Constructor
```

Nantinya kita akan mempelajari konsep OOP lebih jauh.

Beberapa konsep utama OOP yang akan kita temui:

```text
Encapsulation
Inheritance
Polymorphism
Abstraction
```

Untuk sekarang kita fokus terlebih dahulu pada dasar Class dan Object.

---

# 🧠 Analogi Sederhana

Bayangkan kita memiliki cetakan kue.

```text
Class
    ↓
Cetakan
```

Kemudian cetakan tersebut digunakan untuk membuat kue.

```text
Object
    ↓
Hasil dari cetakan
```

Jika:

```text
Class = Mahasiswa
```

maka:

```text
Object = mahasiswa1
Object = mahasiswa2
Object = mahasiswa3
```

Ketiga Object berasal dari cetakan yang sama tetapi dapat memiliki data berbeda.

---

# 🔗 Hubungan dengan Materi Sebelumnya

Perjalanan kita sekarang mulai semakin jelas.

```text
Variable
    ↓
Array
    ↓
Function
    ↓
Pointer
    ↓
Reference
    ↓
Struct
    ↓
Class & Object
```

Struct sebelumnya:

```cpp
struct Mahasiswa
{
    string nama;
    int umur;
};
```

Sekarang kita mengenal Class:

```cpp
class Mahasiswa
{
public:
    string nama;
    int umur;

    void perkenalan()
    {
        cout << nama << endl;
    }
};
```

Class memungkinkan kita menggabungkan:

```text
Data
 +
Function
 =
Object
```

---

# 🧪 Mini Challenge

## Challenge 01 — Class Sederhana

Buat Class bernama:

```text
Buku
```

Dengan Attribute:

```text
judul
penulis
tahun
```

Kemudian buat Object:

```cpp
Buku buku;
```

Isi datanya dan tampilkan.

Target:

```text
=== Data Buku ===
Judul   : ...
Penulis : ...
Tahun   : ...
```

---

## Challenge 02 — Method

Gunakan Class `Buku`.

Tambahkan Method:

```cpp
void tampilkanData()
```

Method tersebut harus menampilkan seluruh data buku.

Contoh:

```text
=== Data Buku ===
Judul   : Belajar C++
Penulis : Ilham
Tahun   : 2026
```

---

## Challenge 03 — Constructor

Buat Constructor:

```cpp
Buku(string judul, string penulis, int tahun)
```

Sehingga Object dapat dibuat seperti:

```cpp
Buku buku(
    "Belajar C++",
    "Ilham",
    2026
);
```

---

## Challenge 04 — Getter dan Setter

Buat Attribute berikut menjadi `private`:

```text
judul
penulis
tahun
```

Kemudian buat:

```text
setJudul()
getJudul()

setPenulis()
getPenulis()

setTahun()
getTahun()
```

Gunakan Getter dan Setter untuk mengakses data.

---

## Challenge 05 — Array of Object

Buat tiga Object `Buku` menggunakan Array:

```cpp
Buku buku[3];
```

Kemudian tampilkan semua data menggunakan Looping.

---

# 📁 Struktur Folder Pertemuan 12

Source code Pertemuan 12 dapat disusun seperti berikut:

```text
pertemuan-12/
│
├── catatan.md
│
├── 01_class_sederhana.cpp
├── 02_object.cpp
├── 03_attribute.cpp
├── 04_method.cpp
├── 05_public_private.cpp
├── 06_constructor.cpp
├── 07_method_dalam_class.cpp
├── 08_method_luar_class.cpp
├── 09_parameter_method.cpp
├── 10_getter_setter.cpp
├── 11_array_object.cpp
└── 12_challenge_class.cpp
```

---

# 🧠 Checklist Pembelajaran

- [ ] Memahami pengertian Class.
- [ ] Memahami pengertian Object.
- [ ] Dapat membuat Class.
- [ ] Dapat membuat Object.
- [ ] Memahami Attribute.
- [ ] Memahami Method.
- [ ] Memahami `public`.
- [ ] Memahami `private`.
- [ ] Memahami Constructor.
- [ ] Memahami Constructor dengan Parameter.
- [ ] Memahami keyword `this`.
- [ ] Dapat membuat Method di dalam Class.
- [ ] Dapat membuat Method di luar Class.
- [ ] Memahami Getter.
- [ ] Memahami Setter.
- [ ] Dapat membuat Array of Object.
- [ ] Memahami perbedaan dasar Struct dan Class.
- [ ] Dapat membuat program sederhana menggunakan Class.

---

# 📚 Ringkasan Syntax

## Membuat Class

```cpp
class Mahasiswa
{
public:
    string nama;
    int umur;
};
```

## Membuat Object

```cpp
Mahasiswa mahasiswa;
```

## Mengakses Attribute

```cpp
mahasiswa.nama;
```

## Membuat Method

```cpp
void tampilkan()
{
    cout << nama;
}
```

## Private

```cpp
private:
    int umur;
```

## Constructor

```cpp
Mahasiswa()
{
    cout << "Object dibuat";
}
```

## Constructor dengan Parameter

```cpp
Mahasiswa(string nama, int umur)
{
    this->nama = nama;
    this->umur = umur;
}
```

## Getter

```cpp
int getUmur()
{
    return umur;
}
```

## Setter

```cpp
void setUmur(int umur)
{
    this->umur = umur;
}
```

## Array of Object

```cpp
Mahasiswa mahasiswa[3];
```

---

# 🎯 Kesimpulan

Class merupakan blueprint atau cetakan untuk membuat Object.

Object merupakan hasil atau instance dari sebuah Class.

Class dapat memiliki:

```text
Attribute
+
Method
```

Attribute digunakan untuk menyimpan data.

Method digunakan untuk menjalankan perilaku atau aksi.

Contoh:

```cpp
class Mahasiswa
{
public:
    string nama;
    int umur;

    void perkenalan()
    {
        cout << "Halo, saya " << nama << endl;
    }
};
```

Kemudian:

```cpp
Mahasiswa mahasiswa;

mahasiswa.nama = "Ilham";
mahasiswa.umur = 20;

mahasiswa.perkenalan();
```

Kita juga mulai mengenal:

```text
public
private
constructor
this
getter
setter
```

Konsep-konsep tersebut akan menjadi dasar penting untuk memahami **Object-Oriented Programming**.

---

# 🚀 Penutup

Pada Pertemuan 12 kita mulai berpindah dari pemrograman yang berfokus pada kumpulan Function dan data menuju konsep **Object-Oriented Programming**.

Materi yang perlu benar-benar dipahami:

```text
Class
    ↓
Object
    ↓
Attribute
    ↓
Method
    ↓
Constructor
    ↓
Encapsulation
```

Tidak perlu terburu-buru menghafalkan semua syntax.

Yang paling penting adalah memahami hubungan:

```text
Class
   ↓
Blueprint
   ↓
Object
   ↓
Attribute + Method
```

Setelah konsep dasar ini sudah kuat, kita akan lebih siap mempelajari konsep OOP yang lebih lanjut.

**Keep Learning, Keep Coding! 🚀**