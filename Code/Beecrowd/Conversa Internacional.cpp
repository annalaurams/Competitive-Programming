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

    int n = 0;
    cin >> n;

    while (n--) {
        int k = 0;
        cin >> k;

        string idioma;
        set<string>asw;

        for (int i = 0; i < k; i++) {

            cin >> idioma;

            asw.insert(idioma);
        }

        if (asw.size() == 1)
            cout << idioma << endl;

        else
            cout << "ingles" << endl;
    }

    return 0;
}

