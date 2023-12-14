#ifndef TUBES_H_INCLUDED
#define TUBES_H_INCLUDED
#include <iostream>
#define info(p) p->info
#define next(p) p->next
#define nextW(p) p->nextW
#define nextR(p) p->nextR
#define penulisL(p) p-> penulisL
#define first(l) l.first
#define last(l) l.last
#define prev(p) p->prev


using namespace std;

typedef buku infotypeBuku;
typedef penulis infotypePenulis;
struct buku{
    string judul;
    string kodeterbit;
};

typedef struct elmBuku *adr_buku;
struct elmBuku{
    infotypeBuku info;
    adr_buku next;
    ListRelasi penulisL;
};

struct ListBuku{
    adr_buku first;
};

struct penulis{
    string nama;
    int id;
};
typedef struct elmPenulis *adr_penulis;
struct elmPenulis{
    infotypePenulis info;
    adr_penulis next;
    adr_penulis prev;
};
struct ListPenulis{
    adr_penulis first;
    adr_penulis last;
};

typedef struct elmRelasi *adr_relation;
struct elmRelasi{
    adr_penulis nextW; /*boleh tulis penulis sebagai next ga kak?*/
    adr_relation nextR; /*boleh tulis penulis sebagai next ga kak?*/
};
struct ListRelasi{
    adr_relation first;
};

void createlistBuku(ListBuku &LB);
void createlistPenulis(ListPenulis &LP);
void createlistRelasi(ListRelasi &LR);
adr_buku createElmBuku(infotypeBuku x);
adr_penulis createElmPenulis(infotypePenulis x);
adr_relation createElmRelasi();
void insertlastBuku(ListBuku &LB, adr_buku p);
void insertlastPenulis(ListPenulis &LP, adr_penulis p);
void insertlastRelasi(ListRelasi &LR, adr_relation p);
void deleteElemenBuku(ListBuku &LB, adr_buku &p, string judulBuku, string kt);
void deleteElemenPenulis(ListPenulis &LP, adr_penulis &p, string nama, int id);
void deleteBukudanRelasi(.....);/*menghapus data buku dan relasinya*/
void showAllBuku(ListBuku LB);
adr_buku searchBuku(ListBuku LB, string judulBuku, string kt);
adr_penulis searcPenulis(ListPenulis LP, string nama, int id);
void Tambahdatapenulis(.....);
void connectBukuPenulis(ListBuku &LB, ListPenulis LP, string judulBuku, string kt, string nama, int id);
void showAllbukupenulis(ListBuku LB);
adr_penulis searchPenulisfromB(.....);
void deletePenulisandRelasi(.....);/*dimana semua penulis yang terdapat pada buku apapun dihapus*/
int countmanybook(.....);
int menuUtama();
int menuPenulis();
int menuBuku();



#endif // TUBES_H_INCLUDED
