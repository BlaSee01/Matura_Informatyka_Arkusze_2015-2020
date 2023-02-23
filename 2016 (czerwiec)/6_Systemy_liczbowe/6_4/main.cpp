#include <iostream>
#include <fstream>
#include <cstdlib>
#include <conio.h>

using namespace std;

int zamiana(string b){
    int x;
    string y;
    string z;

    z = b[b.length()-1];
    int pom = atoi(z.c_str());

    for(int i = 0; i < b.length()-1; i++){
        y+=b[i];
    }

    x = strtol(y.c_str(),NULL,pom);
    return x;
}

int main()
{

    ifstream plik;
    plik.open("liczby.txt");

    string a;
    int b;

    plik >> a;

    int maks = zamiana(a);
    int mini = zamiana(a);

    string maks2 = a;
    string mini2 = a;

    while(plik >> a){
        b = zamiana(a);
        if(b>maks){
            maks = b;
            maks2 = a;
        }else if(b<mini){
            mini = b;
            mini2 = a;
        }
    }

    cout << "MAKS: " << maks2 << ", " << maks << ", MINI: " << mini2 << ", " << mini;

    return 0;
}
