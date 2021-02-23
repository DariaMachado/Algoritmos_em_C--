#include <bits/stdc++.h>

using namespace std;

int main() {
    int minutos;
    double valor;

    cout << "Digite a quantidade de minutos: ";
    cin >> minutos;

    valor = 50.00;

    if( minutos > 100) {
        valor = valor + 2.0 * (minutos - 100);
    }

    cout << fixed << setprecision(2);
    cout << "Valor a pagar: R$ " << valor << endl;

    return 0;
}
