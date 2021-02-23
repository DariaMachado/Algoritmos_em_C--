#include <bits/stdc++.h>

using namespace std;

int main() {
    int codigo, qtd;
    double valor;

    cout << "Codigo do produto comprado: ";
    cin >> codigo;

    cout << "Quantidade comprada: ";
    cin >> qtd;

    if(codigo == 1) {
        valor = qtd * 5.00;
    }
    else if(codigo == 2) {
        valor = qtd * 3.50;
    }
    else if(codigo == 3) {
        valor = qtd * 4.80;
    }
    else if(codigo == 4) {
        valor = qtd * 8.90;
    }
    else if(codigo == 5) {
        valor = qtd * 7.32;
    }

    cout << fixed << setprecision(2);
    cout << "Valor a pagar: R$ " << valor << endl;

    return 0;
}
