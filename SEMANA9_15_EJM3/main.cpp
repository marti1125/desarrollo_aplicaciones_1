#include <iostream>
#include <stdlib.h> // rand()

using namespace std;

int random099() {
    return rand() % 100; // obtiene numeros random de 0 - 99
}

void imprimirMatriz(float **M, int FIL, int COL) {
    for(int i = 0; i < FIL; i++) {
        for(int j = 0; j < COL; j++) {
            cout << M[i][j] << "\t";
        }
        cout << endl;
    }
}

int main()
{

    float **M;
    M = new float*[8]; // reserva referencias

    for (int i = 0; i < 8; i++) {
        M[i] = new float[8];
    }

    for(int i = 0; i < 8; i++) {
        for(int j = 0; j < 8; j++) {
            M[i][j] = random099();
        }
    }

    imprimirMatriz(M, 8, 8);

    return 0;

}
