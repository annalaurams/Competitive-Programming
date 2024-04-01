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

// Relação de recorrência 
//  caso base, caso não tenha nenhum item pra escolher i = n
// caso, tenho itens, mas n posso pegar f( i +1, j) não pega e olha pra frente  i < n e j < Wi
// caso possa pegar mas(f(u+1, j), f(i+1, j-Wi) + vi) i < n e j >= Wi

ll asw[110][100010]; // 1° qual item 2° quanto de espaço há
vector<int> u;
vector<int> v;
int n = 0, w = 0;


ll dp(int item, int capacidade) {

    if (capacidade < 0) return -LINF;

    if (item == n) return 0;

    ll &res = asw[item][capacidade];

    if (res != -1) return res;

    return res = max(dp(item + 1, capacidade), dp(item + 1, capacidade - u[item]) + v[item]);


}

int main() {
    _;

    cin >> n >> w;

    u.resize(n);
    v.resize(n);


    for (int i = 0; i < n; i++) {
        cin >> u[i] >> v[i];
    }

    memset(asw, -1, sizeof asw);

    cout << dp(0, w) << endl;


    return 0;
}