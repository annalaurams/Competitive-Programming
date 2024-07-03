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

    int n, m, res;
    cin >> n >> m;

    vector<int>vec(m);

    for (int i = 0; i < m; i++) {
        cin >> vec[i];
    }

    sort(vec.begin(), vec.end());

    int result = INF;

    for (int i = 0; i + (n-1) < m; i++) {

        int x = vec[i];
        int y = vec[i+(n - 1)];

        result = min(result, (y-x));
    }

    cout << result << endl;

    return 0;
}
