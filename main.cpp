#include <iostream>
#include "cmake-build-debug/primaLibreria.h"

using namespace std;

int main() {
    char x=0;
    char valore=0;
    cin >> x;
    if(controllo(x) == true){
        cout << "vero" << endl;
        valore = cambio(x);
        cout << valore << endl;
    }else{
        cout << "errore" << endl;
    }
    return 0;
}

