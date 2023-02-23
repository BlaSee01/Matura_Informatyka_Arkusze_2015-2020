#include <iostream>
#include <fstream>

using namespace std;

int zamiana(string b){
    int x;
    string y;

    for(int i = 0; i < b.length()-1; i++){
        y+=b[i];
    }

    x = strtol(y.c_str(),NULL,2);
    return x;
}

int main()
{



    ifstream plik;
    plik.open("liczby.txt");

    string a;
    int b, c;
    int suma = 0;

    while (plik >> a){
        b = a.length();
        if(a[b-1]=='2'){
            c = zamiana(a);
            if(c%2==0){
                suma++;
            }
        }
    }

    cout << suma;

    return 0;
}
