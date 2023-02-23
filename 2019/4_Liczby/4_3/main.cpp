#include <iostream>
#include <fstream>

using namespace std;

int funkcja(int a, int b){
    while(a!=b){
        if(a>b){
            a = a-b;
        }else{
            b = b-a;
        }
    }
    return a;
}

int main()
{

    ifstream plik;
    plik.open("przyklad.txt");

    int a;
    int licznik;
    int licznik_max = 0;
    int p;
    int p_max;
    int nwd;
    int nwd_max;
    int b;

    plik >> a;
    plik >> b;

    p = a;
    licznik = 2;
    nwd = funkcja(a,b);

    while(plik >> b){

        if(licznik == 1){
            p = b;
            nwd=funkcja(nwd,b);
        }

        if(funkcja(nwd,b)==nwd){
                licznik++;
        }else{
            if(licznik>licznik_max){
                licznik_max = licznik;
                p_max = p;
                nwd_max = nwd;
                licznik = 1;
            }else{
                licznik = 1;
            }
        }
    }

    return 0;
}
