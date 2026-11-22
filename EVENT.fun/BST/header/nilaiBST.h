#ifndef TIKETBST_H_INCLUDED
#define TIKETBST_H_INCLUDED
#include <string>
#include <iostream>

using namespace std;

struct PenjualanTiket
{
    string namaPembeli;
    string idKonser;
    int jumlahTiket;
    int totalHarga;
    string statusPembayaran;
};

typedef PenjualanTiket infotype_tiket; // variabel alias untuk infor
typedef  struct nodeTiket *adrTiket;   // variabel alias untuk pointer

// kerangka dari elemen node
struct nodeNilai
{
    infotype_tiket info;
    adrTiket left;
    adrTiket right;
};

// kerangka dari BST
struct BST
{
    adrTiket root;
};

bool isSmaller(infotype_tiket left, infotype_tiket right);
void hitungTotalHarga(infotype_tiket &x, int hargaSatuan);
bool isEmptyBST(BST T);
void createBST(BST &T);
adrTiket alokasiTiket(infotype_tiket x);
void dealokasiTiket(adrTiket &P);
adrTiket searchTiket(BST T, int jumlahTiket, string namaPembeli);
void insertBST(BST &T, adrTiket P);
void deleteNodeByAddress(BST &T, adrTiket &P);
void deleteTiketByKey(BST &T, int jumlahTiket, string namaPembeli);
void printInOrder(BST T);
void printPreOrder(BST T);
void printPostOrder(BST T);
adrTiket findMin(BST T);
adtTiket findMax(BST T);
int hitungTinggi(BST T);
int hitungJumlahNode(BST T);
void createDataTiket(infotype_tiket &x);


#endif // NILAIBST_H_INCLUDED
