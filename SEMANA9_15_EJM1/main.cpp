#include <iostream>

using namespace std;

void imprimirMatriz(float M[100][100], int FIL, int COL) {
    for(int i = 0; i < FIL; i++) {
        for(int j = 0; j < COL; j++) {
            cout << M[i][j] << "\t";
        }
        cout << endl;
    }
}

int main()
{

    float M[100][100] = {
        {12.5, 4.6, 0.67, 7.5},
        {4.5, 5.6, 5.6, 7.5},
        {3.4, 5.6, 0.88, 10.58}
    };

    //int *a = new int[10];

    //cout << M << endl;
    //cout << M[0][0] << " " << M[0][1] << " " << M[0][2] << " " << M[0][3] << endl;
    //cout << M[1][0] << " " << M[1][1] << " " << M[1][2] << " " << M[1][3] << endl;
    //cout << M[2][0] << " " << M[2][1] << " " << M[2][2] << " " << M[2][3] << endl;
    //cout << a << endl;

    /*for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 4; j++) {
            cout << M[i][j] << "\t";
        }
        cout << endl;
    }*/

    imprimirMatriz(M, 3, 4);

    return 0;

}
