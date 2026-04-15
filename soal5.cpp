#include<conio.h>
#include <iostream>
using namespace std;

int main() {
    int n;
    int pembagi = 0;
    
    cout << "Masukkan bilangan: ";
    cin >> n;
    
    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            pembagi++;
        }
    }
    
    if (pembagi == 2) {
        cout << "Prima" << endl;
    } else {
        cout << "Bukan Prima" << endl;
    }
    
    getch();
    return 0;
}
