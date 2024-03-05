#include <bits/stdc++.h>
#include <cctype>
 
using namespace std;
 
bool is_prime(int num) {
    if (num < 2) {
        return false;
    }
 
    for (int i = 2; i * i <= num; ++i) { 
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}
 
int next_prime(int num) {
 
    int next_num = num + 1;
    
    while (!is_prime(next_num)) {
        next_num++;
    }
    return next_num;
}
 
int main() {
    int n, m;
    cin >> n >> m;
 
    n = next_prime(n);
 
    if (n == m) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
 
    return 0;
}