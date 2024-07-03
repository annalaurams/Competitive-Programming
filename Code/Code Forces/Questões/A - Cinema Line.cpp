
#include <bits/stdc++.h>
using namespace std;

#define _ ios_base::sync_with_stdio(0); cin.tie(0);
#define endl '\n'

#define dbg(x) cout << #x << " = " << x << endl

typedef long long ll;

const int MOD = 1000000007;

int main() {

    _;

    ll n, total = 0, troco;
    cin >> n;

    map<int, int> asw;

    for (int i = 0; i < n; i++) {

        int valor = 0;
        cin >> valor;

        switch (valor) {

        case 25:

            asw[25] += 25;
            break;

        case 50:

            asw[25] -= 25;
            asw[50] += 50;

            if (asw[25] < 0) {
                cout << "NO" << endl;
                return 0;
            }

            break;

        case 100:

            if (asw[25] >= 0 && asw[50] >= 0) {
                asw[25] -= 25;
                asw[50] -= 50;
            } 
            else if (asw[25] >= 75) {
                asw[25] -= 75;
            } 
            else
                cout << "NO" << endl;
                
            break;
        }
    }

    cout << "YES" << endl;

    return 0;
}
