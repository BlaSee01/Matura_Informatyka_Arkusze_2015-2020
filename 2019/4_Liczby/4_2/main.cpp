#include <iostream>
#include <fstream>

using namespace std;

int silnia(int x){

    int wynik = 1;

    for(int i = 2; i <= x; i++){
        wynik = wynik*i;
    }

    return wynik;
}

int main()
{

    ifstream plik;
    plik.open("liczby.txt");

    string a;
    int dlg;
    int b;
    int suma = 0;
    int pom;

    while(plik >> a){

        dlg = a.length();

        for(int i = 0 ; i < dlg ; i++){
        b = (int)a[i]-48;
        suma+=silnia(b);
        }

        if(suma==atoi(a.c_str())){
            cout << a << endl;
        }

        suma = 0;
    }

    return 0;
}
