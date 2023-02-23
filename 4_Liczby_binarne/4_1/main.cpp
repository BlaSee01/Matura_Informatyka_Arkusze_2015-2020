#include <iostream>
#include <fstream>

using namespace std;

int main()
{

    ifstream plik;
    plik.open("liczby.txt");

    string a;
    int x, y = 0;
    int licznik = 0;

    while(plik >> a){
        for(int i = 0 ; i < a.length() ; i++){
            if(a[i]=='0'){
                x++;
            }else{
                y++;
            }
        }
        if(x>y){
            licznik++;
        }
        x=0;
        y=0;
    }

    cout << licznik;

    return 0;
}
