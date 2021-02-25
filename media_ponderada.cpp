#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, i;
    double mediaP, n1, n2, n3;

    cout << "Quantos casos voce vai digitar? ";
    cin >> n;

    cout << fixed << setprecision(1);

    for(i = 0; i < n; i++) {
        cout << "Digite tres numeros:" << endl;
        cin >> n1 >> n2 >> n3;

        mediaP = (n1 * 2 + n2 * 3 + n3 * 5) / 10.0;

        cout << "MEDIA = " << mediaP << endl;
    }

    return 0;
}
