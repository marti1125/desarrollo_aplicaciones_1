#include <iostream>
#include "milibreria.h"
using namespace std;

int main(){
    double v[5] = {12, 13, 20, 21, 30};
    int pos = BuscaSecuencial(v, 5, 21);
    cout << "Se encontro en la posicion: " << pos << endl;
    return 0;
}

