#ifndef ARTIS_H_INCLUDED
#define ARTIS_H_INCLUDED
#include <string>
#include <iostream>

using namespace std;

struct Artis{
   string idArtis;
   string namaArtis;
   string genreMusik;
   string asal;
};

typedef Artis infotype_artis;         // variabel alias untuk infor
typedef  struct ELmArtis *adrArtis;   // variabel alias untuk pointer

// kerangka dari elemen list
struct ELmArtis
{
    infotype_artis info;
    adrArtis next;
};

// kerangka dari list
struct ListArtis
{
    adrArtis first;
};

bool isEmptyArtis(ListArtis LA);
void createListArtis(ListArtis &LA);
adrArtis alokasiArtis(infotype_artis x);
void dealokasiArtis(adrArtis &P);
adrArtis findArtis(listArtis LA, string idArtis);
void insertFirstArtis(ListArtis &LA, adrArtis P);
void insertAfterArtis(ListArtis &LA, adrArtis prec, adrArtis P);
void insertLastArtis(ListArtis &LA, adrArtis P);
void deleteFirstArtis(ListArtis &LA, adrArtis &P);
void deleteAfterArtis(ListArtis &LA, adrArtis prec, adrArtis &P);
void deleteLastArtis(ListArtis &LA, adrArtis &P);
void printInfoArtis(ListArtis LA);
void createDataArtis(infotype_artis &x);
#endif // ARTIS_H_INCLUDED
