#include <bits/stdc++.h>

using namespace std;

#define _ ios_base::sync_with_stdio(0); cin.tie(0);
#define endl '\n'



int main() {
    _;

    int t, n;
    cin >> t;

    while (t--) {

        cin >> n;

        vector<int> arr(n);
        vector<int>asw(n);

        int trocas = 0;

        for (int i = 0; i < n; i++) {
            cin >> arr[i];
            asw[i] = arr[i];

        }

        sort(arr.begin(), arr.end(), greater<int>());

        for (int i = 0; i < n; i++) {
            if (asw[i] != arr[i]) trocas++;
        }

        int aux = abs(trocas - n);

        cout << aux << endl;

        arr.clear();
    }

    return 0;
}
