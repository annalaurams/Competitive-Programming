// Bottom-up: Frog 2

#include <bits/stdc++.h>

using namespace std;

#define _                       \
  ios_base::sync_with_stdio(0); \
  cin.tie(0);

#define endl '\n'
#define dbg(x) cout << #x << " = " << x << endl

typedef long long ll;

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;
const int MAX = 1e5 + 10;

int main() {
    _;

    int n = 0, k = 0;

    cin >> n >> k;

    vector<int>h(n);
    vector<int>asw(n);

    for (int i = 0; i < n; ++i) {
        cin >> h[i];
    }
    
    asw[0] = 0;

    for (int i = 1; i < n;i++) {
        asw[i] = INF;
        
        for (int j = max(0, i - k); j < i; j++) {
            asw[i] = min(asw[i], asw[j] + abs(h[i] - h[j]));
        }
    }

    cout << asw[n - 1] << endl;

    return 0;
}