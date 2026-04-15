#include <iostream>
#include <conio.h>
#include <cstring>
using namespace std;

int main(){ system("cls");
    char kalimat[10000],huruf;
    int p,hapus;

    cout << "Masukkan kalimat: ";
    cin.getline(kalimat,10000);

    cout << "Huruf yang ingin dihilangkan: ";
    cin >> huruf;

    int j = 0;
    for(int i = 0; kalimat[i] != '\0'; i++){
        if(kalimat[i] != huruf){
            kalimat[j++] = kalimat[i];
        } else {
            hapus++;
        }
    }
    kalimat[j] = '\0';

    cout << kalimat << endl;
    cout << "Karakter terhapus = " << hapus;
}

