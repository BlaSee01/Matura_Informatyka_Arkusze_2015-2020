#include <iostream>
#include <fstream>

using namespace std;

int main()
{

    ifstream plik1;
    ifstream plik2;
    plik1.open("dane1.txt");
    plik2.open("dane2.txt");

    int suma = 0;
    int tab1 [10];
    int tab2 [10];

    while(plik1 >>  tab1[0] >> tab1[1] >> tab1[2] >> tab1[3] >> tab1[4] >> tab1[5] >> tab1[6] >> tab1[7] >> tab1[8] >> tab1[9]){
        plik2 >>  tab2[0] >> tab2[1] >> tab2[2] >> tab2[3] >> tab2[4] >> tab2[5] >> tab2[6] >> tab2[7] >> tab2[8] >> tab2[9];
           if(tab1[9]==tab2[9]){
            suma++;
           }
    }

    cout << suma;

    return 0;
}
