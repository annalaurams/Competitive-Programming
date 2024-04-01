#include <iostream>
#include <vector>

using namespace std;

#define dbg(x) cout << #x << " = " << x << endl

#define _                       \
  ios_base::sync_with_stdio(0); \
  cin.tie(0);

int main() {

     _;

    long long int t;
    cin >> t;


    while (t--) {

        long long int n, asw;
        cin >> n;

        vector<long long int> aux(n+1);

        for (long long int i = 1; i < n+1; i++) {

            long long int num;
            cin >> num;

            if (i == 1) aux[i] = num;
            else aux[i] = num + aux[i - 1];

        }

        long long int q;
        cin >> q;

        while (q--) {

            long long int l, r;
            cin >> l >> r;

            if(l > 1) asw = aux[r] - aux[l - 1];
            else asw = aux[r];

            cout << asw << " ";

            asw = 0;
        }
    }

    cout << endl;
    return 0;

   
}
