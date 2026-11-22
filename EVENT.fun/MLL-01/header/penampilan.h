#ifndef PENAMPILAN_H_INCLUDED
#define PENAMPILAN_H_INCLUDED
#include "artis.h"
#include <string>
#include <iostream>

using namespace std;

struct Penampilan {
   int urutanTampil;
   float honor;
};

typedef Penampilan infotype_penampilan;         // variabel alias untuk infor

typedef struct ElmPenampilan *adrPenampilan;  // variabel alias untuk pointer

// kerangka dari elemen list
struct ElmPenampilan{
   infotype_penampilan info;
   adrArtis pArtis;
   adrPenampilan prev;
   adrPenampilan next;
};


// pengecekan apakah list kosong
bool isEmptyPenampilan(ListPenampilan LP);
/* I.S. list LP terdefinisi
   F.S. true jika list kosong dan false jika tidak kosong */
// pembuatan list kosong
void createListPenampilan(ListPenampilan &LP);
/* I.S. ~
   F.S. terbentuk list kosong */
// manajemen memori
adrPenampilan alokasiPenampilan(infotype_penampilan x, adrArtis pArtis);
/* I.S. info Penampilan x dan alamat artis terdefinisi
   F.S. mengembalikan alamat elemen Penampilan berisi x, prev NULL, next NULL, dan menunjuk pArtis */
void dealokasiPenampilan(adrPenampilan &P);
/* I.S. pointer P terdefinisi
   F.S. elemen Penampilan di-dealokasi; elemen artis yang ditunjuk tidak ikut dihapus */
// pencarian sebuah elemen list
adrPenampilan findPenampilan(ListPenampilan LP, int urutanTampil);
/* I.S. list LP milik konser dan urutan tampil terdefinisi
   F.S. mengembalikan alamat elemen Penampilan yang cocok atau NULL jika tidak ditemukan */
// penambahan elemen *
void insertFirstPenampilan(ListPenampilan &LP, adrPenampilan P);
/* I.S. terdefinisi list LP yang mungkin kosong dan elemen list P
   F.S. menempatkan elemen beralamat P pada awal list */
void insertAfterPenampilan(ListPenampilan &LP, adrPenampilan Prec, adrPenampilan P);
/* I.S. terdefinisi list LP yang mungkin kosong, elemen list P dan elemn list prec
   F.S. menempatkan elemen beralamat P sesudah elemen beralamat Prec */
void insertLastPenampilan(ListPenampilan &LP, adrPenampilan P);
/* I.S. terdefinisi list LP yang mungkin kosong dan elemen list P
   F.S. menempatkan elemen beralamat P pada akhir list */
// penghapusan sebuah elemen
void deleteFirstPenampilan(ListPenampilan &LP, adrPenampilan &P);
/* I.S. terdefinisi list LP yang mungkin kosong dan elemen list P
   F.S. P adalah alamat dari elemen pertama list
        yang akan dihapus dan elemen list selanjutnya akan menjadi
        elemen list pertama atau tidak ada elemen list pertama */
void deleteLastPenampilan(ListPenampilan &LP, adrPenampilan &P);
/* I.S. terdefinisi list LP yang mungkin kosong dan elemen list P
   F.S. P adalah alamat dari elemen terakhir list
        yang akan dihapus dan elemen list sebelumnya akan menjadi
        elemen list terakhir atau tidak ada elemen list terakhir */
void deleteAfterPenampilan(ListPenampilan &LP, adrPenampilan Prec, adrPenampilan &P);
/* I.S. terdefinisi list LP yang mungkin kosong, elemen list P dan elemn list prec
   F.S. P adalah alamat dari elemen list setelah prec
        yang akan dihapus dan elemen list setelah p akan terhubung
        langsung dengan prec atau tidak ada elemen list setelahnya */
// penelusuran / penampilan info list
void printInfoPenampilan(ListPenampilan LP);
/* I.S. terdefinisi list LP yang mungkin kosong
   F.S. jika list tidak kosong menampilkan semua info yang ada pada list */
// input data dari user
void createDataPenampilan(infotype_penampilan &x);
/* I.S. ~
   F.S. meminta data penampilan dari user */
#endif // PENAMPILAN_H_INCLUDED