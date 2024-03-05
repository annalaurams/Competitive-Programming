#include <bits/stdc++.h>
#include <cctype>
 
using namespace std;
 
int main() {
 
    double n = 0, soma = 0, tam = 0, asw = 0;
    cin >> n;
    tam = n;
 
    while (n--) {
        int x;
        cin >> x;
        soma += x;
    }
 
    asw = soma / tam;
 
    cout << asw << fixed << setprecision(12) << endl;
 
    return 0;
}