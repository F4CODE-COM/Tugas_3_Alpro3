#include<conio.h>
#include <iostream>
using namespace std;

int main() {
    int n;
    int jumlah = 0;
    
    cout << "Masukkan bilangan: ";
    cin >> n;
    
    for (int i = 2; i <= n; i = i + 2) {
        jumlah = jumlah + (i * i);
    }
    
    cout << "Jumlah semua kuadrat bilangan genap hingga " << n << ": \n";
    cout << jumlah << endl;
    
    getch();
    return 0;
}
