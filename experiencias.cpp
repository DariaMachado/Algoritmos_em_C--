#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, i, qtd, totalC, totalR, totalS, totalcobaias, coelho = 0, rato = 0, sapo = 0;
    char cobaia;
    double perC, perR, perS;

    cout << "Quantos casos de teste serao digitados? ";
    cin >> n;

    for(i = 0; i < n; i++) {
        cout << "Quantidade de cobaias: ";
        cin >> qtd;
        cout << "Tipo de cobaia: ";
        cin >> cobaia;

        if(cobaia == 'C') {
            coelho = coelho + qtd;
        }
        else if(cobaia == 'S') {
            sapo = sapo + qtd;
        }
        else if(cobaia == 'R') {
            rato = rato + qtd;
        }
    }

    totalcobaias = rato + coelho + sapo;
    perC = (double) coelho * 100.0 / totalcobaias;
    perR = (double) rato * 100.0 / totalcobaias;
    perS = (double) sapo * 100.0 / totalcobaias;

    cout << endl << "RELATORIO FINAL:" << endl;
    cout << "Total: " << totalcobaias << " cobaias" << endl;
    cout << "Total de coelhos: " << coelho << endl;
    cout << "Total de ratos: " << rato << endl;
    cout << "Total de sapos: " << sapo << endl;
    cout << fixed << setprecision(2);
    cout << "Percentual de coelhos: " << perC << endl;
    cout << "Percentual de ratos: " << perR << endl;
    cout << "Percentual de sapos: " << perS << endl;

    return 0;
}
