#include <bits/stdc++.h>

using namespace std;

int main() {
    int inicio, fim, duracao;

    cout << "Hora inicial: ";
    cin >> inicio;
    cout << "Hora final: ";
    cin >> fim;

    if(inicio >= fim) {
        duracao = 24 - inicio + fim;
    }
    else {
        duracao = fim - inicio;
    }

    cout << "O JOGO DUROU " << duracao << " HORA(S)" << endl;

    return 0;
}
