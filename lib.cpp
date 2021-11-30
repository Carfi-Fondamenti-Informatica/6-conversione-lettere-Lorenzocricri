#include <iostream>
#include "primaLibreria.h"

char cambio(char a) {
    if (a >= 'A' and a <= 'Z') {
        a = a + 32;
    } else if (a >= 'a' and a <= 'z'){
        a = a - 32;
    }
    return a;
}
