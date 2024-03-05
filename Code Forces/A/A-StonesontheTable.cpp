#include <bits/stdc++.h>
#include <cctype>
 
using namespace std;
 
int main() {
 
    int num = 0, asw = 0;
    string str;
 
    cin >> num >> str;
 
    for(int i=0; i<num; i++){

        if(str[i] == str[i+1]){
            
            int indice = i;
            str.erase(indice, 1);
            asw++;
            num--;
            i=0;
        }

        if(str[i] == str[i-1]){
            int indice = i;
            str.erase(indice, 1);
            asw++;
            num--;
            i=0;
        }
    }
 
    cout << asw << endl;
 
    return 0;
}