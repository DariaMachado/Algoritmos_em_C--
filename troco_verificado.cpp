#include <bits/stdc++.h>

using namespace std;

int main() {
    double preco, dinheiro, falta, troco, total;
    int qtd;

    cout << "Preco unitario do produto: ";
    cin >> preco;
    cout << "Quantidade comprada: ";
    cin >> qtd;
    cout << "Dinheiro recebido: ";
    cin >> dinheiro;

    total = qtd * preco;

    cout << fixed << setprecision(2);

    if(total < dinheiro) {
        troco = dinheiro - total;
        cout << "TROCO = " << troco << endl;
    }
    else {
        falta = total - dinheiro;
        cout << "DINHEIRO INSUFICIENTE. FALTAM " << falta << " REAIS" << endl;
    }

    return 0;
}
