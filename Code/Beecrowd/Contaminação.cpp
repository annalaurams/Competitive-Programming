#include <bits/stdc++.h>

using namespace std;

#define _ ios_base::sync_with_stdio(0); cin.tie(0);
#define endl '\n'

#define dbg(x) cout << #x << " = " << x << endl

#define TAM 50

typedef unsigned long long ll;

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

int n = 0, m = 0;

void dfs(vector<vector<char>> &matriz, vector<vector<bool>> &visited, int i, int j) {

    if (i < 0 || i >= n || j < 0 || j >= m) return;

    if (visited[i][j] || matriz[i][j] == 'X') return;

    visited[i][j] = true;

    if (matriz[i][j] == 'A') {
        matriz[i][j] = 'T';
    }

    dfs(matriz, visited, i - 1, j);
    dfs(matriz, visited, i + 1, j);
    dfs(matriz, visited, i, j - 1);
    dfs(matriz, visited, i, j + 1);
}

int main() {
    _;

    while (cin >> n >> m) {

        vector<vector<char>> matriz(n, vector<char>(m));
        vector<vector<bool>> visited(n, vector<bool>(m, false));

        if (n == 0 && m == 0) return 0;

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> matriz[i][j];
            }
        }

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {

                if (!visited[i][j] && matriz[i][j] == 'T') {
                    dfs(matriz, visited, i, j);
                }
            }
        }

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cout << matriz[i][j];
            }
            cout << endl;
        }
      cout << endl;
    }

    return 0;
}

