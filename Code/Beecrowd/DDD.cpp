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

    int ddd;

    cin >> ddd;

    switch (ddd) {

    case 61:
        cout << "Brasilia" << endl;
        break;
    case 71:
        cout << "Salvador" << endl;
        break;
    case 11:
        cout << "Sao Paulo" << endl;
        break;
    case 21:
        cout << "Rio de Janeiro" << endl;
        break;
    case 32:
        cout << "Juiz de Fora" << endl;
        break;
    case 19:
        cout << "Campinas" << endl;
        break;
    case 27:
        cout << "Vitoria" << endl;
        break;
    case 31:
        cout << "Belo Horizonte" << endl;
        break;

    default:
    cout << "DDD nao cadastrado" << endl;
        break;
    }


    return 0;
}