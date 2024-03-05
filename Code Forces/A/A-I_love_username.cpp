#include <bits/stdc++.h>

using namespace std;

int main() {

    int n = 0, maior = 0, menor = 0, result = 0, max = 0, min = 0, num = 0;

    cin >> n;
    n--;
    cin >> num;
    maior = num;
    menor = num;

    while (n--) {

        cin >> num;

        if (num > maior) {
            maior = num;
            result++;
        } else if (num < menor) {
            menor = num;
            result++;
        }
        //cout << "Maior: " << maior << "     Menor: " << menor << endl;
    }

    cout << result << endl;
    return  0;
}