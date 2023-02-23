#include <iostream>
#include <fstream>

using namespace std;

string bubble(string a){
    int d = a.length();
    for(int i = 0 ; i < d-1; i++){
        for(int j = 0 ; j < d-1; j++){
            if(a[j]>a[j+1]){
                swap(a[j],a[j+1]);
            }
        }
    }
    return a;
}

int fun(string a){
    int pom = 1;
    for(int i = 1 ; i < a.length() ; i++){
        if(a[i-1]!=a[i]){
            pom++;
        }
    }
    return pom;
}

int main()
{

    fstream plik;
    plik.open("sygnaly.txt");

    string a;
    string b;
    int ile;
    string a_max;
    int ile_max;

    while(plik >> a){
        b = bubble(a);
        ile = fun(b);
        if(ile>ile_max){
            ile_max = ile;
            a_max = a;
        }
    }

    cout << a_max << " " << ile_max;

    return 0;
}
