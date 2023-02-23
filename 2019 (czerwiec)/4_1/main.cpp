#include <iostream>
#include <fstream>

using namespace std;

bool czy_pierwsza(int x){
    for(int i = 2; i < x; i++){
        if(x%i==0){
            return false;
        }
    }
            return true;
}

int main()
{

    ifstream plik;
    plik.open("liczby.txt");

    int a;

    while(plik >> a){
        if(czy_pierwsza(a)==true && a>=100 && a<=5000){
            cout << a << " ";
        }
    }

    return 0;
}
