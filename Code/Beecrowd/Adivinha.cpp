#include <bits/stdc++.h>

using namespace std;

#define _ ios_base::sync_with_stdio(0); cin.tie(0);
#define endl '\n'

#define dbg(x) cout << #x << " = " << x << endl

#define TAM 50

typedef unsigned long long ll;

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;


int main() {
    _;

    int t = 0;
    cin >> t;

    while (t--) {

        int  n = 0, c = 0, num = 0, menor = INF, indice;
        bool aux = false;

        cin >> n >> c;
//
         //   cout << endl << endl << endl;
        for (int i = 1; i <= n; i++) {

            cin >> num;
            int asw = abs(c - num);

           // cout << "\nNUm: " << num << " i+1:  " << i+1 << endl;

            if (num == c) {
                cout << i<< endl;
                aux = true;
                break;
            }

            else if (asw < menor) {
                menor = asw;
                indice = i;
            }
        }
        if (!aux)
            cout << indice<< endl;
    }

    return 0;
}

