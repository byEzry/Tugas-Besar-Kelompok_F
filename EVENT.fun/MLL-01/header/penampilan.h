#ifndef PENAMPILAN_H_INCLUDED
#define PENAMPILAN_H_INCLUDED
#include "artis.h"
#include <string>
#include <iostream>

using namespace std;

struct penampilan{
    int urutanTampil;
    float honor;
};

typedef struct penampilan infotype ; 
typedef struct elmlistPenampilan *adrPenampilan; 

struct elmlistPenampilan{
    infotype info;
    adrPenampilan next;
    adrPenampilan prev;
};

struct ListPenampilan{
    adrPenampilan first;
    adrPenampilan last;
};

bool isEmptyPenampilan(ListPenampilan LP);
void createListPenampilan(ListPenampilan &LP);
adrPenampilan alokasiPenampilan(infotype x);
void dealokasiPenampilan(adrPenampilan &p);
adrPenampilan findPenampilanByUrutan(ListPenampilan LP, int urutanTampil);
void insertfirst(ListPenampilan &LP, adrPenampilan p);
void insertlast(ListPenampilan &LP, adrPenampilan p);
void inserafter(ListPenampilan &LP, adrPenampilan p, adrPenampilan prec);
void deletefirst(ListPenampilan &LP, adrPenampilan &p);
void deletelast(ListPenampilan &LP, adrPenampilan &p);
void deleteafter(ListPenampilan &LP, adrPenampilan &p, adrPenampilan prec);
void printInfoPenampilan(ListPenampilan LP);
void createDataPenampilan(ListPenampilan &LP, ListArtis &LA);

#endif // PENAMPILAN_H_INCLUDED