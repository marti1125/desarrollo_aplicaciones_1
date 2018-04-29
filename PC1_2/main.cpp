#include <iostream>

using namespace std;

int main()
{
    char tipo_seguro;
    int personas_asegurar = 0;

    int a_cantidad = 8;
    int a_pago = 40;

    int b_cantidad = 6;
    int b_pago = 30;

    int c_cantidad = 4;
    int c_pago = 20;

    int d_cantidad = 2;
    int d_pago = 10;

    int a_b_extra = 8;
    int c_d_extra = 5;

    cout << "Ingresar tipo de seguro, A, B, C, D" << endl;
    cin >> tipo_seguro;

    cout << "Cantidad de personas a asegurar" << endl;
    cin >> personas_asegurar;

    if (personas_asegurar < 0) {
       cout << "No ingrese valores negativos como cantidad de personas" << endl;
       return 0;
    }

    if (tipo_seguro == 'A' || tipo_seguro == 'a') {
        int total = 0;
        if(personas_asegurar > 8) {
            total = (personas_asegurar - a_cantidad) * a_b_extra + a_pago;
            cout << "Se pagara un total de: " <<  total <<endl;
            return 0;
        } else {
            cout << "Se pagara un total de: " <<  a_pago <<endl;
            return 0;
        }
    } else if (tipo_seguro == 'B' || tipo_seguro == 'b') {
        int total = 0;
        if(personas_asegurar > 6) {
            total = (personas_asegurar - b_cantidad) * a_b_extra + b_pago;
            cout << "Se pagara un total de: " <<  total <<endl;
            return 0;
        } else {
            cout << "Se pagara un total de: " <<  b_pago <<endl;
            return 0;
        }
    } else if (tipo_seguro == 'C' || tipo_seguro == 'c') {
        int total = 0;
        if(personas_asegurar > 4) {
            total = (personas_asegurar - c_cantidad) * c_d_extra + c_pago;
            cout << "Se pagara un total de: " <<  total <<endl;
            return 0;
        } else {
            cout << "Se pagara un total de: " <<  c_pago <<endl;
            return 0;
        }
    } else if (tipo_seguro == 'D' || tipo_seguro == 'd') {
        int total = 0;
        if(personas_asegurar > 2) {
            total = (personas_asegurar - d_cantidad) * c_d_extra + d_pago;
            cout << "Se pagara un total de: " <<  total <<endl;
            return 0;
        } else {
            cout << "Se pagara un total de: " <<  d_pago <<endl;
            return 0;
        }
    } else {
        cout << "Tipo de seguro no valido" << endl;
        return 0;
    }

    return 0;
}

