#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, i, maisVelho, posicao;

    cout << "Quantas pessoas voce vai digitar? ";
    cin >> n;

    string nome[n];
    int idade[n];

    for(i = 0; i < n; i++) {
        cout << "Dados da " << i + 1 << "a pessoa: " << endl;
        cout << "Nome: ";
        cin >> nome[i];

        cout << "Idade: ";
        cin >> idade[i];
    }

    maisVelho = idade[0];
    posicao = 0;

    for(i = 0; i < n; i++) {
       if(idade[i] > maisVelho) {
        maisVelho = idade[i];
        posicao = i;
       }
    }

    cout << "PESSOA MAIS VELHA: " << nome[posicao] << endl;

    return 0;
}
