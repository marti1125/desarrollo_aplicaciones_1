int BuscaBinaria(double v[], int n, double buscado) {
    int izq, dch, centro;
    izq = 0;
    dch = n;
    centro = (izq+dch)/2;
    while ((izq<=dch) && (v[centro]!=buscado)) {
        if (buscado < v[centro])
            dch = centro-1;
        else
            izq = centro+1;
        centro = (izq+dch)/2;
    }
    if (izq>dch)  return -1;
    else  return centro;
}

int BuscaSecuencial(double v[], int n, double buscado) {
    int pos = -1;
    for(int i=0; i<n; i++){
        if(v[i] == buscado){
            pos = i;
            break;
        }
    }
    return pos;
}
