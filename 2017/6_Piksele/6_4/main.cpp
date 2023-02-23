#include <iostream>
#include <fstream>
#include <math.h>

using namespace std;

int main()
{

    ifstream plik;
    plik.open("dane.txt");

    int tab [200][320];
    int ciag = 1;
    int ciag_max = 0;

    for(int i = 0 ; i < 200 ; i++){
        for(int j = 0 ; j < 320 ; j++){
            plik >> tab[i][j];
        }
    }

    for(int j = 0 ; j < 320 ; j++){
        for(int i = 1 ; i < 200 ; i++){
            if(tab[i-1][j]==tab[i][j]){
                ciag++;
            }else{
                if(ciag > ciag_max){
                    ciag_max = ciag;
                    ciag = 1;
                }else{
                    ciag = 1;
                }
            }
        }
    }

    cout << ciag_max;

    return 0;
}
