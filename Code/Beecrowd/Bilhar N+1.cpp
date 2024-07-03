#include <bits/stdc++.h>

using namespace std;

#define _ ios_base::sync_with_stdio(0); cin.tie(0);
#define endl '\n'

double distanciaEntrePontos(double x1, double y1, double x2, double y2) {
    return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
}

int main() {
    _;

    int c;
    cin >> c;

    while (c--) {
        int n = 0;
        cin >> n;

        vector<pair<double, double>> vec(n);

        double x, y;
        cin >> x >> y; 

        for (int i = 0; i < n; i++) {
            cin >> vec[i].first >> vec[i].second;
        }

        double distancia = numeric_limits<double>::max(); 
        int bolaMaisProxima = -1; 

        for (int i = 0; i < n; i++) {
            double x1 = vec[i].first;
            double y1 = vec[i].second;

            double d = distanciaEntrePontos(x, y, x1, y1);

            if (d < distancia) {
                distancia = d;
                bolaMaisProxima = i + 1;
            }
        }
        cout << bolaMaisProxima << endl;
    }

    return 0;
}
