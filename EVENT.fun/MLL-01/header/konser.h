#ifndef KONSER_H_INCLUDED
#define KONSER_H_INCLUDED
#include "penampilan.h"
#include <string>
#include <iostream>

using namespace std;

struct konser{
   string idKonser;
   string namaKonser;
   string tanggal;
   int hargaSatuan;
   int kapasitas;
};

typedef struct konser infotype;
typedef  struct elmlistKonser *adrKonser;

struct elmlistKonser{
    infotype info;
    adrKonser next;
    adrKonser prev;
};

struct ListKonser{
    adrKonser first;
    adrKonser last;
};

bool isemptyKonser(ListKonser LK);
void createListKonser(ListKonser &LK);
adrKonser alokasiKonser(infotype x);
void dealokasiKonser(adrKonser &p);
adrKonser findKonserById(ListKonser LK, string idKonser);
void insetrtfirst(ListKonser &LK, adrKonser p);
void insertlast(ListKonser &LK, adrKonser p);
void inserafter(ListKonser &LK, adrKonser p, adrKonser prec);
void deletefirst(ListKonser &LK, adrKonser &p);
void deletelast(ListKonser &LK, adrKonser &p);
void deleteafter(ListKonser &LK, adrKonser &p, adrKonser prec);)
void printInfoKonser(ListKonser LK);
bool isArtisReferenced(ListKonser LK, adrArtis pArtis);
void createDataKonser(ListKonser &LK, ListArtis &LA);
#endif // KONSER_H_INCLUDED