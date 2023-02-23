#include <iostream>
#include <fstream>
#include <math.h>

using namespace std;

int main()
{

    ifstream plik;
    plik.open("dane.txt");

    int tab [200][320];
    int licznik = 0;

    for(int i = 0 ; i < 200 ; i++){
        for(int j = 0 ; j < 320 ; j++){
            plik >> tab[i][j];
        }
    }

   for(int i = 0 ; i < 200 ; i++){
        for(int j = 0 ; j < 320 ; j++){
            if(i==0){
                if(j==0){
                    if(abs(tab[i][j]-tab[i][j+1])>128){
                        licznik++;
                    }else if(abs(tab[i][j]-tab[i+1][j])>128){
                        licznik++;
                    }
                }else if(j==319){
                    if(abs(tab[i][j]-tab[i][j-1])>128){
                        licznik++;
                    }else if(abs(tab[i][j]-tab[i+1][j])>128){
                        licznik++;
                    }
                }else{
                    if(abs(tab[i][j]-tab[i][j+1])>128){
                        licznik++;
                    }else if(abs(tab[i][j]-tab[i][j-1])>128){
                        licznik++;
                    }else if(abs(tab[i][j]-tab[i+1][j])>128){
                        licznik++;
                    }
                }
            }else if(i==199){
                if(j==0){
                    if(abs(tab[i][j]-tab[i][j+1])>128){
                        licznik++;
                    }else if(abs(tab[i][j]-tab[i-1][j])>128){
                        licznik++;
                    }
                }else if(j==319){
                    if(abs(tab[i][j]-tab[i][j-1])>128){
                        licznik++;
                    }else if(abs(tab[i][j]-tab[i-1][j])>128){
                        licznik++;
                    }
                }else{
                    if(abs(tab[i][j]-tab[i][j+1])>128){
                        licznik++;
                    }else if(abs(tab[i][j]-tab[i][j-1])>128){
                        licznik++;
                    }else if(abs(tab[i][j]-tab[i-1][j])>128){
                        licznik++;
                    }
                }
            }else{
                if(j==0){
                    if(abs(tab[i][j]-tab[i][j+1])>128){
                        licznik++;
                    }else if(abs(tab[i][j]-tab[i-1][j])>128){
                        licznik++;
                    }else if(abs(tab[i][j]-tab[i+1][j])>128){
                        licznik++;
                    }
                }else if(j==319){
                    if(abs(tab[i][j]-tab[i][j-1])>128){
                        licznik++;
                    }else if(abs(tab[i][j]-tab[i+1][j])>128){
                        licznik++;
                    }else if(abs(tab[i][j]-tab[i-1][j])>128){
                        licznik++;
                    }
                }else{
                    if(abs(tab[i][j]-tab[i][j+1])>128){
                        licznik++;
                    }else if(abs(tab[i][j]-tab[i][j-1])>128){
                        licznik++;
                    }else if(abs(tab[i][j]-tab[i-1][j])>128){
                        licznik++;
                    }else if(abs(tab[i][j]-tab[i+1][j])>128){
                        licznik++;
                    }
                }
            }
        }
    }

    cout << licznik;

    return 0;
}
