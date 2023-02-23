#include <iostream>
#include <math.h>
#include <fstream>

using namespace std;

int main()
{

    ifstream plik;
    plik.open("punkty.txt");

    int x [999];
    int y [999];

    int x1;
    int x2;
    int y1;
    int y2;
    double pom;
    double wynik = 0.0;

    for(int i = 0 ; i < 1000; i++){
        plik >> x[i] >> y[i];
    }

    for(int i = 0 ; i < 1000; i++){
        for(int j = 0 ; j < 1000; j++){
                pom = round(sqrt(pow((x[i]-x[j]),2)+pow((y[i]-y[j]),2)));
        if(pom > wynik){
            wynik = pom;
            x1 = x[i];
            x2 = x[j];
            y1 = y[i];
            y2 = y[j];
        }
        pom = 0;
        }
    }

   cout << wynik << ", P1=(" << x1 << "," << y1 << "), P2=(" << x2 << "," << y2 << ")";

    return 0;
}
