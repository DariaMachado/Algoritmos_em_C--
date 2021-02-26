#include <bits/stdc++.h>

using namespace std;

int main() {
    int i, j, n, soma = 0;

    cout << "Qual a ordem da matriz? ";
    cin >> n;

    int mat[n][n];

    for(i = 0; i < n; i ++) {
        for(j = 0; j < n; j++) {
           cout << "Elemento [" << i << "," << j << "]: ";
           cin >> mat[i][j];
        }
    }

    for( i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            if (i < j) {
                soma = soma + mat[i][j];
            }
        }
    }

    cout << "SOMA DOS ELEMENTOS ACIMA DA DIAGONAL PRINCIPAL = " << soma << endl;

    return 0;
}
