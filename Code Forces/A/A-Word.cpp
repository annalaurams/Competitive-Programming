#include <bits/stdc++.h>
#include <cctype>
 
using namespace std;
 
int main() {
 
    string str, nova;
    cin >> str;
 
    int tam = 0, x = 0, y = 0;
    tam = str.length();
 
    for (int i = 0; i < tam; i++) {
 
        if ('A' <= str[i] && str[i] <= 'Z') {
            x++;
        }
 
        else if ('a' <= str[i] && str[i] <= 'z') {
            y++;
        }
    }
 
    if (x > y) {
        for (char &c : str) {
            nova += toupper(c);
        }
    }
 
    else if ((y > x) or (x == y)) {
        for (char &c : str) {
            nova += tolower(c);
        }
    }
    
    cout << nova << endl;
 
    return 0;
}