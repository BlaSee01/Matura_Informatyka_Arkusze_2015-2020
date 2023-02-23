#include <iostream>
#include <fstream>

using namespace std;

int main()
{

    ifstream plik;
    plik.open("liczby.txt");

    int a;
    int licznik = 0;

    while(plik >> a){
        while(a>=1){
            if(a%3==0){
                a=a/3;
            }else{
                if(a==1){
                    licznik++;
                    break;
                }else{
                    break;
                }
            }
        }
    }

    cout << licznik;

    return 0;
}
