# Pertemuan 13 — Inheritance, Polymorphism & Abstraction Dasar

Pada pertemuan sebelumnya kita sudah mempelajari dasar **Class dan Object**.

Sekarang kita akan melanjutkan ke beberapa konsep penting dalam **Object-Oriented Programming (OOP)**, yaitu:

- Inheritance
- Parent Class
- Child Class
- Access Modifier
- Method Overriding
- Polymorphism
- Virtual Function
- Abstraction dasar
- Abstract Class
- Pure Virtual Function

Materi ini menjadi pengantar sebelum nantinya kita masuk lebih dalam ke konsep OOP dan Struktur Data.

---

## 🎯 Tujuan Pembelajaran

Setelah menyelesaikan pertemuan ini, kita diharapkan mampu:

- Memahami konsep Inheritance.
- Memahami Parent Class dan Child Class.
- Membuat Class turunan.
- Menggunakan kembali Attribute dan Method dari Parent Class.
- Memahami Method Overriding.
- Memahami konsep Polymorphism.
- Memahami penggunaan `virtual`.
- Memahami konsep Abstraction.
- Membuat Abstract Class sederhana.
- Memahami Pure Virtual Function.
- Menggabungkan beberapa konsep OOP dalam sebuah program.

---

# 1. Apa Itu Inheritance?

**Inheritance** adalah konsep ketika sebuah Class dapat mewarisi Attribute dan Method dari Class lainnya.

Class yang diwarisi disebut:

```text
Parent Class
```

Sedangkan Class yang menerima warisan disebut:

```text
Child Class
```

Contoh:

```text
Hewan
  ↓
Parent Class

Kucing
  ↓
Child Class
```

Kucing dapat memiliki karakteristik yang berasal dari Hewan.

---

# 2. Contoh Inheritance Sederhana

Kita memiliki Parent Class:

```cpp
class Hewan
{
public:
    void makan()
    {
        cout << "Hewan sedang makan." << endl;
    }
};
```

Kemudian membuat Child Class:

```cpp
class Kucing : public Hewan
{
};
```

Sekarang `Kucing` mewarisi Method `makan()` dari `Hewan`.

Kita dapat menggunakan:

```cpp
Kucing kucing;

kucing.makan();
```

---

# 3. Parent Class dan Child Class

Gambaran sederhananya:

```text
Parent Class
     │
     │ inheritance
     ↓
Child Class
```

Contoh:

```text
Hewan
  │
  ├── makan()
  └── tidur()

      ↓ diwariskan

Kucing
  │
  ├── makan()
  ├── tidur()
  └── mengeong()
```

Child Class dapat memiliki Method sendiri selain Method yang diwarisi.

---

# 4. Syntax Inheritance

Syntax dasar:

```cpp
class Child : public Parent
{
};
```

Contoh:

```cpp
class Hewan
{
};

class Kucing : public Hewan
{
};
```

Artinya:

```text
Kucing
    ↓
mewarisi
    ↓
Hewan
```

---

# 5. Contoh Program Inheritance

```cpp
#include <iostream>

using namespace std;

class Hewan
{
public:

    void makan()
    {
        cout << "Hewan sedang makan." << endl;
    }
};

class Kucing : public Hewan
{
public:

    void mengeong()
    {
        cout << "Kucing sedang mengeong." << endl;
    }
};

int main()
{
    Kucing kucing;

    kucing.makan();
    kucing.mengeong();

    return 0;
}
```

Output:

```text
Hewan sedang makan.
Kucing sedang mengeong.
```

Perhatikan bahwa Object `kucing` dapat memanggil:

```cpp
kucing.makan();
```

meskipun Method `makan()` dibuat di Parent Class `Hewan`.

---

# 6. Menambahkan Attribute

Inheritance juga dapat digunakan untuk mewarisi Attribute.

Contoh:

```cpp
class Hewan
{
public:
    string nama;
};
```

Kemudian:

```cpp
class Kucing : public Hewan
{
};
```

Object `Kucing` dapat menggunakan:

```cpp
kucing.nama = "Milo";
```

---

# 7. Child Class dengan Attribute Sendiri

