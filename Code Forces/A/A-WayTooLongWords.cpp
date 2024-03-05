#include <bits/stdc++.h>
using namespace std;
 
int main() {
 
   string str, asw;
   int n = 0, aux = 0;
 
    cin >> n;
 
    while(n--){

        cin >> str;
 
        if(str.length() <= 10) cout << str << endl;

        else{
                asw = str[0];
                aux = str.length() - 2;
                asw += to_string(aux);
                asw += str[str.length() - 1];
                cout << asw << endl;
        }
    }
 
    return 0;
}