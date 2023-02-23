#include <iostream>
#include <fstream>

using namespace std;

string szyfr (string a){

    int dlg = a.length();
    int k = 107;
    for(int i = 0 ; i < dlg; i++){
        for(int j = 1 ; j <= k; j++){
            if(a[i]!='Z'){
            a[i]++;
            }else{
            a[i]='A';
            }
        }
    }
    return a;
}

string szyfr2 (string a, int k){

    int dlg = a.length();

    for(int i = 0 ; i < dlg; i++){
        for(int j = 1 ; j <= k; j++){
            if(a[i]!='A'){
            a[i]--;
            }else{
            a[i]='Z';
            }
        }
    }
    return a;
}

bool czy_dobrze(string a, string b){

    int klucz;
    int pom;
    int dlg = a.length();

    if(a==b){
        return true;
    }

    if(a[0]<b[0]){
        klucz = b[0]-a[0];
    }else{
        klucz = ('Z'-a[0])+b[0]-'A'+1;
    }

    for(int i = 1 ; i < dlg ; i++){
        if(a[i]<b[i]){
            pom = b[i]-a[i];
        }else{
            pom = ('Z'-a[i])+b[i]-'A'+1;
        }
            if(pom != klucz){
            return false;
        }
    }
    return true;
}

int main()
{

   ifstream plik;
   plik.open("dane_6_1.txt");

   ifstream plik2;
   plik2.open("dane_6_2.txt");

   ofstream wynik2;
   wynik2.open("wyniki_6_2.txt");

   ifstream plik3;
   plik3.open("dane_6_3.txt");

   string x;
   string pom1;
   string y;
   string pom2;
   int kod;
   string z1;
   string z2;


   cout << "ZAD 1" << endl;

   while(plik >> x){
        pom1 = szyfr(x);
        cout << pom1 << endl;
   }


    cout << endl << "ZAD 2" << endl;

    while(plik2 >> y >> kod){
        szyfr2(y,kod);
        cout << szyfr2(y,kod) << endl;
    }

    cout << endl <<"ZAD 3" << endl;

    while (plik3 >> z1 >> z2){
        if(czy_dobrze(z1,z2)==false){
            cout << z1 << endl;
        }
    }

    return 0;
}
