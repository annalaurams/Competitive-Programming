
#include <bits/stdc++.h>
using namespace std;

#define _ ios_base::sync_with_stdio(0); cin.tie(0);
#define endl '\n'

#define dbg(x) cout << #x << " = " << x << endl

typedef long long ll;

const int MOD = 1000000007;


int main() {

    _;

    //vector<vector<int>> matriz;

    vector<vector<char>> matriz(4, vector<char>(4));
    int hast =0, pont =0;

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            cin >> matriz[i][j];
        }
    }

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {

            vector<pair<int, int>> moves = { {0,1}, {1,0}, {1, 1}, {0,0} };

            for (pair<int, int> m : moves) {
                int u = i + m.first;
                int v = j + m.second;

                if (u >= 0 && u < 4 && v >= 0 && v < 4) {
                    if (matriz[u][v] == '#') {
                        hast++;
                    } else {
                        pont++;
                    }
                }
            }

            if (hast >= 3 || pont >= 3) {

                cout << "YES" << endl;
                return 0;
            }
            
            pont = 0;
            hast = 0;
        }
    }

    cout << "NO" << endl;

    return 0;
}
