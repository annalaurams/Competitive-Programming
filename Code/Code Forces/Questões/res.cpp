
#include <bits/stdc++.h>
using namespace std;

#define _ ios_base::sync_with_stdio(0); cin.tie(0);
#define endl '\n'

#define dbg(x) cout << #x << " = " << x << endl

typedef long long ll;

const int MOD = 1000000007;


int main() {

    _;

    long long int x, y, n, result;

    cin >> x >> y >> n;

    long long int repeticao = 6;

    long long int i = ((n - 1) % repeticao);

    long long int seq[] = { x, y, y - x, -x, -y, x - y };

    result = ((seq[i]) % MOD + MOD) % MOD;

    cout << result << endl;

    return 0;
}
