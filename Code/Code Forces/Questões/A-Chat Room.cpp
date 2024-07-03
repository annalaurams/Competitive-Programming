#include <bits/stdc++.h>

using namespace std;

int main() {

    string str, ola = "hello";
    cin >> str;

    int i = 0;

    for (char c : str) {
    
        if (c == ola[i]) {
            i++;
        }

        if (i == ola.length()) {
            cout << "YES" << endl;
            return 0;
        }
    }

    cout << "NO" << endl;

    return 0;
}
