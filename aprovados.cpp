#include <bits/stdc++.h>

using namespace std;

int main() {
    int i, n;
    double media;

    cout << "Quantos alunos serao digitados? ";
    cin >> n;

    string nome[n];
    double nota1[n], nota2[n];

    for(i = 0; i < n; i++) {
        cout << "Digite nome, primeira e segunda nota do " << i + 1 << "o aluno:" << endl;
        cin.ignore(INT_MAX, '\n');
        getline(cin, nome[i]);
        cin >> nota1[i] >> nota2[i];
    }

    cout << "Alunos aprovados: " << endl;

    for(i = 0; i < n; i++) {
        media = (nota1[i] + nota2[i]) / 2.0;

        if(media[i] >= 6.0) {
            cout << nome[i] << endl;
        }
    }

    return 0;
}
