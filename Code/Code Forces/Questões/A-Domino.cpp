#include <bits/stdc++.h>
using namespace std;

#define _ ios_base::sync_with_stdio(0); cin.tie(0);
#define endl '\n'

typedef long long ll;

int main() {
    _;

    int n = 0, x = 0, y = 0;
    cin >> n;


    vector<pair<int, int>>vec(n);

    for (int i = 0; i < n; ++i) {
        cin >> vec[i].first >> vec[i].second;
        x += vec[i].first;
        y += vec[i].second;
    }

    if (x % 2 == 0 && y % 2 == 0) {
        cout << 0 << endl;
        return 0;
    }

    if (x % 2 != 0 && y % 2 != 0) { // both sums are odd
        for (auto p : vec) {
            if (p.first % 2 != p.second % 2) {
                cout << 1 << endl;
                return 0;
            }
        }
    }

    cout << -1 << endl;

    return 0;
}
