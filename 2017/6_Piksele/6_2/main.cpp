#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream plik;
    plik.open("dane.txt");

    int a;
    int licznik = 0;

    int tab [200][320];

    for(int i = 0 ; i < 200 ; i++){
        for(int j = 0 ; j < 320 ; j++){
            plik >> tab[i][j];
        }
    }

    for(int i = 0 ; i < 200 ; i++){
        for(int j = 0 ; j < 320 ; j++){
            if(tab[i][j]!=tab[i][319-j]){
                licznik++;
                break;
            }
        }
    }

    cout << licznik;

    return 0;
}
