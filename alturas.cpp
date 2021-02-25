#include <bits/stdc++.h>

using namespace std;

int main() {
    int i, n, contIdade;
    double somaAlt, mediaAlt, porcentagem;

    cout << "Quantas pessoas serao digitadas? ";
    cin >> n;

    string nome[n];
    double altura[n];
    int idade[n];

    for(i = 0; i < n; i++) {
        cout << "Dados da " << i + 1 << "a pessoa: " << endl;
        cout << "Nome: ";
        cin.ignore(INT_MAX, '\n');
        getline(cin, nome[i]);
        cout << "Idade: ";
        cin >> idade[i];
        cout << "Altura: ";
        cin >> altura[i];
    }

    somaAlt = 0;
    for(i = 0; i < n; i++) {
       somaAlt = somaAlt + altura[i];
    }

    mediaAlt = somaAlt / n;
    cout << fixed << setprecision(2);
    cout << "\n\nAltura média: " << mediaAlt << endl;

    contIdade = 0;
    for(i = 0; i < n; i++) {
        if(idade[i] < 16) {
           contIdade++;
        }
    }

    porcentagem = contIdade * 100.0 / n;

    cout << fixed << setprecision(1);
    cout << "Pessoas com menos de 16 anos: " << porcentagem << "%" << endl;

    for(i = 0; i < n; i++) {
        if(idade[i] < 16) {
            cout << nome[i] << endl;
        }
    }

    return 0;
}
