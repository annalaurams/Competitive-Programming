// Top-Down: Frog 2

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

int memo[MAX];
int i, k, n;
vector<int>h;

int dp(int i) {

    if (i == 0) return 0; //caso base

    if (memo[i] != -1) return memo[i]; // se já tiver calculado, n faz denovo

    int ret = INF;

    for (int j = max(0, i - k); j < i; j++) {  // n coloca pedro com valor negativo, o melhor custo é o mínimo entre a posição
                                              // o custo de ter chegado no j e do j até o i
        ret = min(ret, dp(j) + abs(h[j] - h[i]));
    }
    return ret;
}

int main() {
    _;

    cin >> n >> k;
    h.resize(n);

    for (int &i : h) cin >> i;

    memset(memo, -1, sizeof memo);

    cout << dp(n - 1) << endl;

    return 0;
}