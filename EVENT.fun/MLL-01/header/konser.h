#ifndef KONSER_H_INCLUDED
#define KONSER_H_INCLUDED
#include "penampilan.h"
#include <string>
#include <iostream>

using namespace std;

struct Konser{
   string IdKonser;
   string namaKonser;
   string tanggal;
   int hargaSatuan;
   int kapasitas;
};


typedef Konser infotype_konser;         // variabel alias untuk infor
typedef  struct ElmKonser *adrKonser;   // variabel alias untuk pointer

// kerangka dari elemen list
struct ElmKonser{
   infotype_konser info;
   ListPenampilan daftarPenampilan;
   adrKonser prev;
   adrKonser next;
};

// kerangka dari list
struct ListKonser{
   adrKonser first;
   adrKonser last;
};

// pengecekan apakah list kosong
bool isEmptyKonser(ListKonser LK);
/* I.S. list LK terdefinisi
   F.S. true jika list kosong dan false jika tidak kosong */
// pembuatan list kosong
void createListKonser(ListKonser &LK);
/* I.S. ~
   F.S. terbentuk list kosong */
// manajemen memori
adrKonser alokasiKonser(infotype_konser x);
/* I.S. info konser x terdefinisi
   F.S. mengembalikan alamat elemen berisi x dengan prev/next NULL
        dan daftar penampilan dalam keadaan kosong */
void dealokasiKonser(adrKonser &P);
/* I.S. pointer P terdefinisi
   F.S. elemen konser dan seluruh elemen penampilan relasinya di-dealokasi;
        elemen artis yang dirujuk tidak ikut dihapus */
// pencarian sebuah elemen list
adrKonser findKonserByID(ListKonser LK, string idKonser);
/* I.S. list LK dan ID konser terdefinisi
   F.S. mengembalikan alamat elemen konser yang cocok atau NULL jika tidak ditemukan */
// penambahan elemen
void insertFirstKonser(ListKonser &LK, adrKonser P);
/* I.S. terdefinisi list LK yang mungkin kosong dan elemen list P
   F.S. menempatkan elemen beralamat P pada awal list */
void insertAfterKonser(ListKonser &LK, adrKonser Prec, adrKonser P);
/* I.S. terdefinisi list LK yang mungkin kosong, elemen list P dan elemen list prec
   F.S. menempatkan elemen beralamat P sesudah elemen beralamat Prec */
void insertLastKonser(ListKonser &LK, adrKonser P);
/* I.S. terdefinisi list LK yang mungkin kosong dan elemen list P
   F.S. menempatkan elemen beralamat P pada akhir list */
// penghapusan sebuah elemen
void deleteFirstKonser(ListKonser &LK, adrKonser &P);
/* I.S. terdefinisi list LK yang mungkin kosong dan elemen list P
   F.S. P adalah alamat elemen pertama list yang dihapus */
void deleteLastKonser(ListKonser &LK, adrKonser &P);
/* I.S. terdefinisi list LK yang mungkin kosong dan elemen list P
   F.S. P adalah alamat elemen terakhir list yang dihapus */
void deleteAfterKonser(ListKonser &LK, adrKonser Prec, adrKonser &P);
/* I.S. terdefinisi list LK yang mungkin kosong, elemen list P dan elemen list prec
   F.S. P adalah alamat elemen list setelah prec yang dihapus */
// penelusuran / display
void printInfoKonser(ListKonser LK);
/* I.S. terdefinisi list LK yang mungkin kosong
   F.S. jika list tidak kosong menampilkan semua info yang ada pada list */
// pengecekan relasi ke child
bool isArtisReferenced(ListKonser LK, adrArtis pArtis);
/* I.S. terdefinisi list konser dan alamat artis
   F.S. true jika artis masih direferensikan oleh penampilan di salah satu konser */
// input data dari user
void createDataKonser(infotype_konser &x);
/* I.S. ~
   F.S. meminta data konser dari user */
#endif // KONSER_H_INCLUDED
