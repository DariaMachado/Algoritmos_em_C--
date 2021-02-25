#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, i, contPares = 0, soma = 0;
    double media;

    cout << "Quantos elementos vai ter o vetor? ";
    cin >> n;

    int vet[n];

    for(i =0; i< n; i++) {
        cout << "Digite um numero: ";
        cin >> vet[i];
    }

    for(i = 0; i < n; i++) {
        if(vet[i] % 2 == 0) {
           soma = soma + vet[i];
           contPares++;
        }
    }

    cout << fixed << setprecision(1);

    if(contPares == 0) {
        cout << "NENHUM NUMERO PAR" << endl;
    }
    else {
        media = (double) soma / contPares;
        cout << "MEDIA DOS PARES = " << media << endl;
    }

    return 0;
}
