#include <iostream>
#include <cmath>

using namespace std;

bool triangulo(int r, int s, int t) {
    return (r > abs(s - t) && r < (s + t));
}

int main() {

    int a, b, c, d;
    cin >> a >> b >> c >> d;

    bool possible = false;

    for (int i = 0; i < 4; i++) {
        
        if (triangulo(a, b, c) || triangulo(a, b, d) || triangulo(a, c, d) || triangulo(b, c, d)) {
            possible = true;
            break;
        }

        int aux = d;
        d = c;
        c = b;
        b = a;
        a = aux;
    }

    if (possible) cout << "S" << endl;
    else cout << "N" << endl;

    return 0;
}
