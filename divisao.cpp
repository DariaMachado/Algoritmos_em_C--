#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, i, numerador, denominador;
    double divisao;

    cout << "Quantos casos voce vai digitar? ";
    cin >> n;

    cout << fixed << setprecision(2);

    for(i = 0; i < n; i++) {
        cout << "Entre com o numerador: ";
        cin >> numerador;
        cout << "Entre com o denominador: ";
        cin >> denominador;

        if(denominador == 0) {
            cout << "DIVISAO IMPOSSIVEL" << endl;
        }
        else {
            divisao = (double) numerador / denominador;
            cout << "DIVISAO = " << divisao << endl;
        }
    }

    return 0;
}
