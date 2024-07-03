#include <bits/stdc++.h>

using namespace std;

#define _ ios_base::sync_with_stdio(0); cin.tie(0);
#define endl '\n'

#define dbg(x) cout << #x << " = " << x << endl

typedef unsigned long long ll;

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

int main() {
    _;

    vector <double>vec(3);
    double a, b, c;

    cin >> vec[0] >> vec[1] >> vec[2];

    sort(vec.begin(), vec.end());

    c = vec[0];
    b = vec[1];
    a = vec[2];

    //cout << a << " " <<  b << " " << c << " " << endl << endl;

    if (a >= (b + c)) cout << "NAO FORMA TRIANGULO" << endl;

    else {
        if ((a * a) == ((b * b) + (c * c))) cout << "TRIANGULO RETANGULO" << endl;
        if ((a * a) > ((b * b) + (c * c))) cout << "TRIANGULO OBTUSANGULO" << endl;
        if ((a * a) < ((b * b) + (c * c))) cout << "TRIANGULO ACUNTANGULO" << endl;
        if (a == b && b == c) cout << "TRIANGULO EQUILATERO" << endl;
        if (a == b && b != c) cout << "TRIANGULO ISOSCELES" << endl;
        if (a == c && c != b) cout << "TRIANGULO ISOSCELES" << endl;
        if (b == c && a != b) cout << "TRIANGULO ISOSCELES" << endl;
    }
    return 0;
}