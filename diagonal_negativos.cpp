#include <bits/stdc++.h>

using namespace std;

int main() {
    int i, n, j, negativos;

    cout << "Qual a ordem da matriz? ";
    cin >> n;

    int mat[n][n];

    for(i = 0; i < n; i++) {
            for(j = 0; j < n; j++) {
                cout << "Elemento [ " << i << " , " << j << " ]: ";
                cin >> mat[i][j];
            }
    }

    cout << "DIAGONAL PRINCIPAL: " << endl;

    for(i = 0; i < n; i++) {
        cout << mat[i][i] << " ";
    }

   negativos = 0;
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            if(mat[i][j] < 0) {
                negativos++;
            }
        }
    }

    cout << "\nQUANTIDADE DE NEGATIVOS = " << negativos << endl;

    return 0;
}
