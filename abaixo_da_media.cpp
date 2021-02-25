#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, i;
    double media, soma = 0;

    cout << "Quantos elementos vai ter o vetor? ";
    cin >> n;

    double vet[n];

    for(i = 0; i < n; i++) {
        cout << "Digite um numero: ";
        cin >> vet[i];
    }

    for(i = 0; i < n; i++) {
        soma = soma + vet[i];
    }

    media = soma / n;

    cout << fixed << setprecision(3);
    cout << "MEDIA DO VETOR = " << media << endl;

    cout << fixed << setprecision(1);
    cout << "ELEMENTOS ABAIXO DA MEDIA: " << endl;

    for(i = 0; i < n; i++) {
        if(vet[i] < media) {
            cout << vet[i] << endl;
        }
    }

    return 0;
}
