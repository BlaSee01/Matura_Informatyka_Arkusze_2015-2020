#include <iostream>
#include <fstream>

using namespace std;

bool czy_p(int a){
    for(int i = 2 ; i < a ; i++){
        if(a%i==0){
            return false;
        }
    }
    return true;
}


int main()
{

    ifstream plik;
    plik.open("pary.txt");

    int a;
    string b;
    int x ,y;

    while(plik >> a >> b){
        for(int i = 5; i <= a ; i++){
            if(czy_p(i)==true && i%2!=0){
                if(czy_p(a-i)==true && (a-i)%2!=0){
                    cout << a << " " << i << " " << a-i << endl;
                    break;
                }
            }
        }
    }

    return 0;
}
