#include <bits/stdc++.h>
#include <cctype>
 
using namespace std;
 
int main() {
 
    string str, nova;
    cin >> str;
 
    int tam = 0, x = 0, y = 0;
    tam = str.length();
 
    if (tam > 0 && 'a' <= str[0] && str[0] <= 'z') {
        nova += toupper(str[0]); 
 
        for (int i = 1; i < tam; i++) {
            nova += str[i]; 
        }
        
        cout << nova << endl;
    } 

    else 
        cout << str << endl; 
    
    return 0;
}