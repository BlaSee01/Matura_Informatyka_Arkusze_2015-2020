#include <iostream>
#include <fstream>

using namespace std;

int main()
{

    ifstream plik;
    plik.open("pary.txt");

    int a;
    int dlg;
    string b;
    int licznik;
    int licznik_max;
    char wynik;

    while(plik >> a >> b){
        dlg = b.length();
        licznik = 1;
        licznik_max = 0;
        for(int i = 1; i < dlg; i++){
            if(b[i]==b[i-1]){
                licznik++;
            }
            if(b[i]!=b[i-1] || i == dlg-1){
                if(licznik > licznik_max){
                    licznik_max = licznik;
                    wynik = b[i-1];
                    licznik = 1;
                }else{
                    licznik = 1;
                }
            }
        }
        for(int i = 0 ; i < licznik_max ; i++){
            cout << wynik;
        }
        cout << " " << licznik_max << endl;
    }

    return 0;
}
