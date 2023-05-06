#include <iostream>
using namespace std;

class Perpustakaan {
protected:
  string buku = "Belajar Membaca";
  string nama = "Faqih";

public:
  string cekPinjaman() {
    return "Buku Belajar Membaca Sudah Dipinjam Oleh Faqih";
  }
};

class Pengembalian : public Perpustakaan {
protected:
  string pengembalian = "Telah di kembalikan";

public:
  string cekKembali() {
    return "Buku Belajar Membaca Sudah Dikembalikan oleh Faqih ";
  }
};


int main() {
  Pengembalian bukuPerpustakaan;

  cout << bukuPerpustakaan.cekPinjaman() << endl;
  cout << bukuPerpustakaan.cekKembali() << endl;

  return 0;
}