Child Class juga dapat memiliki Attribute tambahan.

Contoh:

```cpp
class Hewan
{
public:
    string nama;
};

class Kucing : public Hewan
{
public:
    string warna;
};
```

Sekarang Object `Kucing` memiliki:

```text
Dari Parent:
    nama

Dari Child:
    warna
```

Contoh:

```cpp
Kucing kucing;

kucing.nama = "Milo";
kucing.warna = "Putih";
```

---

# 8. Method Overriding

**Method Overriding** adalah ketika Child Class membuat kembali Method yang sudah dimiliki Parent Class.

Contoh:

```cpp
class Hewan
{
public:

    void suara()
    {
        cout << "Hewan mengeluarkan suara." << endl;
    }
};

class Kucing : public Hewan
{
public:

    void suara()
    {
        cout << "Kucing mengeong." << endl;
    }
};
```

Method:

```text
suara()
```

dimiliki oleh Parent dan Child.

Method milik Child akan digunakan ketika Object Child memanggilnya.

---

# 9. Contoh Method Overriding

```cpp
#include <iostream>

using namespace std;

class Hewan
{
public:

    void suara()
    {
        cout << "Hewan mengeluarkan suara." << endl;
    }
};

class Kucing : public Hewan
{
public:

    void suara()
    {
        cout << "Kucing mengeong." << endl;
    }
};

int main()
{
    Kucing kucing;

    kucing.suara();

    return 0;
}
```

Output:

```text
Kucing mengeong.
```

---

# 10. Polymorphism

**Polymorphism** berarti "memiliki banyak bentuk".

Dalam OOP, Polymorphism memungkinkan sebuah Interface atau Method yang sama memiliki perilaku berbeda tergantung Object yang menggunakannya.

Contoh:

```text
Hewan
  │
  ├── Kucing
  ├── Anjing
  └── Burung
```

Masing-masing dapat memiliki:

```text
suara()
```

Tetapi hasilnya berbeda.

```text
Kucing  → Mengeong
Anjing  → Menggonggong
Burung  → Berkicau
```

---

# 11. Virtual Function

Untuk membuat Polymorphism Runtime, kita dapat menggunakan keyword:

```cpp
virtual
```

Contoh:

```cpp
class Hewan
{
public:

    virtual void suara()
    {
        cout << "Suara hewan." << endl;
    }
};
```

Kemudian Child Class dapat melakukan overriding.

```cpp
class Kucing : public Hewan
{
public:

    void suara() override
    {
        cout << "Meong." << endl;
    }
};
```

---

# 12. Keyword `override`

Keyword:

```cpp
override
```

digunakan untuk menunjukkan bahwa Method tersebut melakukan Override terhadap Method Parent Class.

Contoh:

```cpp
void suara() override
{
    cout << "Meong." << endl;
}
```

Penggunaan `override` membantu compiler mendeteksi kesalahan ketika kita sebenarnya tidak melakukan Override dengan benar.

---

# 13. Contoh Polymorphism

```cpp
#include <iostream>

using namespace std;

class Hewan
{
public:

    virtual void suara()
    {
        cout << "Suara hewan." << endl;
    }
};

class Kucing : public Hewan
{
public:

    void suara() override
    {
        cout << "Kucing mengeong." << endl;
    }
};

class Anjing : public Hewan
{
public:

    void suara() override
    {
        cout << "Anjing menggonggong." << endl;
    }
};

int main()
{
    Kucing kucing;
    Anjing anjing;

    Hewan* hewan1 = &kucing;
    Hewan* hewan2 = &anjing;

    hewan1->suara();
    hewan2->suara();

    return 0;
}
```

Output:

```text
Kucing mengeong.
Anjing menggonggong.
```

Perhatikan:

```cpp
Hewan* hewan1 = &kucing;
Hewan* hewan2 = &anjing;
```

Pointer bertipe `Hewan` dapat menunjuk ke Object Child.

Kemudian:

```cpp
hewan1->suara();
```

menghasilkan perilaku milik `Kucing`.

Sedangkan:

```cpp
hewan2->suara();
```

menghasilkan perilaku milik `Anjing`.

Inilah salah satu contoh **Polymorphism**.

