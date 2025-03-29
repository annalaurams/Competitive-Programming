#include <bits/stdc++.h>
using namespace std;

int Cos(int n, int k) {
    int res = 1;
    for (int i = 1; i <= k; ++i)
        res = res * (n - k + i) / i;
    return (int)(res + 0.01);
}

int main() {
    int result = 0, n = 0, k = 0, t = 0;

    ifstream infile("popcorn.in");

    infile >> t;

    while (t--) {
        infile >> n >> k;
        result = Cos(n, k);
        cout << result << endl;
    }

    infile.close();

    return 0;
}
