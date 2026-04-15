#include<conio.h>
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Input jumlah n: ";
    cin >> n;
    
    cout << "H";
    for (int i = 0; i < n; i++) {
        cout << "o";
    }
    cout << "r";
    for (int i = 0; i < n; i++) {
        cout << "e";
    }
    for (int i = 0; i < n; i++) {
        cout << "!";
    }
    
    getch();
    return 0;
}
