#include <iostream>
#include <fstream>
#include <cstdlib>

using namespace std;

bool czy_pierwsza(int x){
    for(int i = 2; i < x; i++){
        if(x%i==0){
            return false;
        }
    }
            return true;
}

int zamiana(int a){
    string pom = to_string(a);
    string pom2;

    for(int i = pom.length()-1; i>=0; i--){
        pom2+=pom[i];
    }

    int b = atoi(pom2.c_str());
    return b;
}

int main()
{

    ifstream plik;
    plik.open("pierwsze.txt");

    int a;
    int b;

    while(plik >> a){

    b = zamiana(a);

        if(czy_pierwsza(a)==true && czy_pierwsza(b)==true){
            cout << a << " ";
        }
    }

    return 0;
}
