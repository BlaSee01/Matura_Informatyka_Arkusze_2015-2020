#include <iostream>
#include <fstream>

using namespace std;

bool funkcja (string x, string y){
    int dlg = x.length();
    for(int i = 0 ; i < dlg ; i++){
        if(x[i]!=y[i]){
            if(x[i]=='1'){
                return true;
            }else{
                return false;
            }
        }
    }
}

int main()
{

    int a , b , c= 5;
    cout << a;

    return 0;
}
