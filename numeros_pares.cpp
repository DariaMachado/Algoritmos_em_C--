#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, i, contPares = 0;

    cout << "Quantos numeros voce vai digitar? ";
    cin >> n;

    int vet[n];

    for(i = 0; i < n; i++) {
        cout << "Digite um numero: ";
        cin >> vet[i];
    }

    cout << "NUMEROS PARES:" << endl;

    for(i = 0; i < n; i++) {
        if(vet[i] % 2 == 0) {
            cout << vet[i] << " ";
            contPares++;
        }
    }

    cout << endl << "QUANTIDADE DE PARES = " << contPares << endl;

    return 0;
}
