#include <iostream>

using namespace std;

int main() {

    int grados1 = 0;
    int minutos1 = 0;
    int segundos1 = 0;

    int grados2 = 0;
    int minutos2 = 0;
    int segundos2 = 0;

    cout << "Ingrese los valores para el angulo 1 " << endl;
    cout << "G1" << endl;
    cin >> grados1;
    cout << "M1" << endl;
    cin >> minutos1;
    cout << "S1" << endl;
    cin >> segundos1;

    cout << "Ingrese los valores para el angulo 2 " << endl;
    cout << "G2" << endl;
    cin >> grados2;
    cout << "M2" << endl;
    cin >> minutos2;
    cout << "S2" << endl;
    cin >> segundos2;

    int r_segundos = segundos1 + segundos2;
    int t_segundo = 0;
    if (r_segundos > 60 && r_segundos < 120) {
        t_segundo = r_segundos - 60;
    } else if (r_segundos > 120) {
        t_segundo = r_segundos - 60 * (r_segundos / 60) + (r_segundos % 60);
    } else {
        t_segundo = r_segundos;
    }

    int r_s_resudio = r_segundos > 60 ? (r_segundos / 60) - 1 : 0;

    int r_minutos = minutos1 + minutos2 + r_s_resudio;
    int t_minutos = r_minutos > 60 ? r_minutos - 60 : r_minutos;
    int r_m_resudio = r_minutos > 60 ? (r_minutos / 60) - 1 : 0;

    int t_grados = grados1 + grados2 + r_m_resudio;

    cout << "Total de Grados" << endl;
    cout << t_grados << endl;
    cout << "Total de Minutos" << endl;
    cout << t_minutos << endl;
    cout << "Total de Segundo" << endl;
    cout << t_segundo << endl;

    return 0;

}

