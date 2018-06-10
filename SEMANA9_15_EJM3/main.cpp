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

void imprimirMatrizDiagonal(float **M, int FIL, int COL) {
    for(int i = 0; i < FIL; i++) {
        for(int j = 0; j < COL; j++) {
            if (i == j) {
                cout << M[i][j] << "\t";
            } else {
                cout << " - " << "\t";
            }
        }
        cout << endl;
    }
}

int sumaMatrizDiagonal(float **M, int FIL, int COL) {
    int sumatoria = 0;
    for(int i = 0; i < FIL; i++) {
        for(int j = 0; j < COL; j++) {
            if (i == j) {
                sumatoria = sumatoria + M[i][j];
            }
        }
    }
    return sumatoria;
}

void imprimirMatrizSuperiorDiagonal(float **M, int FIL, int COL) {
    for(int i = 0; i < FIL; i++) {
        for(int j = 0; j < COL; j++) {
            if ( j > i) {
                cout << M[i][j] << "\t";
            } else {
                cout << " - " << "\t";
            }
        }
        cout << endl;
    }
}

void imprimirMatrizInferiorDiagonal(float **M, int FIL, int COL) {
    for(int i = 0; i < FIL; i++) {
        for(int j = 0; j < COL; j++) {
            if ( j < i) {
                cout << M[i][j] << "\t";
            } else {
                cout << " - " << "\t";
            }
        }
        cout << endl;
    }
}

int sumatoriaColumnaMatriz(float **M, int FIL, int COL) {
    int sumatoria = 0;
    for(int i = 0; i < FIL; i++) {
        for(int j = 0; j < COL; j++) {
            if (j == 3) {
                sumatoria = sumatoria + M[i][j];
            }
        }
    }
    return sumatoria;
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

    cout << "\n";
    cout << "Imprimir la diagonal" << endl;
    cout << "\n";
    imprimirMatrizDiagonal(M, 8, 8);
    cout << "\n";
    cout << "sumatoria de la diagonal" << endl;
    cout << "\n";
    cout << sumaMatrizDiagonal(M, 8, 8);
    cout << "\n";
    cout << "\n";
    cout << "por encima de la diagonal" << endl;
    cout << "\n";
    imprimirMatrizSuperiorDiagonal(M, 8, 8);
    cout << "\n";
    cout << "por debajo de la diagonal" << endl;
    cout << "\n";
    imprimirMatrizInferiorDiagonal(M, 8, 8);
    cout << "\n";
    cout << "sumatoria de la columan 4" << endl;
    cout << "\n";
    cout << sumatoriaColumnaMatriz(M, 8, 8) << endl;

    return 0;

}
