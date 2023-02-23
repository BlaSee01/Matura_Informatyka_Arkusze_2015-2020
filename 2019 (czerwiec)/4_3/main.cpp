#include <iostream>
#include <fstream>
#include <cstdlib>

using namespace std;

int waga(int x){
        string y;
        y=to_string(x);
        int suma;
        int pom;
    if(y.length()==1){
        return x;
    }else{
        for(int i = 0; i < y.length(); i++){
            pom = (int)y[i]-48;
            suma+=pom;
        }
        return waga(suma);
    }
}

int main()
{

int s = 0;
int a;

    ifstream plik;
    plik.open("pierwsze.txt");

    while(plik >> a){
            cout << a << " " << waga(a) << endl;
            if(waga(a)==1){
                s++;
            }
    }

cout << s;

    return 0;
}
