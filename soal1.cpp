#include <iostream>
using namespace std;


int main(){
    system ("cls");
    int a,b = 0,c = 1;

    cout << "Program deret (+3,+5,+3,+5.....)\n";
    cout << "ingin looping hingga deret ke berapa: ";
    cin >> a;
    
    
    while(b<=a){
        cout << c << " ";
        c+=5;   b+=1;
        if (b == a) break;
        cout << c << " ";
        c+=3;   b+=1;
    }

}
