#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, i, fatorial;

    cout << "Digite o valor de N: ";
    cin >> n;

    fatorial = 1;

    for(i = n; i > 0; i--) {
        fatorial = fatorial * i;
    }

    cout << "FATORIAL = " << fatorial << endl;

    return 0;
}
