
#include <iostream>
using namespace std;

#define _ ios_base::sync_with_stdio(0); cin.tie(0);
#define endl '\n'

#define dbg(x) cout << #x << " = " << x << endl

typedef long long ll;

const int MOD = 1000000007;

int main() {

    _;

    ll y = 0, k = 0, n = 0, aux = 0;

    bool ff = false;

    cin >> y >> k >> n;

    ll inicio = k - (y % k);

    if (inicio == k) inicio = 0;

    for (ll i = inicio; i + y <= n; i+=k) {

        if (i > 0) {
            ff = true;
            cout << i << " ";
        }
    }

    if (!ff) cout << -1 << endl;
    else cout << endl;

    return 0;
}
