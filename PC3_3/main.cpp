#include <iostream>

using namespace std;

void imprimirResultado(float M[4][5], int FIL, int COL) {

    string trabajadores[4] = {"Juan", "Pedro", "Rosa", "Mauro"};
    string meses[5] = {"Enero", "Febrero", "Marzo", "Abril", "Mayo"};

    float menor = M[0][0];
    float mayor = M[0][0];

    float srow0 = 0;
    float srow1 = 0;
    float srow2 = 0;
    float srow3 = 0;

    float scol0 = 0; // Febrero
    float scol1 = 0; // Marzo
    float scol2 = 0; // Marzo
    float scol3 = 0; // Abril
    float scol4 = 0; // Mayo

    float sumatoria[5];

    for(int i = 0; i < FIL; i++) {
        for(int j = 0; j < COL; j++) {

            if (menor > M[i][j]) {
                menor = M[i][j];
            }
            if (mayor < M[i][j]) {
                mayor = M[i][j];
            }

            if(i == 0) {
                srow0 = srow0 + M[0][j];
            }
            if(i == 1) {
                srow1 = srow1 + M[1][j];
            }
            if(i == 2) {
                srow2 = srow2 + M[2][j];
            }
            if(i == 3) {
                srow3 = srow3 + M[3][j];
            }

            if (j == 0) {
                scol0 = scol0 + M[i][0];
                sumatoria[0] = scol0;
            }

            if (j == 1) {
                scol1 = scol1 + M[i][1];
                sumatoria[1] = scol1;
            }

            if (j == 2) {
                scol2 = scol2 + M[i][2];
                sumatoria[2] = scol2;
            }

            if (j == 3) {
                scol3 = scol3 + M[i][3];
                sumatoria[3] = scol3;
            }

            if (j == 4) {
                scol4 = scol4 + M[i][4];
                sumatoria[4] = scol4;
            }

        }
    }

    cout << "Maximo de Ventas: " << mayor << endl;
    cout << "Minimo de Ventas: " << menor << endl;

    cout << "Promedio de Ventas del trabajador " << trabajadores[0] << " es " << srow0 / COL << endl;
    cout << "Promedio de Ventas del trabajador " << trabajadores[1] << " es " << srow1 / COL << endl;
    cout << "Promedio de Ventas del trabajador " << trabajadores[2] << " es " << srow2 / COL << endl;
    cout << "Promedio de Ventas del trabajador " << trabajadores[3] << " es " << srow3 / COL << endl;

    cout << "Venta Acumulada de " << meses[0] << " es " << sumatoria[0] << endl;
    cout << "Venta Acumulada de " << meses[1] << " es " << sumatoria[1] << endl;
    cout << "Venta Acumulada de " << meses[2] << " es " << sumatoria[2] << endl;
    cout << "Venta Acumulada de " << meses[3] << " es " << sumatoria[3] << endl;
    cout << "Venta Acumulada de " << meses[4] << " es " << sumatoria[4] << endl;

    float mayorVentaAcumulada = sumatoria[0];
    int m = 0;
    for (int i = 0; i < 5; i++) {
        if (mayorVentaAcumulada < sumatoria[i]) {
            mayorVentaAcumulada = sumatoria[i];
            m = i;
        }
    }

    cout << "\n";
    cout << "Mayor venta acumulada es " << mayorVentaAcumulada << " en el mes " << meses[m] << endl;

}

int main()
{
    float M[4][5] = {
        {105.50, 110.75, 200.99, 180.37, 125.35},
        {99.70, 107.28, 201.79, 170.00, 135.74},
        {110.35, 125.00, 215.24, 199.99, 100.00},
        {101.45, 86.25, 185.67, 190.00, 101.25},
    };

    cout << "\n";

    imprimirResultado(M, 4, 5);

    return 0;
}
