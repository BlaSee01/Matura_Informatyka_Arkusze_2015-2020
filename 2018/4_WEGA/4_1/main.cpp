#include <iostream>
#include <fstream>

using namespace std;

int main()
{

    fstream plik;
    plik.open("sygnaly.txt");

    string a;
    int licznik = 0;
    string wynik;

    while(plik >> a){
        licznik++;
        if(licznik==40){
            wynik+=a[9];
            licznik=0;
        }
    }

    cout << wynik;

    return 0;
}
