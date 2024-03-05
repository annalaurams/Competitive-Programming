 #include <bits/stdc++.h>
 
using namespace std;
 
int main() {
 
    int x = 0, y = 0, z = 0, n = 0, i = 0, j = 0, k = 0;
 
    cin >> n;
 
    while (n--) {
 
        cin >> x >> y >> z;
 
        i += x;
        j += y;
        k += z;
    }
 
    if (i == 0 && j == 0 && k == 0) cout << "YES\n";
    else cout << "NO\n";
 
    return 0;
}