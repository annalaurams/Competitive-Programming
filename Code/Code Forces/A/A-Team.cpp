#include <bits/stdc++.h>
using namespace std;
 
int main() {
 
    int n = 0, asw = 0;
 
    cin >> n;
 
    while (n--) {
 
        int  x = 0, y = 0, z = 0;
 
        cin >> x >> y >> z;
 
        if((x == 1 && y == 1) || (x == 1 && z == 1) ||(y == 1 && z == 1)) {
            asw++;
        }
    }
 
    cout << asw << endl;
 
    return 0;
}