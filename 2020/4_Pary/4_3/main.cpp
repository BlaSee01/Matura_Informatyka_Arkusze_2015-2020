#include <iostream>
#include <fstream>

using namespace std;

int main()
{

    ifstream plik;
    plik.open("pary.txt");

    int a;
    string b;
    int a2;
    string b2;
    int dlg1;
    int dlg2;
    int dlg;

    plik >> a >> b;

    while(plik >> a2 >> b2){
            if(a2 == b2.length()){
        if(a2 < a){
            a = a2;
            b = b2;
        }else if(a2 == a){
            dlg1 = b.length();
            dlg2 = b2.length();
            if(dlg1>dlg2){
                dlg = dlg2;
            }else{
                dlg = dlg1;
            }
            for(int i = 0 ; i < dlg ; i++){
                if(b2[i]<b[i]){
                    a = a2;
                    b = b2;
                    break;
                }else if(b2[i]>b[i]){
                    break;
                }else{
                    if(i == dlg-1){
                        if(dlg2<dlg1){
                            a = a2;
                            b = b2;
                        }
                    }
                }
            }
        }
        }
    }

    cout << a << " " << b;

    return 0;
}
