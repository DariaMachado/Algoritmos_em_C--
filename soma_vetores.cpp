#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, i;

    cout << "Quantos valores vai ter cada vetor? ";
    cin >> n;

    int A[n], B[n], C[n];

    cout << "Digite os valores do vetor A: " << endl;
    for(i = 0; i < n; i++) {
        cin >> A[i];
    }

    cout << "Digite os valores do vetor B: " << endl;
    for(i = 0; i < n; i++) {
        cin >> B[i];
    }

    cout << "VETOR RESULTANTE: " << endl;

    for(i = 0; i < n; i++) {
        C[i] = A[i] + B[i];
        cout << C[i] << endl;
    }

    return 0;
}