---

# 14. Abstraction

**Abstraction** adalah konsep menyembunyikan detail implementasi dan hanya menunjukkan bagian penting yang perlu digunakan.

Contoh kehidupan nyata:

Ketika kita menggunakan tombol:

```text
ON / OFF
```

kita tidak perlu mengetahui seluruh proses elektronik di dalamnya.

Dalam pemrograman, kita dapat membuat Interface atau Class yang menentukan Method apa yang harus dimiliki Child Class.

---

# 15. Pure Virtual Function

Pure Virtual Function ditulis menggunakan:

```cpp
virtual void suara() = 0;
```

Contoh:

```cpp
class Hewan
{
public:

    virtual void suara() = 0;
};
```

Class seperti ini menjadi **Abstract Class**.

---

# 16. Abstract Class

Abstract Class tidak dapat digunakan untuk membuat Object secara langsung.

Contoh:

```cpp
class Hewan
{
public:

    virtual void suara() = 0;
};
```

Kita tidak dapat melakukan:

```cpp
Hewan hewan;
```

Karena `Hewan` adalah Abstract Class.

Tetapi kita dapat membuat Child Class:

```cpp
class Kucing : public Hewan
{
public:

    void suara() override
    {
        cout << "Meong." << endl;
    }
};
```

Kemudian:

```cpp
Kucing kucing;
```

---

# 17. Contoh Abstract Class

```cpp
#include <iostream>

using namespace std;

class Hewan
{
public:

    virtual void suara() = 0;
};

class Kucing : public Hewan
{
public:

    void suara() override
    {
        cout << "Kucing mengeong." << endl;
    }
};

int main()
{
    Kucing kucing;

    kucing.suara();

    return 0;
}
```

Output:

```text
Kucing mengeong.
```

---

# 18. Multiple Child Class

Satu Parent Class dapat memiliki banyak Child Class.

Contoh:

```text
              Hewan
                │
        ┌───────┼───────┐
        ↓       ↓       ↓
     Kucing   Anjing   Burung
```

Masing-masing Child dapat memiliki implementasi Method yang berbeda.

Contoh:

```text
Kucing
    suara() → Meong

Anjing
    suara() → Gonggong

Burung
    suara() → Cuit
```

---

# 19. Contoh Lengkap

Sekarang kita gabungkan Inheritance dan Polymorphism.

```cpp
#include <iostream>

using namespace std;

class Hewan
{
public:

    virtual void suara()
    {
        cout << "Suara hewan." << endl;
    }
};

class Kucing : public Hewan
{
public:

    void suara() override
    {
        cout << "Kucing mengeong." << endl;
    }
};

class Anjing : public Hewan
{
public:

    void suara() override
    {
        cout << "Anjing menggonggong." << endl;
    }
};

class Burung : public Hewan
{
public:

    void suara() override
    {
        cout << "Burung berkicau." << endl;
    }
};

int main()
{
    Kucing kucing;
    Anjing anjing;
    Burung burung;

    Hewan* hewan1 = &kucing;
    Hewan* hewan2 = &anjing;
    Hewan* hewan3 = &burung;

    hewan1->suara();
    hewan2->suara();
    hewan3->suara();

    return 0;
}
```

Output:

```text
Kucing mengeong.
Anjing menggonggong.
Burung berkicau.
```

---

# 20. Konsep `->`

Pada pertemuan sebelumnya kita sudah mempelajari Pointer.

Sekarang konsep Pointer kembali digunakan.

Jika kita memiliki Object biasa:

```cpp
kucing.suara();
```

Jika menggunakan Pointer:

```cpp
hewan1->suara();
```

Secara sederhana:

```text
Object
    ↓
.

Pointer ke Object
    ↓
->
```

Konsep ini merupakan pengulangan dari materi Pointer sebelumnya.

---

# 21. Constructor pada Inheritance

Child Class juga dapat memiliki Constructor.

Contoh:

```cpp
class Hewan
{
public:

    Hewan()
    {
        cout << "Constructor Hewan" << endl;
    }
};

class Kucing : public Hewan
{
public:

    Kucing()
    {
        cout << "Constructor Kucing" << endl;
    }
};
```

