#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    int x, y;
    int inside = 0;
    int outside = 0;
    int onto = 0;
    ifstream plik;
    plik.open("punkty.txt");

    while(plik >> x >> y){
        if(((x==5000 || x == -5000)&&(y<=5000 && y>=-5000))||((y==5000 || y == -5000)&&(x<=5000 && x>=-5000))){
            onto++;
        }else if((x<5000 && x>-5000)&&(y<5000 && y>-5000)){
            inside++;
        }else{
            outside++;
        }
    }

    cout << "Wewnatrz: " << inside << endl;
    cout << "Na kwadracie: " << onto << endl;
    cout << "Zewnatrz: " << outside;

    return 0;
}
