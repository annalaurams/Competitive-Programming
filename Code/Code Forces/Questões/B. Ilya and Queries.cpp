#include <bits/stdc++.h>

using namespace std;

#define dbg(x) cout << #x << " = " << x << endl

#define _                       \
  ios_base::sync_with_stdio(0); \
  cin.tie(0);

int main() {

    _;

    string str;
    int t;

    cin >> str >> t;

    vector<int> aux(str.length(), 0);

    for (int i = 1; i < str.length(); i++) {

        if (str[i] == str[i - 1])
            aux[i] = aux[i - 1] + 1;

        else
            aux[i] = aux[i - 1];

    }

    while (t--) {

        int l, r, asw;
        cin >> l >> r;

        asw = aux[r - 1] - aux[l - 1];
        cout << asw << endl;
    }

    return 0;
}
