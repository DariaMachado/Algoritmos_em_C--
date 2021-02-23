#include <bits/stdc++.h>

using namespace std;

int main() {
    double x1, x2, a, b, c, delta;

    cout << "Coeficiente a: ";
    cin >> a;
    cout << "Coeficiente b: ";
    cin >> b;
    cout << "Coeficiente c: ";
    cin >> c;

    delta = pow(b, 2) - 4 * a * c;

    if(delta > 0 && a != 0) {
        x1 = (-b + sqrt(delta)) / (2.0 * a);
        x2 = (-b - sqrt(delta)) / (2.0 * a);

        cout << fixed << setprecision(4);
        cout << "X1 = " << x1 << endl;
        cout << "X2 = " << x2 << endl;
    }
    else {
        cout << "Esta equacao nao possui raizes reais " << endl;
    }

    return 0;
}
