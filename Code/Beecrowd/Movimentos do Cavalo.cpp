#include <bits/stdc++.h>

using namespace std;

#define _ ios_base::sync_with_stdio(0); cin.tie(0);
#define endl '\n'

#define dbg(x) cout << #x << " = " << x << endl

typedef unsigned long long ll;

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

#define TAM 8

struct Posicao {
    int x = 0, y = 0;
};

int bfs(string xx, string yy) {
    
    int x_init = xx[0] - 'a' + 1;
    int y_init = xx[1] - '0';
    int inicio = x_init * 10 + y_init;
    int x_fim = yy[0] - 'a' + 1;
    int y_fim = yy[1] - '0';
    int fim = x_fim * 10 + y_fim;

    set<int> visited;
    queue<int> q;
    queue<int> qntMovimento;
    q.push(inicio);
    qntMovimento.push(0);
    visited.insert(inicio);

    int dx[] = { 2, -2, -1, 1, 1, 2, -2, -1 };
    int dy[] = { 1, -1, -2, -2, 2, -1, 1, 2 };

    while (!q.empty()) {
        int vertex = q.front();
        q.pop();
        int m = qntMovimento.front();
        qntMovimento.pop();

        if (vertex == fim) {
            return m;
        }

        int x = vertex / 10;
        int y = vertex % 10;

        for (int i = 0; i < 8; ++i) {
            int nx = x + dx[i];
            int ny = y + dy[i];
            if (nx > 0 && nx <= TAM && ny > 0 && ny <= TAM) {
                int neighbour = nx * 10 + ny;
                if (neighbour == fim) {
                    return m + 1;
                }
                if (visited.find(neighbour) == visited.end()) {
                    visited.insert(neighbour);
                    q.push(neighbour);
                    qntMovimento.push(m + 1);
                }
            }
        }
    }

    return -1; // Just a failsafe, normally should not reach here
}


int main() {
    _;

    string xx, yy;

    while (cin >> xx >> yy) {
        int asw = bfs(xx, yy);
        cout << "To get from " << xx << " to " << yy << " takes " << asw << " knight moves." << endl;
    }

    return 0;
}