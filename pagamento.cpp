#include <bits/stdc++.h>

using namespace std;

int main() {
    string nome;
    double valorh, pagamento;
    int horastrab;

    cout << "Nome: ";
    getline(cin, nome);

    cout << "Valor por hora: ";
    cin >> valorh;

    cout << "Horas trabalhadas: ";
    cin >> horastrab;

    pagamento = horastrab * valorh;

    cout << fixed << setprecision(2);
    cout << "O pagamento para "<< nome << " deve ser " << pagamento << endl;

    return 0;
}
