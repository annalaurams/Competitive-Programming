#include <bits/stdc++.h>

using namespace std;

int main() {

    double x, y;

    while (cin >> x >> y) {
        double result;
        result = x/y;
        cout << fixed <<  setprecision(3)  << result << " km/l" << endl;
    }


    return 0;
}