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

    while (n--) {

        int x, y, area;
        cin >> x >> y;

        area = (x*y) / 2;

        cout << area << " " << "cm2" << endl;
        
    }

    return 0;
}
