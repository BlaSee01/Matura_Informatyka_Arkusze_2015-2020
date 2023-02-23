#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream plik;
    plik.open("dane.txt");

    int a;
    int maks;
    int mini;

    plik >> maks;

    mini = maks;

    while(plik >> a){
        if(a>maks){
            maks = a;
        }else if(a<mini){
            mini = a;
        }
    }

    cout << "MAX: " << maks << ", MIN: " << mini;

    return 0;
}
