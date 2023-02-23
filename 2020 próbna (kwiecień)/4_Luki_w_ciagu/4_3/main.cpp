#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

int main()
{

fstream plik;
plik.open("dane4.txt");

vector <int> ile;
int a, b, pom, r;

plik >> a;
plik >> b;
r = abs(a-b);

ile.push_back(r);

while(plik >> pom){
    a = b;
    b = pom;
    r = abs(a-b);
    ile.push_back(r);
}

for(int i = 0 ; i < ile.size()-1 ; i++){
    for(int j = 0 ; j < ile.size()-1 ; j++){
        if(ile.at(j)>ile.at(j+1)){
            swap(ile.at(j),ile.at(j+1));
        }
    }
}

int maksimum = 0;
int licznik2 = 1;
int licznik2maks = 0;

vector <int> wyniki;

for(int i = 1 ; i < ile.size() ; i++){
    if(ile.at(i-1)==ile.at(i)){
        licznik2++;
    }else{
        if(licznik2>licznik2maks){
            licznik2maks = licznik2;
        }
        licznik2 = 1;
    }
}

for(int i = 1 ; i < ile.size() ; i++){
    if(ile.at(i-1)==ile.at(i)){
        licznik2++;
    }else{
        if(licznik2==licznik2maks){
            wyniki.push_back(ile.at(i-1));
        }
        licznik2 = 1;
    }
}

cout << licznik2maks << ", dla: ";

for(int i = 0 ; i < wyniki.size(); i++){
    cout << wyniki.at(i) << " ";
}

    return 0;
}
