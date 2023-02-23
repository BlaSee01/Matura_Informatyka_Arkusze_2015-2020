#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

int main()
{

    ifstream plik1;
    ifstream plik2;
    plik1.open("dane1.txt");
    plik2.open("dane2.txt");

    int tab1 [10];
    int tab2 [10];

    int x = 0;
    int suma = 0;

    vector <int> ciag1;
    vector <int> ciag2;

    while(plik1 >>  tab1[0] >> tab1[1] >> tab1[2] >> tab1[3] >> tab1[4] >> tab1[5] >> tab1[6] >> tab1[7] >> tab1[8] >> tab1[9]){
        plik2 >>  tab2[0] >> tab2[1] >> tab2[2] >> tab2[3] >> tab2[4] >> tab2[5] >> tab2[6] >> tab2[7] >> tab2[8] >> tab2[9];

        x++;

        for(int i = 0; i <=9 ; i++){
            if(tab1[i]!=tab1[i+1]){
                ciag1.push_back(tab1[i]);
            }else if(i==9 && tab1[8]!=tab1[9]){
                ciag1.push_back(tab1[i]);
            }
        }

        for(int i = 0; i <=9 ; i++){
            if(tab2[i]!=tab2[i+1]){
                ciag2.push_back(tab2[i]);
            }else if(i==9 && tab2[8]!=tab2[9]){
                ciag2.push_back(tab2[i]);
            }
        }

        if(ciag1==ciag2){
            cout << x << endl;
            suma++;
        }
        ciag1.clear();
        ciag2.clear();

    }

    cout << "Suma: " << suma;


    return 0;
}
