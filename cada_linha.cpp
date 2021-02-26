#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, i, j, maior;

    cout << "Qual a ordem da matriz? ";
    cin >> n;

    int mat[n][n], maiorlinha[n];

    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            cout << "Elemento ["<< i << "," << j << "]: ";
            cin >> mat[i][j];
        }
    }

    for(i = 0; i < n; i++) {
        maior = mat[i][0];
        for(j = 0; j < n; j++) {
            if(mat[i][j] > maior) {
                maior = mat[i][j];
            }
        }
        maiorlinha[i] = maior;
    }

    cout << "MAIOR ELEMENTO DE CADA LINHA: " << endl;

    for(i = 0; i < n; i++) {
        cout << maiorlinha[i] << endl;
    }

    return 0;
}
