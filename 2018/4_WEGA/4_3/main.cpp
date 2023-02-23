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

int main()
{

    fstream plik;
    plik.open("sygnaly.txt");

    string a;
    string b;

    while(plik >> a){
        b = bubble(a);
        if(b[b.length()-1]-b[0]<=10){
            cout << a << endl;
        }
    }

    return 0;
}

