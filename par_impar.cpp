#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, i, numero;

    cout << "Quantos numeros voce vai digitar? ";
    cin >> n;

    for(i = 0; i < n; i++) {
        cout << "Digite um numero: ";
        cin >> numero;

        if(numero == 0) {
            cout << "NULO" << endl;
        }
        else {
            if(numero % 2 == 0) {
                cout << "PAR ";
            }
            else {
                cout << "IMPAR ";
            }
            if(numero > 0) {
                cout << "POSITIVO" << endl;
            }
            else {
                cout << "NEGATIVO" << endl;
            }
        }
    }

    return 0;
}
