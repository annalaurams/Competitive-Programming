// Hash de strings
#include <bits/stdc++.h>

using namespace std;

#define dbg(x) cout << #x << " = " << x << endl

#define _                       \
  ios_base::sync_with_stdio(0); \
  cin.tie(0);

// função original

/*int count_unique_substrings(string const& s) {
    int n = s.size();

    const int p = 31;
    const int m = 1e9 + 9;
    vector<long long> p_pow(n);
    p_pow[0] = 1;
    for (int i = 1; i < n; i++)
        p_pow[i] = (p_pow[i-1] * p) % m;

    vector<long long> h(n + 1, 0);
    for (int i = 0; i < n; i++)
        h[i+1] = (h[i] + (s[i] - 'a' + 1) * p_pow[i]) % m;

    int cnt = 0;
    for (int l = 1; l <= n; l++) {
        unordered_set<long long> hs;
        for (int i = 0; i <= n - l; i++) {
            long long cur_h = (h[i + l] + m - h[i]) % m;
            cur_h = (cur_h * p_pow[n-i-1]) % m;
            hs.insert(cur_h);
        }
        cnt += hs.size();
    }
    return cnt;
*/

int calculo_substring(string const &s, vector<bool> const &bom, int k) {

    int n = s.size();

    const int p = 31; // primo, +- mesma quantidade de letras
    const int m = 1e9 + 9;

    // Pre-calcula as potências de p mod m
    vector<long long> p_pow(n + 1);
    p_pow[0] = 1;

    for (int i = 1; i <= n; i++) {
        p_pow[i] = (p_pow[i - 1] * p) % m;
    }

    // hash de cada prefixo da string s
    vector<long long> h(n + 1, 0);
    for (int i = 0; i < n; i++) {
        h[i + 1] = (h[i] + (s[i] - 'a' + 1) * p_pow[i]) % m;
    }

    // armazena hashes distintos de substrings boas
    unordered_set<long long> hash_diferente;
   
    // Percorre cada substrings 
    for (int tam = 1; tam <= n; tam++) {

        // conta caracteres ruins 
        vector<int> cont_ruins(n + 1, 0);

        for (int i = 0; i < n; i++) {
            cont_ruins[i + 1] = cont_ruins[i];

            if (!bom[s[i] - 'a']) {
                cont_ruins[i + 1]++;
            }
        }

        // Percorre substrings de comprimento `tam`
        for (int start = 0; start <= n - tam; start++) {
            int end = start + tam; // p determinar o final da substring

            // Calcula a quantidade de caracteres ruins na substring
            int num_caracters_ruins = cont_ruins[end] - cont_ruins[start];

            // Se a quantidade de caracteres ruins é menor ou igual a `k`, calcule o hash da substring
            if (num_caracters_ruins <= k) {
                long long substring_hash = (h[end] + m - h[start]) % m;
                substring_hash = (substring_hash * p_pow[n - start - 1]) % m;

                // Adiciona o hash ao conjunto de hashes distintos
                hash_diferente.insert(substring_hash);
            }
        }
    }

    // o número de substrings boas distintas
    return hash_diferente.size();
  
}

int main() {
    _;

    string s;
    int k;

    cin >> s;

    string asw; // Lê a sequência de 26 caracteres `0` ou `1`
    cin >> asw;

    vector<bool> bom(26, false); // vetor para armazenar letras  boas ou ruins
    for (int i = 0; i < 26; i++) {
        bom[i] = (asw[i] == '1');
    }

    cin >> k;

    cout << calculo_substring(s, bom, k) << endl;

    return 0;
}
