// B. Borze
#include <bits/stdc++.h>
#include <math.h>
 
using namespace std;

int main() {

    string str, result;
    cin >> str;
 
    for (size_t i = 0; i < str.size(); i++) {

        if (str[i] == '-' && str[i + 1] == '.') {
            result += '1';
            i++;  
        } 
        else if (str[i] == '-' && str[i + 1] == '-') {
            result += '2';
            i++;  
        } 
        else if (str[i] == '.') {
            result += '0';
        }
    }
 
    cout << result << endl;
 
    return 0;
}