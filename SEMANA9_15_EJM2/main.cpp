#include <iostream>

using namespace std;

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
    M = new float*[3]; // reserva referencias

    for (int i = 0; i < 3; i++) {
        M[i] = new float[4];
    }

    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 4; j++) {
            M[i][j] = j * i;
        }
    }

    imprimirMatriz(M, 3, 4);

    return 0;

}
