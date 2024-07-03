#include <bits/stdc++.h>

using namespace std;

#define _ ios_base::sync_with_stdio(0); cin.tie(0);
#define endl '\n'


int main() {
    _;

    int n, k, result =0;

    while (cin >> n >> k) {

        if (n == 0 && k == 0) return 0;

        unordered_map<int, int> frequencia;
        
        for (int i = 0; i < n; ++i) {
            int p;
            cin >> p;
            frequencia[p]++;
        }
        
        int freq = 0;

        for (const auto& pair : frequencia) {
            if (pair.second >= k)
                freq++;
        }
        
        cout << freq << endl;
    }

    return 0;
}
