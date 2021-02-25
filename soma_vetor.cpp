#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, i;
    double soma = 0, media;

    cout << "Quantos numeros voce vai digitar? ";
    cin >> n;

    double vet[n];

    for(i = 0; i < n; i++) {
        cout << "Digite um numero: ";
        cin >> vet[i];
    }

    cout << "VALORES = ";
    cout << fixed << setprecision(1);

    for(i = 0; i < n; i++) {
        cout << vet[i] << " ";
    }

    for(i = 0; i < n; i++) {
        soma = soma + vet[i];
    }

    cout << endl << "SOMA = " << soma << endl;

    media =  soma / n;
    cout << "MEDIA = " << media << endl;


    return 0;
}
