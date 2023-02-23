#include <iostream>
#include <fstream>
#include <math.h>
#include <cstdlib>
#include <conio.h>

using namespace std;

int main()
{

    fstream plik;
    plik.open("dane4.txt");

    int a, b;
    int luka;
    int pom;
    int maks;
    int p;
    int k;
    int maksk;
    int maksp;
    int r;
    int licznik = 2;
    int makslicznik = 0;

    plik >> a;
    plik >> b;
    luka = abs(a-b);
    r = luka;
    p = a;
    k = b;

    while(plik >> pom){
        a = b;
        b = pom;
        luka = abs(a-b);
        if(luka == r){
            licznik++;
            k = b;
        }else{
            if(licznik > makslicznik){
                makslicznik = licznik;
                maksp = p;
                maksk = k;
                }
            licznik = 2;
            p = a;
            r = luka;
        }
    }

cout << makslicznik << " " << maksp << " " << maksk;

    return 0;
}
