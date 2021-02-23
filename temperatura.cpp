#include <bits/stdc++.h>

using namespace std;

int main() {
    char escala;
    double tempC, tempF;

    cout << "Voce vai digitar a temperatura em qual escala (C/F)? ";
    cin >> escala;

    cout << fixed << setprecision(2);

    if(escala == 'F') {
        cout << "Digite a temperatura em Fahrenheit: ";
        cin >> tempF;

        tempC = 5.0 / 9.0 * (tempF - 32.0);
        cout << "Temperatura equivalente em Celsius: " << tempC << endl;
    }
    else if(escala == 'C') {
        cout << "Digite a temperatura em Celsius: ";
        cin >> tempC;

        tempF = 9.0 / 5.0 * tempC + 32.0;
        cout << "Temperatura equivalente em Fahrenheit: " << tempF << endl;
    }

    return 0;
}
