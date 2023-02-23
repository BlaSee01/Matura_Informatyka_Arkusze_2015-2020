#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
#include <conio.h>

using namespace std;

string zamiana(int a){
    char b [255];
    itoa(a,b,2);
    return (string)b;
}

int main()
{

   ifstream plik;
   plik.open("liczby.txt");

   string a;
   int b;
   int suma = 0;

   while (plik >> a){

    b = a.length();
    if(a[b-1]=='4'){
        for(int i = 0; i < b; i++){
            if(a[i]=='0'){
                break;
            }
            if(i==b-1){
                suma++;
            }
        }
    }

   }

   cout << suma;

    return 0;
}
