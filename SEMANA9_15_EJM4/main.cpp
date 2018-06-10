#include <iostream>

using namespace std;

void imprimirMatriz(float M[9][13], int FIL, int COL) {
    for(int i = 0; i < FIL; i++) {
        for(int j = 0; j < COL; j++) {
            cout << M[i][j] << "\t";
        }
        cout << endl;
    }
}

void imprimirMatrizPromedio(float M[9][13], int FIL, int COL) {
    int promedioc0 = 0;
    for(int i = 0; i < FIL; i++) {
        for(int j = 0; j < COL; j++) {
            cout << M[i][j] << "\t";
        }
        cout << endl;
    }
}

// EJERCICIO 2
int main()
{

    float M[9][13] = {
        {28, 30, 25, 23, 20, 18, 15, 14, 16, 17, 19, 20, 0},
        {29, 31, 27, 23, 21, 19, 16, 13, 17, 18, 18, 22, 0},
        {26, 33, 25, 25, 22, 17, 15, 15, 18, 19, 19, 23, 0},
        {25, 29, 23, 26, 19, 19, 17, 15, 17, 17, 18, 21, 0},
        {24, 28, 28, 25, 18, 20, 18, 15, 16, 18, 20, 20, 0},
        {30, 27, 25, 22, 20, 16, 11, 16, 16, 18, 19, 21, 0},
        {31, 29, 26, 23, 21, 17, 16, 16, 15, 17, 18, 22, 0},
        {27, 29, 26, 24, 20, 17, 15, 16, 16, 17, 17, 23, 0},
        {0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0}
    };

    imprimirMatriz(M, 8, 12);

    cout << "\n";

    imprimirMatrizPromedio(M, 8, 12);

    return 0;
}
