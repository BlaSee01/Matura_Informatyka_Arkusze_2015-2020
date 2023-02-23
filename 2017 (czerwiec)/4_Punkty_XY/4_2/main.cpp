#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

int main()
{

    string x, y;
    int suma = 0;

    vector <char> ciag1;
    vector <char> ciag2;

   ifstream plik;
   plik.open("punkty.txt");

   while(plik >> x >> y){

// BS1
        for(int i = 0 ; i < x.length()-1; i++)
        {
            for(int j = 0 ; j < x.length()-1; j++)
            {
                if(x[j]>x[j+1])
                {
                    swap(x[j],x[j+1]);
                }
            }
        }
// BS2
        for(int i = 0 ; i < y.length()-1; i++)
        {
            for(int j = 0 ; j < y.length()-1; j++)
            {
                if(y[j]>y[j+1])
                {
                    swap(y[j],y[j+1]);
                }
            }
        }

// ciag1

        for(int i = 1 ; i <= x.length(); i++){
                if(i==x.length()&& x[i-1]!=x[i-2]){
                    ciag1.push_back(x[i-1]);
                }else{
                    if(x[i]!=x[i-1]){
                    ciag1.push_back(x[i-1]);
                }
            }
        }
// ciag2
        for(int i = 1 ; i <= y.length(); i++){
                if(i==y.length()&& y[i-1]!=y[i-2]){
                    ciag2.push_back(y[i-1]);
                }else{
                    if(y[i]!=y[i-1]){
                    ciag2.push_back(y[i-1]);
                }
            }
        }


        if(ciag1==ciag2){
            suma++;
        }
ciag1.clear();
ciag2.clear();
   }

   cout << suma;

    return 0;
}
