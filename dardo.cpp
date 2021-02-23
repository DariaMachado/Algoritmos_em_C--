#include <bits/stdc++.h>

using namespace std;

int main() {
    double dist1, dist2, dist3, maior;

    cout << "Digite as tres distancias:" << endl;
    cin >> dist1 >> dist2 >> dist3;

    if(dist1 > dist2 && dist1 > dist3) {
        maior = dist1;
    }
    else if(dist2 > dist1 && dist2 > dist3) {
        maior = dist2;
    }
    else {
        maior = dist3;
    }

    cout << fixed << setprecision(2);
    cout << "MAIOR DISTANCIA = " << maior << endl;

    return 0;
}
