#include <iostream>
#include <fstream>

using namespace std;

int main()
{

   ifstream plik;
   plik.open("liczby.txt");

   string a;
   int b;
   int suma = 0;

   while (plik >> a){

    b = a.length();
    if(a[b-1]=='8'){
        suma ++;
    }

   }

   cout << suma;

    return 0;
}
