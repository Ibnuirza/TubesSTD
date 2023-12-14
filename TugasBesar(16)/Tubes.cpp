#include "tubes.h"

void createlistBuku(ListBuku &LB){
    first(LB) = NULL;
}
void createlistPenulis(ListPenulis &LP){
    first(LP) = NULL;
    last(LP) = NULL;
}
void createlistRelasi(ListRelasi &LR){
    first(LR) = NULL;
}
adr_buku createElmBuku(infotypeBuku x){
    adr_buku p = new elmBuku;
    info(p) = x;
    next(p) = NULL;
    createlistRelasi(penulisL(p));
    return p;
}
adr_relation createElmRelasi(){
    adr_relation p = new elmRelasi;
    nextW(p) = NULL;/*ganti jadi nextpenulis*/
    nextR(P) = NULL;
    return p;
}
adr_penulis createElmPenulis(infotypePenulis x){
    adr_penulis p = new elmPenulis;
    info(p) = x;
    next(p) = NULL;
    return p;
}

void insertlastBuku(ListBuku &LB, adr_buku p){
    adr_buku last;
    last = first(LB);
    if (last == NULL){
        first(LB) = p;
    }else{
        while (next(last)!= NULL){
            last = next(last);
        }
        next(last) = p;
    }
}
void insertlastPenulis(ListPenulis &LP, adr_penulis p){
    if (first(LP) == NULL){
        first(LP) = p;
        last(LP) = p;
    }else{
        next(last(LP)) = p;
        prev(p) = last(LP);
        next(p)= first(LP);
        prev(first(LP)) = P;
        last(LP) = p;
    }
}
void insertlastRelasi(ListRelasi &LR, adr_relation p){
    adr_relation last = first(LR);
    if (last == NULL){
        first(LR) = p;
    }else{
        while(nextR(last)!= NULL){
            last = nextR(last);
        }
        nextR(last) = p;
    }
}
void deleteElemenBuku(ListBuku &LB, adr_buku &p, string judulBuku, string kt){
/*apakah sama dengan deletebukudanrelasi?*/
}
void deleteElemenPenulis(ListPenulis &LP, adr_penulis &p, string nama, int id){
...
}
void deleteBukudanRelasi(){
...
}
void showAllBuku(ListBuku LB){
...
}
adr_buku searchBuku(ListBuku LB, string judulBuku, string kt){
    adr_buku foundB = first(LB);
    while (foundB != NULL && (info(foundB).judul != judulBuku || info(foundB).kodeterbit != kt)){
        foundB = next(foundB);
    }
    return foundB;
}
adr_penulis searcPenulis(ListPenulis LP, string nama, int id );{
adr_penulis foundP = first(LP);
    while (foundP != NULL && (info(foundP).nama != nama || info(foundP).id != id)){
        foundP = next(foundP);
    }
    return foundP;
}
void Tambahdatapenulis(){
    /*sama dengan insert last? dan digunakan untuk apa?*/
}
void connectBukuPenulis(ListBuku &LB, ListPenulis LP, string judulBuku, string kt, string nama, int id){
    adr_buku foundB = searchBuku(LB,judulBuku,kt);
   /* otomatis tersimpan di foundB*/
    adr_penulis foundP = searcPenulis(LP,nama,id);

    if (foundB != NULL && foundP != NULL ){
        adr_relation relasiBaru = createElmRelasi();
        nextW(relasiBaru) = foundP;
        insertlastRelasi(penulisL(foundB),relasiBaru);
    }
}
void showAllbukupenulis(ListBuku LB){
...
}
adr_penulis searchPenulisfromB(){
...
}
void deletePenulisandRelasi(){
...
}
int countmanybook(){
    for (int i = 0; p != NULL; i++){
    p =
    }
}

/*jadi dalam menu ada menu
ada 1 menu utama, dimana isinya cuman 3 yaitu
1. menu untuk buku
2. menu untuk penulis
3. menu untuk keluar

dan di menu buku akan ada menu untuk fitu yang berkaitan dengan buku
dan di menu penulis akan ada menu untuk fitur yang berkaitan dengan penulis*/

int menuUtama(){
    cout << "====== Book & Writer ======" << endl;
    cout << "1. Data Buku " << endl;
    cout << "2. Data penulis" << endl;
    cout << "0. Exit" << endl;

    int input = 0;
    cout << "pilihan anda: ";
    cin >> input;
    return input;
}

int menuPenulis(){
    cout << "===== MENU PENULIS =====" << endl;
    cout << "1. Tambah Data Penulis " << endl;
    cout << "2. Mencari Data Penulis" << endl;
    cout << "3. Mencari Data Penulis Pada Buku: " << endl;
    cout << "4. Menghapus Data Penulis Pada Buku: " << endl;
    cout << "0. Exit" << endl;

    int input = 0;
    cout << "pilihan anda: ";
    cin >> input;
    return input;

}

int menuBuku(){
    cout << "===== MENU BUKU =====" << endl;
    cout << "1. Tambah Data Buku " << endl;
    cout << "2. Tampilkan Semua Data Buku" << endl;
    cout << "3. Menghapus Data Buku" << endl;
    cout << "4. Mencari Data Buku" << endl;
    cout << "5. Tampilkan Data Buku Dan Penulis" << endl;
    cout << "6. Jumlah Buku yang ditulis oleh penulis" << endl;
    cout << "0. Exit" << endl;

    int input = 0;
    cout << "pilihan anda: ";
    cin >> input;
    return input;

}

