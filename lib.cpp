#include <iostream>
#include "lib.h"

bool controllo(char a){
    if(a>= 'A' and a<= 'Z'){
        return true;
    }else if(a>= 'a' and a<= 'z'){
        return true;
    }else{
        return false;
    }
}

char cambio(char a) {
    if (a >= 'A' and a <= 'Z') {
        a = a + 32;
    } else if (a >= 'a' and a <= 'z'){
        a = a - 32;
    }
    return a;
}
