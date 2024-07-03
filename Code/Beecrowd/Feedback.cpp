#include <bits/stdc++.h>

using namespace std;

#define _ ios_base::sync_with_stdio(0); cin.tie(0);
#define endl '\n'

#define dbg(x) cout << #x << " = " << x << endl

#define TAM 50

typedef unsigned long long ll;

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;


int main() {
    _;

    int n = 0;
    cin >> n;

    map<int, string>mapa;

    mapa[1] = "Rolien";
    mapa[2] = "Naej";
    mapa[3] = "Elehcim";
    mapa[4] = "Odranoel";

    while (n--) {

        int k = 0;
        cin >> k;

        for (int i = 0; i < k; i++) {
            int num;
            cin >> num;

            cout << mapa[num] << endl;
        }

    }

    return 0;
}

