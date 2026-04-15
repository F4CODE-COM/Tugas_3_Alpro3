#include <iostream>
using namespace std;


int main(){
    int tahun,interval,next,prev;
    system("cls");

    cout <<"Masukkan tahun: ";
    cin >> tahun;
    cout <<"Masukkan Interval (- untuk mundur ke tahun sebelumnya): " ;
    cin >> interval;

    if((tahun>=1000 && tahun<=9000) && (interval>=(-tahun) && interval<=9999-tahun)){
        if(interval>=0){ next = 1;
            while(next<=interval+1){
                if(tahun % 4 == 0){
                    if(tahun % 100 != 0 || tahun % 400 == 0){
                        cout << tahun << " Kabisat";
                    }
                    else cout << tahun <<" Bukan kabisat";
                }else cout << tahun <<" Bukan kabisat";
                next++;     tahun++;        cout << endl;
            }
        }
        else {prev = 0;
            while(prev>=interval){
                if(tahun % 4 == 0){
                    if(tahun % 100 != 0 || tahun % 400 == 0){
                        cout << tahun << " Kabisat";
                    }
                    else cout << tahun <<" Bukan kabisat";
                }else cout << tahun <<" Bukan kabisat";
                prev--;     tahun--;        cout << endl;
            }
        }
    }
    else cout << "WARNING !!! INPUT DILUAR BATAS (tahun diantara 1000 dan 9000 inklusif, interval diantara -tahun dan 9999-tahun inklusif)";

}
