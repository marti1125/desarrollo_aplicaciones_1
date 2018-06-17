#include <iostream>

using namespace std;

bool positivo(int n) {
    return n >= 0;
}

void agregarElemento(int vect[100], int &n, int add) {
    if (n < 100) {
        vect[n] = add;
        n += 1;
    }
}

int main()
{
    int num;
    int vect[100];
    int n = 0;
    while(positivo(num)) {
        cout << "Ingrese un numero positivo: " << "\t";
        cin >> num;
        if (positivo(num)) {
            bool exist = false;
            for (int i = 0; i < n; i++) {
                if (num == vect[i]) {
                    exist = true;
                }
            }
            if (!exist) {
                agregarElemento(vect, n, num);
            }
        }
    }

    cout << "\n";

    for (int i = 0; i < n; i++) {
        cout << vect[i] << "\t" << endl;
    }

    return 0;
}
