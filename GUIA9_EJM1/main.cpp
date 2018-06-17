#include <iostream>

using namespace std;

int main()
{

    int M[4][4] = {
        {4,8,5,6},
        {12,44,58,1},
        {2,5,12,51},
        {26,58,21,82},
    };

    int D[4][2];

    for (int i = 0; i < 4; i++) {
        D[i][0] = M[i][i];
    }

    int f = 0;
    for (int i = 3; i >= 0; i--) {
        D[f][1] = M[f][i];
        f = f + 1;
    }

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 2; j++) {
            cout << D[i][j] << "\t";
        }
        cout << endl;
    }

    return 0;
}
