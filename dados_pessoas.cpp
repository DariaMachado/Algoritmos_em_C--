#include <bits/stdc++.h>

using namespace std;

int main() {
    int i, n, contF = 0, contM = 0;
    double somaAlt = 0, media, maiorAlt, menorAlt;

    cout << "Quantas pessoas serao digitadas? ";
    cin >> n;

    char genero[n];
    double altura[n];

    for(i = 0; i < n; i++) {
        cout << "Altura da " << i + 1 << "a pessoa: ";
        cin >> altura[i];

        cout << "Genero da " << i + 1 << "a pessoa: ";
        cin >> genero[i];
    }

    maiorAlt = altura[0];
    menorAlt = altura[0];

    for(i = 0; i < n; i++) {
        if(altura[i] > maiorAlt) {
            maiorAlt = altura[i];
        }
        if(altura[i] < menorAlt) {
            menorAlt = altura[i];
        }
    }

    for(i = 0; i < n; i++) {
        if(genero[i] == 'F') {
           somaAlt = somaAlt + altura[i];
           contF++;
        }
        else {
            contM++;
        }
    }

    media = (double) somaAlt / contF;

    cout << fixed << setprecision(2);
    cout << "Menor altura = " << menorAlt << endl;
    cout << "Maior altura = " << maiorAlt << endl;
    cout << "Media das alturas das mulheres = " << media << endl;
    cout << "Numero de homens = " << contM << endl;

    return 0;
}
