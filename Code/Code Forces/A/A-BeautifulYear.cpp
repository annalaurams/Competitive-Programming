#include <bits/stdc++.h>

using namespace std;
 
int main() {
 
    int num = 0, cont = 0, j = 0, asw;
    vector<int> aux(4);
 
    cin >> num;
    num = num+1;
    asw = num;
    cont = num;
 
    while (cont < 10000) {
 
        while (num > 0) {
            int digito = num % 10;  // Pegar o último
            num /= 10;  // Remover o último 
            aux[j] = digito;
            j++;
        }
 
        bool dif = true;
 
        for (int i = 0; i < 4; i++) {
            for (int k = i + 1; k < 4; k++) {
                if (aux[i] == aux[k]) {
                    dif = false;
                    break;
                }
            }
        }
 
        if (dif) {
        
            cout << asw << endl;
            break;
        }
        cont++;
        asw++;
        num = asw;
        j = 0;
    }
 
    return 0;
}