Ketika:

```cpp
Kucing kucing;
```

Constructor Parent akan dijalankan terlebih dahulu.

Kemudian Constructor Child.

Urutannya:

```text
Constructor Parent
        ↓
Constructor Child
```

---

# 22. Access Modifier dalam Inheritance

Inheritance juga berkaitan dengan Access Modifier:

```text
public
protected
private
```

Untuk sekarang yang paling penting dipahami:

```text
public
    ↓
dapat diakses dari luar Class

private
    ↓
hanya dapat diakses dari dalam Class tersebut

protected
    ↓
dapat diakses oleh Class tersebut
dan Child Class
```

Contoh:

```cpp
class Hewan
{
protected:
    string nama;
};
```

Child Class dapat menggunakan:

```cpp
nama
```

tetapi kode dari luar Class tidak dapat mengaksesnya secara langsung.

---

# 23. Contoh Protected

```cpp
#include <iostream>
#include <string>

using namespace std;

class Hewan
{
protected:
    string nama;
};

class Kucing : public Hewan
{
public:

    void setNama(string nama)
    {
        this->nama = nama;
    }

    void tampilkanNama()
    {
        cout << "Nama: " << nama << endl;
    }
};

int main()
{
    Kucing kucing;

    kucing.setNama("Milo");
    kucing.tampilkanNama();

    return 0;
}
```

Output:

```text
Nama: Milo
```

---

# 24. Perbedaan Konsep

Pada pertemuan ini kita mempelajari beberapa konsep yang saling berhubungan.

### Inheritance

```text
Class mewarisi Class lain
```

### Method Overriding

```text
Child mengganti implementasi Method Parent
```

### Polymorphism

```text
Method yang sama
+
Object berbeda
=
Perilaku berbeda
```

### Abstraction

```text
Menyembunyikan detail implementasi
dan fokus pada bagian yang diperlukan.
```

---

# 25. Analogi Sederhana

Bayangkan kita memiliki Parent Class:

```text
Kendaraan
```

Kemudian:

```text
Mobil
Motor
Sepeda
```

semuanya merupakan kendaraan.

Parent:

```text
Kendaraan
    ↓
bergerak()
```

Child:

```text
Mobil
    ↓
bergerak() → menggunakan roda 4

Motor
    ↓
bergerak() → menggunakan roda 2

Sepeda
    ↓
bergerak() → dikayuh
```

Method-nya sama:

```text
bergerak()
```

Tetapi implementasinya berbeda.

Inilah gambaran sederhana Polymorphism.

---

# 🧪 Mini Challenge

## Challenge 01 — Inheritance

Buat Parent Class:

```text
Kendaraan
```

dengan Method:

```cpp
void berjalan()
```

Kemudian buat Child Class:

```text
Mobil
```

yang mewarisi `Kendaraan`.

---

## Challenge 02 — Method Overriding

Buat Parent Class:

```text
Hewan
```

dengan Method:

```cpp
void suara()
```

Kemudian buat:

```text
Kucing
Anjing
Burung
```

Masing-masing harus memiliki Method `suara()` sendiri.

---

## Challenge 03 — Polymorphism

Gunakan:

```cpp
virtual
```

pada Method Parent.

Kemudian gunakan:

```cpp
override
```

pada Method Child.

Gunakan Pointer Parent untuk menunjuk ke masing-masing Child.

Target:

```text
Kucing → Meong
Anjing → Gonggong
Burung → Berkicau
```

---

## Challenge 04 — Abstract Class

Buat Abstract Class:

```text
BangunDatar
```

dengan Pure Virtual Function:

```cpp
virtual float luas() = 0;
```

Kemudian buat Child Class:

```text
Persegi
Lingkaran
```

Masing-masing harus memiliki implementasi `luas()` sendiri.

---

# 📁 Struktur Folder Pertemuan 13

Source code dapat disusun seperti berikut:

