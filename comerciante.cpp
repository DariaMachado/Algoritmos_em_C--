#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, i, abaixo = 0, entre = 0, acima = 0;
    double totalC = 0, totalV = 0, lucro = 0;

    cout << "Serao digitados dados de quantos produtos? ";
    cin >> n;

    string produto[n];
    double compra[n], venda[n], porcentagem[n];

    for(i = 0; i < n; i++) {
        cout << "Produto "<< i + 1 << ": " << endl;
        cout << "Nome: ";
        cin >> produto[i];

        cout << "Preco de compra: ";
        cin >> compra[i];

        cout << "Preco de venda: ";
        cin >> venda[i];
    }

    for(i = 0; i < n; i++) {
        porcentagem[i] = (venda[i] - compra[i]) / compra[i] * 100.0;
    }

    for(i = 0; i < n; i++) {
        if(porcentagem[i] < 10) {
            abaixo++;
        }
        else if(porcentagem[i] <= 20) {
            entre++;
        }
        else {
            acima++;
        }
    }

    for(i = 0; i , n; i++) {
        totalC = totalC + compra[i];
        totalV = totalV + venda[i];
    }

    lucro = totalV - totalC;

    cout << fixed << setprecision(2);
    cout << endl << "RELATORIO:" << endl;
    cout << "Lucro abaixo de 10%: " << abaixo << endl;
    cout << "Lucro entre 10% e 20%: " << entre << endl;
    cout << "Lucro acima de 20%: " << acima << endl;
    cout << "Valor total de compra: " << totalC << endl;
    cout << "Valor total de venda: " << totalV << endl;
    cout << "Lucro total: " << lucro << endl;

    return 0;
}
