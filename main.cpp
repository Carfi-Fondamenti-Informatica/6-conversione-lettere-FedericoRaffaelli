#include <iostream>
#include "lib.h"
using namespace std;

int main(){
    char a;
    cin >> a;
    int ris=verifica(a);
    if(ris){
        cout << converti(a) << endl;
    }else{
        cout << "errore";
    }
    return 0;
}
