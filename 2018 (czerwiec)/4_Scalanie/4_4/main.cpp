#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

int main()
{

    ifstream plik1;
    ifstream plik2;
    plik1.open("przyklad1.txt");
    plik2.open("przyklad2.txt");

    ofstream plik3;
    plik3.open("wynik4_4.txt");

    int tab1 [10];
    int tab2 [10];

    int suma = 0;
    vector <int> ciag;

    while(plik1 >> tab1[0] >> tab1[1] >> tab1[2] >> tab1[3] >> tab1[4] >> tab1[5] >> tab1[6] >> tab1[7] >> tab1[8] >> tab1[9]){
        plik2 >>  tab2[0] >> tab2[1] >> tab2[2] >> tab2[3] >> tab2[4] >> tab2[5] >> tab2[6] >> tab2[7] >> tab2[8] >> tab2[9];

    int *x = &tab1[0];
    int *y = &tab2[0];

   while(x!=&tab1[9] || y!=&tab2[9]){
        if(x!=&tab1[9] && y!=&tab2[9]){
        if(*x<*y){
            ciag.push_back(*x);
            x++;
        }else{
            ciag.push_back(*y);
            y++;
        }
        }else{
            if(x==&tab1[9]){
                if(*x<*y){
                    ciag.push_back(*x);
                    while(y!=&tab2[10]){
                        ciag.push_back(*y);
                        y--;
                    }
                }else{
                    while(*y<*x){
                        ciag.push_back(*y);
                    }
                    ciag.push_back(*x);
                    while(y!=&tab2[10]){
                        ciag.push_back(*y);
                        y--;
                    }
                }
            }else if(y==&tab2[9]){
                if(*y<*x){
                    ciag.push_back(*y);
                    while(x!=&tab1[10]){
                        ciag.push_back(*x);
                        x--;
                    }
                }else{
                    while(*x<*y){
                        ciag.push_back(*x);
                    }
                    ciag.push_back(*y);
                    while(x!=&tab1[10]){
                        ciag.push_back(*x);
                        x--;
                    }
                }
            }
        }
   }

   for(int i = 0 ; i < ciag.size() ; i++){
        cout << ciag.at(i) << " ";
   }

   cout << endl;

   ciag.clear();

    }

    return 0;
}
