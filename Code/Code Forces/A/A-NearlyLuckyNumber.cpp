#include <bits/stdc++.h>

using namespace std;

bool numsorte(int n) {
    string str = to_string(n);
    for (char c : str) {
        if (c != '4' && c != '7') {
            return false;
        }
    }
    return true;
}

int main() {

    long long n = 0;
    cin >> n;

    int count = 0;

    while (n > 0) {

        int digito = n % 10;
        
        if (digito == 4 || digito == 7) {
            count++;
        }
        n /= 10;
    }

    if (numsorte(count)) 
        cout << "YES" << endl;

     else 
        cout << "NO" << endl;
    

    return 0;
}