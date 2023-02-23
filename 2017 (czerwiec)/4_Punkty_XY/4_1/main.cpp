#include <iostream>
#include <fstream>

using namespace std;

bool czy_pierwsza(int a){

    for(int i = 2; i < a; i++){
        if(a%i==0){
            return false;
        }
    }

        return true;

}

int main()
{

    int x, y;
    int suma = 0;

   ifstream plik;
   plik.open("punkty.txt");

   while(plik >> x >> y){
        if(czy_pierwsza(x)==true && czy_pierwsza(y)==true){
            suma++;
        }
   }

   cout << suma;

    return 0;
}
