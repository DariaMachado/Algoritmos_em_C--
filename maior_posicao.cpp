#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, i, posicao;
    double maior;

    cout << "Quanto numeros voce vai digitar? ";
    cin >> n;

    double vet[n];

    for(i = 0; i < n; i++) {
        cout << "Digite um numero: ";
        cin >> vet[i];
    }

    maior = vet[0];

    for(i = 1; i < n; i++) {
        if(vet[i] > maior) {
            maior = vet[i];
            posicao = i;
        }
    }

    cout << fixed << setprecision(1);
    cout << endl << "MAIOR VALOR = " << maior << endl;
    cout << "POSICAO DO MAIOR VALOR = " << posicao << endl;

    return 0;
}
