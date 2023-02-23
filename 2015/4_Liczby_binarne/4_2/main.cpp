#include <iostream>
#include <fstream>

using namespace std;

int main()
{

    ifstream plik;
    plik.open("liczby.txt");

    string a;
    int licznik1 = 0;
    int licznik2 = 0;

    while(plik >> a){
            if(a[a.length()-1]=='0'){
                licznik1++;
            }
            if(a[a.length()-1]=='0' && a[a.length()-2]=='0' && a[a.length()-3]=='0'){
                licznik2++;
            }
    }

    cout << licznik1 << " " << licznik2;

    return 0;
}
