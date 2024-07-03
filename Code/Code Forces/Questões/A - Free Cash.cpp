#include <bits/stdc++.h>
using namespace std;

#define _ ios_base::sync_with_stdio(0); cin.tie(0);
#define endl '\n'

typedef long long ll;

int main() {
    _;

    int n = 0, maior = 1;
   
    map<pair<int, int>, int> asw;

    cin >> n;

    for (int i = 0; i < n; i++) {

        int h, m;
        cin >> h >> m;

        asw[{h, m}]+=1;

        maior = max(maior, asw[{h, m}]);
    }

    cout << maior << endl;

    return 0;
}
