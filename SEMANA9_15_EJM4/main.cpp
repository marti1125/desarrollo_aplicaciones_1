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

    float pcol0 = 0;
    float pcol1 = 0;
    float pcol2 = 0;
    float pcol3 = 0;
    float pcol4 = 0;
    float pcol5 = 0;
    float pcol6 = 0;
    float pcol7 = 0;

    float prow0 = 0;
    float prow1 = 0;
    float prow2 = 0;
    float prow3 = 0;
    float prow4 = 0;
    float prow5 = 0;
    float prow6 = 0;
    float prow7 = 0;
    float prow8 = 0;
    float prow9 = 0;
    float prow10 = 0;
    float prow11 = 0;

    for(int i = 0; i < FIL; i++) {
        for(int j = 0; j < COL; j++) {

            if(i == 0 && j < 12) {
                pcol0 = pcol0 + M[0][j];
                M[0][12] = pcol0 / 12;
            }
            if(i == 1 && j < 12) {
                pcol1 = pcol1 + M[1][j];
                M[1][12] = pcol1 / 12;
            }
            if(i == 2 && j < 12) {
                pcol2 = pcol2 + M[2][j];
                M[2][12] = pcol2 / 12;
            }
            if(i == 3 && j < 12) {
                pcol3 = pcol3 + M[3][j];
                M[3][12] = pcol3 / 12;
            }
            if(i == 4 && j < 12) {
                pcol4 = pcol4 + M[4][j];
                M[4][12] = pcol4 / 12;
            }
            if(i == 5 && j < 12) {
                pcol5 = pcol5 + M[5][j];
                M[5][12] = pcol5 / 12;
            }
            if(i == 6 && j < 12) {
                pcol6 = pcol6 + M[6][j];
                M[6][12] = pcol6 / 12;
            }
            if(i == 6 && j < 12) {
                pcol7 = pcol7 + M[7][j];
                M[7][12] = pcol7 / 12;
            }



            if (j == 0 && i < 8) {
                prow0 = prow0 + M[i][0];
                M[8][0] = prow0 / 8;
            }
            if (j == 1 && i < 8) {
                prow1 = prow1 + M[i][1];
                M[8][1] = prow1 / 8;
            }
            if (j == 2 && i < 8) {
                prow2 = prow2 + M[i][2];
                M[8][2] = prow2 / 8;
            }
            if (j == 3 && i < 8) {
                prow3 = prow3 + M[i][3];
                M[8][3] = prow3 / 8;
            }
            if (j == 4 && i < 8) {
                prow4 = prow4 + M[i][4];
                M[8][4] = prow4 / 8;
            }
            if (j == 5 && i < 8) {
                prow5 = prow5 + M[i][5];
                M[8][5] = prow5 / 8;
            }
            if (j == 6 && i < 8) {
                prow6 = prow6 + M[i][6];
                M[8][6] = prow6 / 8;
            }
            if (j == 7 && i < 8) {
                prow7 = prow7 + M[i][7];
                M[8][7] = prow7 / 8;
            }
            if (j == 8 && i < 8) {
                prow8 = prow8 + M[i][8];
                M[8][8] = prow8 / 8;
            }
            if (j == 9 && i < 8) {
                prow9 = prow9 + M[i][9];
                M[8][9] = prow9 / 8;
            }
            if (j == 10 && i < 8) {
                prow10 = prow10 + M[i][10];
                M[8][10] = prow10 / 8;
            }
            if (j == 11 && i < 8) {
                prow11 = prow11 + M[i][11];
                M[8][11] = prow11 / 8;
            }
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

    imprimirMatrizPromedio(M, 9, 13);

    return 0;
}
