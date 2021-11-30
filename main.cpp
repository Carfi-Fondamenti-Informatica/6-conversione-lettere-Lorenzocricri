#include <iostream>
#include "cmake-build-debug/primaLibreria.h"

using namespace std;

int main() {
    char x=0;
    char valore=0;
    cout << "Inserire un carattere a scelta" << endl;
    cin >> x;
    if(x>= 'A' and x<= 'Z'){
        cout << "vero" << endl;
        valore = cambio(x);
        cout << valore << endl;
    }else if(x>= 'a' and x<= 'z'){
        cout << "vero" << endl;
        valore = cambio(x);
        cout << valore << endl;
    }else{
        cout << "errore" << endl;
    }
    return 0;
}

