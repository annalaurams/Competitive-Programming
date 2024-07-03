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

    ifstream infile("popcorn.in"); // Abre o arquivo de entrada

    infile >> t; // Lê o valor de t do arquivo

    while (t--) {
        infile >> n >> k; // Lê os valores de n e k do arquivo
        result = Cos(n, k);
        cout << result << endl;
    }

    infile.close(); // Fecha o arquivo de entrada

    return 0;
}
