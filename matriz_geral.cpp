#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, i, j, linha, coluna;
    double soma = 0;

    cout << "Qual a ordem da matriz? ";
    cin >> n;

    double mat[n][n];

    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            cout << "Elemento ["<< i << "," << j << "]: ";
            cin >> mat[i][j];
        }
    }

    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            if(mat[i][j] > 0) {
               soma = soma + mat[i][j];
            }
        }
    }

    cout << fixed << setprecision(1);
    cout << endl << "SOMA DOS POSITIVOS: " << soma << endl;

    cout << endl << "Escolha uma linha: ";
    cin >> linha;
    cout << "LINHA ESCOLHIDA: ";

    for(j = 0; j < n; j++) {
        cout << mat[linha][j] << " ";
    }

    cout << endl << endl << "Escolha uma coluna: ";
    cin >> coluna;
    cout << "COLUNA ESCOLHIDA: ";

    for(i = 0; i < n; i++) {
        cout << mat[i][coluna] << " ";
    }

    cout << endl << endl << "DIAGONAL PRINCIPAL: ";

    for(i = 0; i < n; i++) {
        cout << mat[i][i] << " ";
    }

    cout << endl << endl << "MATRIZ ALTERADA: " << endl;

    for( i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            if(mat[i][j] < 0) {
                mat[i][j] = pow(mat[i][j], 2);
            }
        }
    }

    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
