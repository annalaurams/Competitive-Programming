// Hash de strings
#include <bits/stdc++.h>

using namespace std;

#define dbg(x) cout << #x << " = " << x << endl

#define _                       \
  ios_base::sync_with_stdio(0); \
  cin.tie(0);

int calculo_substring(string const &s, vector<bool> const &bom, int k) {

    int n = s.size();

    const int p = 31;
    const int m = 1e9 + 9;

    vector<long long> p_pow(n + 1);
    p_pow[0] = 1;

    for (int i = 1; i <= n; i++) {
        p_pow[i] = (p_pow[i - 1] * p) % m;
    }

    vector<long long> h(n + 1, 0);
    for (int i = 0; i < n; i++) {
        h[i + 1] = (h[i] + (s[i] - 'a' + 1) * p_pow[i]) % m;
    }

    unordered_set<long long> hash_diferente;

    for (int tam = 1; tam <= n; tam++) {

        vector<int> cont_ruins(n + 1, 0);

        for (int i = 0; i < n; i++) {
            cont_ruins[i + 1] = cont_ruins[i];

            if (!bom[s[i] - 'a']) {
                cont_ruins[i + 1]++;
            }
        }

        for (int start = 0; start <= n - tam; start++) {
            int end = start + tam;

            int num_caracters_ruins = cont_ruins[end] - cont_ruins[start];

            if (num_caracters_ruins <= k) {
                long long substring_hash = (h[end] + m - h[start]) % m;
                substring_hash = (substring_hash * p_pow[n - start - 1]) % m;

                hash_diferente.insert(substring_hash);
            }
        }
    }

    return hash_diferente.size();
  
}

int main() {
    _;

    string s;
    int k;

    cin >> s;

    string asw;
    cin >> asw;

    vector<bool> bom(26, false);
    for (int i = 0; i < 26; i++) {
        bom[i] = (asw[i] == '1');
    }

    cin >> k;

    cout << calculo_substring(s, bom, k) << endl;

    return 0;
}
