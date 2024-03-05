#include <bits/stdc++.h>
using namespace std;
 
int main() {
 
    int n = 0;
    cin >> n;
 
    while (n--) {
 
        int num;
        cin >> num;
 
        for (int i = 2; i < 30; i++) {
 
            int x = (pow(2, i)) - 1;
 
            if (num % x == 0) {
                cout << num / x << endl;
                break;
            }
        }
    }
 
    return 0;
}