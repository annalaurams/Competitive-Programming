#include <bits/stdc++.h>
#include <math.h>

using namespace std;

double triangulo(double a, double b, double c, double semiP) {

    double tri = 0, quadrado = 0;

    tri = sqrt(semiP * (semiP - a) * (semiP - b) * (semiP - c));

    return tri;
}


double circulo(double a, double b, double c, double semiP, double r1) {

    double r = (a * b * c) / (4 * r1);
    double raio;
    raio = pow(r, 2);
    double aux;
    aux = raio * M_PI;

    return aux;
}

double miniC(double r1, double semiP) {

    double miniC = 0;
    miniC = r1 / semiP;

    double rc;
    rc = pow(miniC, 2) * M_PI;

    return rc;
}

int main() {

    double a, b, c;
    double semiP = 0;
    double r1, r2, r3;

    while (cin >> a >> b >> c) {

        semiP = ((a + b + c) / 2);

        r1 = triangulo(a, b, c, semiP);
        r3 = miniC(r1, semiP);
        r2 = circulo(a, b, c, semiP, r1);

        r2 = r2 - r1;

        r1 = r1 - r3;

        cout << fixed << setprecision(4) << r2 << " " << r1 << " " << r3 << endl;

    }

    return 0;
}