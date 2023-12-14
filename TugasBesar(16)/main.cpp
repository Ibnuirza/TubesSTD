#include <iostream>
#include "tubes.h"

using namespace std;

int main()
{
    ListBuku LB;
    ListPenulis LP;
    ListRelasi LR;
    int pilihan;


    createlistBuku(LB);
    createElmPenulis(LP);

    pilihan = menuUtama();
    while (pilihan != 0) {
        if (pilihan == 1){
           menuBuku()
            }
        }else if (pilihan == 2){
            showData_1301223147(L);
        }else if (pilihan == 3){
            float persen = vocalPersentage_1301223147(L);
            cout << "Nilai presentase vokal dalam List adalah :" << persen * 100 << "%" << endl;
        }else if (pilihan == 4){
            int K = 0;
            cout << "input nilai data ke K terakhir : ";
            cin >> K;
            showLastK_1301223147(L, Data-K);
        }
        pilihan = selectMenu_1301223147();

    }

    cout << "ANDA TELAH KELUAR DARI PROGRAM";

}


}
