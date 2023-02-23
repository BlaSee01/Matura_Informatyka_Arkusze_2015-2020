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
    int mini;

    plik >> a;
    plik >> b;
    luka = abs(a-b);
    mini = luka;
    maks = luka;

    while(plik >> pom){
        a = b;
        b = pom;
        luka = abs(a-b);
        if(luka>maks){
            maks = luka;
        }
        if(luka<mini){
            mini = luka;
        }
    }

    cout << "MIN: " << mini << ", MAX: " << maks;

    return 0;
}