```text
pertemuan-13/
│
├── README.md
│
├── 01_inheritance.cpp
├── 02_parent_child.cpp
├── 03_attribute_inheritance.cpp
├── 04_method_overriding.cpp
├── 05_polymorphism.cpp
├── 06_virtual_function.cpp
├── 07_abstract_class.cpp
├── 08_pure_virtual_function.cpp
├── 09_protected.cpp
├── 10_constructor_inheritance.cpp
└── 11_challenge_oop.cpp
```

---

# 🧠 Checklist Pembelajaran

- [ ] Memahami Inheritance.
- [ ] Memahami Parent Class.
- [ ] Memahami Child Class.
- [ ] Dapat membuat Class turunan.
- [ ] Memahami Method Overriding.
- [ ] Memahami `virtual`.
- [ ] Memahami `override`.
- [ ] Memahami Polymorphism.
- [ ] Memahami Pointer pada Object.
- [ ] Memahami Abstraction.
- [ ] Memahami Abstract Class.
- [ ] Memahami Pure Virtual Function.
- [ ] Memahami `protected`.
- [ ] Memahami Constructor pada Inheritance.
- [ ] Dapat membuat program sederhana menggunakan konsep OOP.

---

# 📚 Ringkasan Syntax

## Inheritance

```cpp
class Child : public Parent
{
};
```

## Virtual Function

```cpp
virtual void suara()
{
}
```

## Override

```cpp
void suara() override
{
}
```

## Pure Virtual Function

```cpp
virtual void suara() = 0;
```

## Protected

```cpp
protected:
    string nama;
```

## Pointer ke Object

```cpp
Hewan* hewan = &kucing;
```

## Memanggil Method melalui Pointer

```cpp
hewan->suara();
```

---

# 🔗 Hubungan dengan Materi Sebelumnya

Perjalanan belajar C++ kita sampai di sini:

```text
Variable
    ↓
Input & Output
    ↓
Operator
    ↓
Percabangan
    ↓
Looping
    ↓
Array
    ↓
Function
    ↓
Reference
    ↓
Pointer
    ↓
Struct
    ↓
Class & Object
    ↓
Inheritance
    ↓
Polymorphism
    ↓
Abstraction
```

Materi sebelumnya tidak hilang.

Justru materi baru menggunakan konsep yang sudah dipelajari.

Contohnya:

```text
Pointer
   ↓
digunakan kembali dalam
   ↓
Polymorphism
```

Dan:

```text
Struct
   ↓
membantu memahami
   ↓
Class
```

---

# 🎯 Kesimpulan

Inheritance memungkinkan sebuah Class mewarisi Attribute dan Method dari Class lainnya.

```text
Parent
  ↓
Child
```

Polymorphism memungkinkan Method yang sama memiliki perilaku berbeda.

```text
suara()
  ↓
Kucing  → Meong
Anjing  → Gonggong
Burung  → Berkicau
```

Abstraction membantu kita menentukan bagian penting yang harus dimiliki sebuah Class tanpa harus memperlihatkan detail implementasinya.

Konsep penting pada pertemuan ini:

```text
Inheritance
Parent Class
Child Class
Method Overriding
virtual
override
Polymorphism
Abstraction
Abstract Class
Pure Virtual Function
protected
```

---

# 🚀 Penutup

Pertemuan 13 menjadi penutup rangkaian pembelajaran dasar C++ kita.

Kita sudah mulai dari konsep paling dasar:

```text
Variable
```

kemudian berkembang ke:

```text
Array
Function
Pointer
Reference
Struct
```

dan akhirnya masuk ke:

```text
Class
Object
Inheritance
Polymorphism
Abstraction
```

Setelah memahami materi ini, kita sudah memiliki pondasi yang jauh lebih kuat untuk masuk ke materi yang lebih spesifik seperti:

```text
Struktur Data
Linked List
Stack
Queue
Tree
Graph
Sorting
Searching
```

Terutama karena banyak Struktur Data modern akan menggunakan kombinasi:

```text
Struct / Class
+
Pointer
+
Reference
+
Dynamic Memory
```

Jadi jangan hanya menghafalkan syntax.

Pahami bagaimana setiap konsep saling terhubung.

```text
Learn
  ↓
Understand
  ↓
Practice
  ↓
Build
  ↓
Repeat
```

**Keep Learning, Keep Coding! 🚀**